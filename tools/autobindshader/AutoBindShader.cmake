find_package(PythonInterp)

if(NOT PYTHONINTERP_FOUND)
	message(FATAL_ERROR "[AutoBindShader] Python not found!")
endif(NOT PYTHONINTERP_FOUND)

set(PYTHON3_EXECUTABLE ${PYTHON_EXECUTABLE} CACHE INTERNAL "")

#FIND_PROGRAM(PYTHON3_EXECUTABLE
#  NAMES python.exe
#  PATHS
#  [HKEY_LOCAL_MACHINE\\SOFTWARE\\Python\\PythonCore\\3.0\\InstallPath]
#  [HKEY_LOCAL_MACHINE\\SOFTWARE\\Python\\PythonCore\\3.1\\InstallPath]
#  )

if(NOT AutoBindShader_DIR)
	set(AutoBindShader_DIR ${LibSL_DIR}/src/tools/autobindshader CACHE INTERNAL "")
endif (NOT AutoBindShader_DIR)

macro(AUTO_BIND_SHADERS)
	include_directories( ${CMAKE_CURRENT_BINARY_DIR} )
	foreach(SHADER ${ARGN})
		if(IS_ABSOLUTE ${SHADER})
			file(GLOB inputs ${SHADER}.* )
		else()
			file(GLOB inputs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/${SHADER}.* )
			set (ABS_TARGET_BINARY_SHADER ${CMAKE_CURRENT_BINARY_DIR}/${SHADER}.h)
		endif()
		separate_arguments(inputs)
		message(STATUS "SHADER fileS : ${inputs}")

		if(IS_ABSOLUTE ${SHADER})
			include_directories( ${CMAKE_CURRENT_BINARY_DIR} )
		else()
			# Create a subdirectory if it does not exists already
			if(CMAKE_VERSION VERSION_LESS 2.8.12)
				get_filename_component(OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR}/${SHADER}.h PATH)
			else()
				get_filename_component(OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR}/${SHADER}.h DIRECTORY)
			endif()
			file(MAKE_DIRECTORY "${OUTPUT_DIR}")
			include_directories( ${OUTPUT_DIR} )
		endif()

		if(IS_ABSOLUTE ${SHADER})
			get_filename_component(OUTPUT_file ${SHADER}.h NAME)
			add_custom_command(
							OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_file}
							COMMAND ${PYTHON3_EXECUTABLE} ${AutoBindShader_DIR}/autobindshader.py "${SHADER}.fp"
							DEPENDS ${inputs}
							WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
							COMMENT "AutoBindShader")
		else()
			add_custom_command(
							OUTPUT ${SHADER}.h
							COMMAND ${PYTHON3_EXECUTABLE} ${AutoBindShader_DIR}/autobindshader.py "${CMAKE_CURRENT_SOURCE_DIR}/${SHADER}.fp"
							DEPENDS ${inputs}
							WORKING_DIRECTORY ${OUTPUT_DIR}
							COMMENT "AutoBindShader")
		endif()
		message(STATUS "Adding rule for AutoBindShader <${SHADER}>")
	endforeach(SHADER)
endmacro(AUTO_BIND_SHADERS)


function(target_bind_shaders TARGET_NAME)
	foreach(SHADER_file ${ARGN})
		get_filename_component(SHADER_BASE ${SHADER_file} NAME)
		file(GLOB INPUTS ${CMAKE_CURRENT_SOURCE_DIR}/${SHADER_file}.*)

		# Log message
		set(INPUTS_BASE "")
		foreach(INPUT ${INPUTS})
			get_filename_component(RES ${INPUT} NAME)
			set(INPUTS_BASE ${INPUTS_BASE} ${RES})
		endforeach()
		message(STATUS "Binding shader (${SHADER_BASE}): ${INPUTS_BASE}")

		# Custom build command
		set(OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_CFG_INTDIR})
		set(OUTPUT_file ${OUTPUT_DIR}/${SHADER_BASE}.h)

		# Be careful with custom commands:
		# https://samthursfield.wordpress.com/2015/11/21/cmake-dependencies-between-targets-and-files-and-custom-commands/
		add_custom_command(
			OUTPUT ${OUTPUT_file}
			COMMAND ${PYTHON3_EXECUTABLE} ${AutoBindShader_DIR}/autobindshader.py "${CMAKE_CURRENT_SOURCE_DIR}/${SHADER_file}.fp"
			DEPENDS ${INPUTS}
			WORKING_DIRECTORY ${OUTPUT_DIR}
			COMMENT "AutoBindShader"
		)
		add_custom_target(
			${TARGET_NAME}_${SHADER_BASE}
			DEPENDS ${OUTPUT_file}
		)
		set_source_files_properties(${OUTPUT_file} PROPERTIES GENERATED TRUE)
		add_dependencies(${TARGET_NAME} ${TARGET_NAME}_${SHADER_BASE})
		target_include_directories(${TARGET_NAME} PUBLIC ${OUTPUT_DIR})

		# Organize shader targets in folders
		set_property(GLOBAL PROPERTY USE_FOLDERS ON)
		set_target_properties(${TARGET_NAME}_${SHADER_BASE} PROPERTIES FOLDER "${TARGET_NAME}_shaders")
	endforeach()
endfunction()
