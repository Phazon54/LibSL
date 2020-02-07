add_subdirectory(CgHelpers)
add_subdirectory(GLHelpers)
add_subdirectory(GPUHelpers)
add_subdirectory(GPUMesh)
add_subdirectory(GPUTex)
add_subdirectory(Shaders)
add_subdirectory(UIHelpers)

set(LIBSL_GL_HEADERS
	LibSL_gl.h
	../LibSL-core/Mesh/AnimatedMeshGLSLRenderer.h
	GLHelpers/GLHelpers.h
  GLHelpers/GLBasicPipeline.h
	UIHelpers/BindAntTweakBar.h
 	UIHelpers/BindImGui.h
	UIHelpers/StyleManager.h
  )

set(LIBSL_GL_SOURCE
	GLHelpers/GLHelpers.cpp
	GLHelpers/AutoBindShader.cpp
	GLHelpers/GLBasicPipeline.cpp
	GLHelpers/Triangulate.cpp
	GPUHelpers/Font.cpp
	GPUHelpers/GPUHelpers.cpp
	GPUHelpers/Profiler.cpp
	GPUHelpers/Shapes.cpp
	../LibSL-core/Mesh/AnimatedMeshGLSLRenderer.cpp
	UIHelpers/Manipulator.cpp
	UIHelpers/SimpleUI.cpp
  UIHelpers/TrackballUI.cpp
	UIHelpers/Trackball.cpp
	UIHelpers/BindAntTweakBar.cpp
	UIHelpers/BindImGui.cpp
	UIHelpers/StyleManager.cpp
)

set(LIBSL_GL4_HEADERS
	LibSL_gl4.h
	../LibSL-core/Mesh/AnimatedMeshGLSLRenderer.h
	GLHelpers/GLHelpers.h
  GLHelpers/GLBasicPipeline.h
	UIHelpers/BindAntTweakBar.h
 	UIHelpers/BindImGui.h
	UIHelpers/StyleManager.h
  )

set(LIBSL_GL4_SOURCE
	GLHelpers/GLHelpers.cpp
	GLHelpers/AutoBindShader.cpp
  GLHelpers/GLBasicPipeline.cpp
	GLHelpers/Triangulate.cpp
	GPUHelpers/Font.cpp
	GPUHelpers/GPUHelpers.cpp
	GPUHelpers/Profiler.cpp
	GPUHelpers/Shapes.cpp
	../LibSL-core/Mesh/AnimatedMeshGLSLRenderer.cpp
	UIHelpers/Manipulator.cpp
	UIHelpers/SimpleUI.cpp
	UIHelpers/TrackballUI.cpp
	UIHelpers/Trackball.cpp
	UIHelpers/StyleManager.cpp
	UIHelpers/BindAntTweakBar.cpp
 	UIHelpers/BindImGui.cpp
)

set(LIBSL_GL4CORE_HEADERS
	LibSL_gl4core.h
	GLHelpers/GLHelpers.h
  GLHelpers/GLBasicPipeline.h
	UIHelpers/BindAntTweakBar.h
 	UIHelpers/BindImGui.h
	UIHelpers/StyleManager.h
  )

set(LIBSL_GL4CORE_SOURCE
	GLHelpers/GLHelpers.cpp
	GLHelpers/AutoBindShader.cpp
  GLHelpers/GLBasicPipeline.cpp
	GLHelpers/Triangulate.cpp
	GPUHelpers/Font.cpp
	GPUHelpers/GPUHelpers.cpp
	GPUHelpers/Profiler.cpp
	GPUHelpers/Shapes.cpp
	UIHelpers/Manipulator.cpp
	UIHelpers/SimpleUI.cpp
	UIHelpers/StyleManager.cpp
	UIHelpers/TrackballUI.cpp
	UIHelpers/Trackball.cpp
	UIHelpers/BindAntTweakBar.cpp
 	UIHelpers/BindImGui.cpp
)

###############################

if(LIBSL_BUILD_GL4)
	if(NOT LIBSL_BUILD_GL)
		message( FATAL_ERROR "LibSL for OpenGL 4.x requires to build the standard OpenGL version")
	endif(NOT LIBSL_BUILD_GL)
endif(LIBSL_BUILD_GL4)

if(LIBSL_BUILD_GL4CORE)
	if(NOT LIBSL_BUILD_GL)
		message( FATAL_ERROR "LibSL for OpenGL 4.x core profile requires to build the standard OpenGL version")
	endif(NOT LIBSL_BUILD_GL)
endif(LIBSL_BUILD_GL4CORE)

###############################

if(LIBSL_BUILD_GL)
	if(NOT ANDROID)
		find_package(OpenGL)
	elseif(NOT ANDROID)
		set(OPENGL_LIBRARIES EGL GLESv2)
	endif(NOT ANDROID)

	add_library(LibSL_gl STATIC ${LIBSL_GL_SOURCE} ${LIBSL_GL_HEADERS})
	
	#if (NOT EMSCRIPTEN)
	if (LIBSL_USE_GLUX)
	  add_definitions(-DUSE_GLUX)
	  set_target_properties(LibSL_gl PROPERTIES COMPILE_DEFINITIONS "USE_GLUX")
	  set_property(TARGET LibSL_gl APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS USE_GLUX)
	  if(NOT WIN32)
	    # hack due to MESA headers including ARB_multitexture
	    add_definitions(-DGL_ARB_multitexture=1)
	    set_property(TARGET LibSL_gl APPEND PROPERTY COMPILE_DEFINITIONS GL_ARB_multitexture=1)
	    set_property(TARGET LibSL_gl APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS GL_ARB_multitexture=1)
	  endif(NOT WIN32)
	endif (LIBSL_USE_GLUX)
	#endif (NOT EMSCRIPTEN)

  set_target_properties(LibSL_gl PROPERTIES DEBUG_POSTFIX "-d")

	if(WIN32)
		set_target_properties(LibSL_gl PROPERTIES COMPILE_DEFINITIONS "OPENGL;_WIN32_WINNT=0x0400;WINVER=0x500")
	else(WIN32)
    if (ANDROID)
      set_target_properties(LibSL_gl PROPERTIES COMPILE_DEFINITIONS "OPENGL")
      target_link_libraries(LibSL_gl ${OPENGL_LIBRARIES})
      target_link_libraries(LibSL_gl ${GLUT_LIBRARIES})
      install(FILES "${CMAKE_CURRENT_BINARY_DIR}/libLibSL_gl.a" DESTINATION ${CMAKE_SOURCE_DIR}/lib)
    else(ANDROID)
      find_package(OpenGL)
      if(LIBSL_USE_GLFW)
        #find_package(glfw3)
        set_target_properties(LibSL_gl PROPERTIES COMPILE_DEFINITIONS "OPENGL;USE_GLFW")
        target_link_libraries(LibSL_gl ${OPENGL_LIBRARIES})
        target_link_libraries(LibSL_gl glfw)
      else(LIBSL_USE_GLFW)
        find_package(GLUT)
        set_target_properties(LibSL_gl PROPERTIES COMPILE_DEFINITIONS "OPENGL;USE_GLUT")
        target_link_libraries(LibSL_gl ${OPENGL_LIBRARIES})
        target_link_libraries(LibSL_gl ${GLUT_LIBRARIES})
      endif(LIBSL_USE_GLFW)
      install(FILES "${CMAKE_CURRENT_BINARY_DIR}/libLibSL_gl.a" DESTINATION ${CMAKE_SOURCE_DIR}/lib)
    endif(ANDROID)
	endif(WIN32)

	if(APPLE)
		add_definitions(-DGL_GLEXT_LEGACY)
	endif(APPLE)

	set_property(TARGET LibSL_gl APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS TW_STATIC TW_NO_LIB_PRAGMA)

  if (LIBSL_USE_GLUX)
  	if (ANDROID)
			target_link_libraries(LibSL_gl LibSL)
  	else(ANDROID)
			target_link_libraries(LibSL_gl LibSL glux)
  	endif(ANDROID)
  else(LIBSL_USE_GLUX)
		target_link_libraries(LibSL_gl LibSL)
  endif(LIBSL_USE_GLUX)
  
	install(TARGETS LibSL_gl
		RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
		LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/lib
		ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
	)

  #####
  
	if (LIBSL_BUILD_GL4)
		add_library(LibSL_gl4 STATIC ${LIBSL_GL4_SOURCE} ${LIBSL_GL4_HEADERS})
		set_target_properties(LibSL_gl4 PROPERTIES DEBUG_POSTFIX "-d")

		if (LIBSL_USE_GLUX)
	  	add_definitions(-DUSE_GLUX)
	  	set_target_properties(LibSL_gl4 PROPERTIES COMPILE_DEFINITIONS "USE_GLUX")
	  	set_property(TARGET LibSL_gl4 APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS USE_GLUX)
	  		if(NOT WIN32)
	    		# hack due to MESA headers including ARB_multitexture
	    		add_definitions(-DGL_ARB_multitexture=1)
	    		set_property(TARGET LibSL_gl4 APPEND PROPERTY COMPILE_DEFINITIONS GL_ARB_multitexture=1)
	    		set_property(TARGET LibSL_gl4 APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS GL_ARB_multitexture=1)
	  		endif(NOT WIN32)
		endif (LIBSL_USE_GLUX)

		if(WIN32)
			set_target_properties(LibSL_gl4 PROPERTIES COMPILE_DEFINITIONS "OPENGL;OPENGL4;_WIN32_WINNT=0x0400;WINVER=0x500")
		else(WIN32)
			find_package(OpenGL)
    	if(LIBSL_USE_GLFW)
      	find_package(glfw3 REQUIRED)
      	set_target_properties(LibSL_gl4 PROPERTIES COMPILE_DEFINITIONS "OPENGL;OPENGL4;USE_GLFW")
      	target_link_libraries(LibSL_gl4 ${OPENGL_LIBRARIES})
      	target_link_libraries(LibSL_gl4 glfw) #${GLFW3_LIBRARIES}
    	else(LIBSL_USE_GLFW)
      	find_package(GLUT)
      	set_target_properties(LibSL_gl4 PROPERTIES COMPILE_DEFINITIONS "OPENGL;OPENGL4;USE_GLUT")
      	target_link_libraries(LibSL_gl4 ${OPENGL_LIBRARIES})
      	target_link_libraries(LibSL_gl4 ${GLUT_LIBRARIES})
    	endif(LIBSL_USE_GLFW)
			install(FILES "${CMAKE_CURRENT_BINARY_DIR}/libLibSL_gl4.a" DESTINATION ${CMAKE_SOURCE_DIR}/lib)
		endif(WIN32)

		if(APPLE)
			add_definitions(-DGL_GLEXT_LEGACY)
		endif(APPLE)

		set_property(TARGET LibSL_gl4 APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS TW_STATIC TW_NO_LIB_PRAGMA)

  	if (LIBSL_USE_GLUX)
			target_link_libraries(LibSL_gl4 LibSL glux)
  	else(LIBSL_USE_GLUX)
			target_link_libraries(LibSL_gl4 LibSL)
  	endif(LIBSL_USE_GLUX)

		install(TARGETS LibSL_gl4
			RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
			LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/lib
			ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
		)
	endif(LIBSL_BUILD_GL4)

  #####
  
	if (LIBSL_BUILD_GL4CORE)
		add_library(LibSL_gl4core STATIC ${LIBSL_GL4CORE_SOURCE} ${LIBSL_GL4CORE_HEADERS})
		set_target_properties(LibSL_gl4core PROPERTIES DEBUG_POSTFIX "-d")

		if (LIBSL_USE_GLUX)
	  	add_definitions(-DUSE_GLUX)
	  	set_target_properties(LibSL_gl4core PROPERTIES COMPILE_DEFINITIONS "USE_GLUX")
	  	set_property(TARGET LibSL_gl4core APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS USE_GLUX)
	  	if(NOT WIN32)
	    	# hack due to MESA headers including ARB_multitexture
	    	add_definitions(-DGL_ARB_multitexture=1)
	    	set_property(TARGET LibSL_gl4core APPEND PROPERTY COMPILE_DEFINITIONS GL_ARB_multitexture=1)
	    	set_property(TARGET LibSL_gl4core APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS GL_ARB_multitexture=1)
	  	endif(NOT WIN32)
		endif (LIBSL_USE_GLUX)

		if(WIN32)
			set_target_properties(LibSL_gl4core PROPERTIES COMPILE_DEFINITIONS "OPENGL;OPENGL4;OPENGLCORE;_WIN32_WINNT=0x0400;WINVER=0x500")
		else(WIN32)
			find_package(OpenGL)
      if(LIBSL_USE_GLFW)
      	find_package(glfw3 REQUIRED)
      	set_target_properties(LibSL_gl4core PROPERTIES COMPILE_DEFINITIONS "OPENGL;OPENGL4;OPENGLCORE;USE_GLFW")
      	target_link_libraries(LibSL_gl4core ${OPENGL_LIBRARIES})
      	target_link_libraries(LibSL_gl4core glfw) #${GLFW3_LIBRARIES}
      else(LIBSL_USE_GLFW)
      	find_package(GLUT)
      	set_target_properties(LibSL_gl4core PROPERTIES COMPILE_DEFINITIONS "OPENGL;OPENGL4;OPENGLCORE;USE_GLUT")
      	target_link_libraries(LibSL_gl4core ${OPENGL_LIBRARIES})
      	target_link_libraries(LibSL_gl4core ${GLUT_LIBRARIES})
      endif(LIBSL_USE_GLFW)
      install(FILES "${CMAKE_CURRENT_BINARY_DIR}/libLibSL_gl4core.a" DESTINATION ${CMAKE_SOURCE_DIR}/lib)
		endif(WIN32)

		if(APPLE)
			add_definitions(-DGL_GLEXT_LEGACY)
		endif(APPLE)

		set_property(TARGET LibSL_gl4core APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS TW_STATIC TW_NO_LIB_PRAGMA)

		target_link_libraries(LibSL_gl4core LibSL glux)
		install(TARGETS LibSL_gl4core
			RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
			LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/lib
			ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
		)
	endif(LIBSL_BUILD_GL4CORE)
	
endif(LIBSL_BUILD_GL)