cmake_minimum_required(VERSION 2.6)

# message(STATUS "[in LibSL/src/]")

if (NOT DEFINED CMAKE_BUILD_TYPE)
	if(LIBSL_BUILD_DEBUG)
		set(CMAKE_BUILD_TYPE Debug)
	else(LIBSL_BUILD_DEBUG)
		set(CMAKE_BUILD_TYPE Release)
	endif(LIBSL_BUILD_DEBUG)
endif()

add_subdirectory(libs/src)
add_subdirectory(LibSL)

if(LIBSL_BUILD_SHARP)
	add_subdirectory(LibSL_sharp)
endif(LIBSL_BUILD_SHARP)

if(LIBSL_BUILD_TOOLS)
	if(NOT EMSCRIPTEN)
		if(NOT ANDROID)
			add_subdirectory(tools)
		endif(NOT ANDROID)
	endif(NOT EMSCRIPTEN)
endif(LIBSL_BUILD_TOOLS)

# add_subdirectory(tests)

if(LIBSL_BUILD_TUTORIALS)
	add_subdirectory(tutorials)
endif(LIBSL_BUILD_TUTORIALS)

if(EMSCRIPTEN)
	# add_subdirectory(tests/emscripten)
endif(EMSCRIPTEN)
