project(LIBSL)

###############################

add_subdirectory(ArrayHelpers)
add_subdirectory(CgHelpers)
add_subdirectory(CppHelpers)
add_subdirectory(D3DHelpers)
add_subdirectory(DataStructures)
add_subdirectory(Errors)
add_subdirectory(Geometry)
add_subdirectory(GLHelpers)
add_subdirectory(GPUHelpers)
add_subdirectory(GPUMesh)
add_subdirectory(GPUTex)
add_subdirectory(Image)
if(LIBSL_BUILD_SHARP)
	add_subdirectory(LibSL_sharp)
endif(LIBSL_BUILD_SHARP)
add_subdirectory(LinAlg)
add_subdirectory(Math)
add_subdirectory(Memory)
add_subdirectory(Mesh)
add_subdirectory(Shaders)
add_subdirectory(StlHelpers)
add_subdirectory(SvgHelpers)
add_subdirectory(System)
add_subdirectory(TemplateHelpers)
add_subdirectory(UIHelpers)
add_subdirectory(Win32Helpers)

set(LIBSL_CORE_HEADERS
	LibSL.common.h
	LibSL.h
	LibSL.precompiled.h
	)

set(LIBSL_CORE_SOURCE
	#	./LibSL.cpp
	)

createsourcegroups("Header files" src "${LIBSL_CORE_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_CORE_SOURCE}")

###############################

set(LIBSL_GL_HEADERS
	LibSL_gl.h
	Mesh/AnimatedMeshGLSLRenderer.h
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
	Mesh/AnimatedMeshGLSLRenderer.cpp
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
	Mesh/AnimatedMeshGLSLRenderer.h
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
	Mesh/AnimatedMeshGLSLRenderer.cpp
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

createsourcegroups("Header files" src "${LIBSL_GL_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_GL_SOURCE}")

createsourcegroups("Header files" src "${LIBSL_GL4_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_GL4_SOURCE}")

createsourcegroups("Header files" src "${LIBSL_GL4CORE_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_GL4CORE_SOURCE}")

###############################

set(LIBSL_DX9_HEADERS
	LibSL_d3d.h
	#D3DHelpers/D3DHelpers.h
	#D3DHelpers/FxImageProcessing.h
	#D3DHelpers/D3DQuad.h
	#D3DHelpers/FxHelpers.h
	#D3DHelpers/FxHelpers_dx9_policy.h
	GPUHelpers/Font.h
	GPUHelpers/GPUHelpers.h
	GPUHelpers/GPUHelpers_d3d.h
	GPUHelpers/Profiler.h
	GPUHelpers/Shapes.h
	Image/ImageFormat_dds.h
	Mesh/AnimatedMeshFxRenderer.h
	Mesh/MeshRenderer.h
	Mesh/TexturedMeshRenderer.h
	UIHelpers/Manipulator.h
	UIHelpers/SimpleUI.h
	UIHelpers/TrackballUI.h
	UIHelpers/Trackball.h
)

set(LIBSL_DX9_SOURCE
	#D3DHelpers/D3DHelpers.cpp
	#D3DHelpers/FxImageProcessing.cpp
	#D3DHelpers/D3DQuad.cpp
	GPUHelpers/Font.cpp
	GPUHelpers/GPUHelpers.cpp
	GPUHelpers/Profiler.cpp
	GPUHelpers/Shapes.cpp
	Image/ImageFormat_dds.cpp
	Mesh/AnimatedMeshFxRenderer.cpp
	UIHelpers/Manipulator.cpp
	UIHelpers/SimpleUI.cpp
	UIHelpers/TrackballUI.cpp
	UIHelpers/Trackball.cpp
	UIHelpers/BindAntTweakBar.cpp
)

createsourcegroups("Header files" src "${LIBSL_DX9_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_DX9_SOURCE}")

###############################

set(LIBSL_DX10_HEADERS
	LibSL_dx10.h
	#D3DHelpers/D3DHelpers.h
	#D3DHelpers/FxImageProcessing.h
	#D3DHelpers/D3DQuad.h
	#D3DHelpers/FxHelpers.h
	#D3DHelpers/FxHelpers_dx10_policy.h
	GPUHelpers/Font.h
	GPUHelpers/GPUHelpers.h
	GPUHelpers/GPUHelpers_d3d.h
	GPUHelpers/Profiler.h
	GPUHelpers/Shapes.h
	Image/ImageFormat_dds.h
	Mesh/AnimatedMeshFxRenderer.h
	Mesh/MeshRenderer.h
	Mesh/TexturedMeshRenderer.h
	UIHelpers/Manipulator.h
	UIHelpers/SimpleUI.h
	UIHelpers/TrackballUI.h
	UIHelpers/Trackball.h
)

set(LIBSL_DX10_SOURCE
	#D3DHelpers/D3DHelpers.cpp
	#D3DHelpers/FxImageProcessing.cpp
	#D3DHelpers/D3DQuad.cpp
	GPUHelpers/Font.cpp
	GPUHelpers/GPUHelpers.cpp
	GPUHelpers/Profiler.cpp
	GPUHelpers/Shapes.cpp
	Image/ImageFormat_dds.cpp
	Mesh/AnimatedMeshFxRenderer.cpp
	UIHelpers/Manipulator.cpp
	UIHelpers/SimpleUI.cpp
	UIHelpers/TrackballUI.cpp
	UIHelpers/Trackball.cpp
	UIHelpers/BindAntTweakBar.cpp
)

createsourcegroups("Header files" src "${LIBSL_DX10_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_DX10_SOURCE}")

###############################

# if    (WIN32)
# add_definitions("-DHAS_TAUCS")
# endif (WIN32)

set(LIBSL_LINALG_HEADERS
	LibSL_linalg.h
	LinAlg/LinearSolver.h
	LinAlg/PCA.h
	LinAlg/SparseMatrix.h
	Image/PushPull.h
)

set(LIBSL_LINALG_SOURCE
	LinAlg/PCA.cpp
)

createsourcegroups("Header files" src "${LIBSL_LINALG_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_LINALG_SOURCE}")

###############################

add_library(LibSL STATIC ${LIBSL_CORE_SOURCE} ${LIBSL_CORE_HEADERS})
set_target_properties(LibSL PROPERTIES DEBUG_POSTFIX "-d")
set_property(TARGET LibSL APPEND PROPERTY
   INTERFACE_include_directories
			${CMAKE_CURRENT_SOURCE_DIR}/libs
			${CMAKE_CURRENT_SOURCE_DIR}/libs/loki/include
			${CMAKE_CURRENT_SOURCE_DIR}/libs/tclap/include
			${CMAKE_CURRENT_SOURCE_DIR}/libs/glux/src
			${CMAKE_CURRENT_SOURCE_DIR}/libs/png
			${CMAKE_CURRENT_SOURCE_DIR}/libs/jpeg
			${CMAKE_CURRENT_SOURCE_DIR}/libs/zlib
			${CMAKE_CURRENT_SOURCE_DIR}/libs/newmat
			${CMAKE_CURRENT_SOURCE_DIR}/libs/tinyxml
			${CMAKE_CURRENT_SOURCE_DIR}/libs/anttweakbar/include
			${CMAKE_CURRENT_SOURCE_DIR}/libs/OpenNL/src
			${CMAKE_CURRENT_SOURCE_DIR}/libs/TAUCS/include
			${CMAKE_CURRENT_SOURCE_DIR}/libs/SQLite/
			${CMAKE_CURRENT_SOURCE_DIR}/libs/hashlibpp/src/
			${CMAKE_CURRENT_SOURCE_DIR}/libs/rply/
			${CMAKE_CURRENT_SOURCE_DIR}/libs/imgui/
			${CMAKE_CURRENT_SOURCE_DIR}/libs/qhull/src/libqhull_r/
			$ENV{DXSDK_DIR}/include
			$ENV{DXSDK_DIR}/lib/x86
			$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core)

add_definitions(-D_UNICODE -DUNICODE)
add_definitions(-DTW_STATIC -DTW_NO_LIB_PRAGMA)

# Compile LibSL with CXX11 support if available (ConvexHull with multithread support)
if (EMSCRIPTEN)
	include(UseCXX11)
	AddTargetCXX11(LibSL)
else()
	if(${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang")
		include(UseCXX11_clang)
	else()
		include(UseCXX11)
		AddTargetCXX11(LibSL)
	endif()
endif()

if    (LIBSL_BUILD_MAX_PERFORMANCE)
add_definitions("-DNDEBUG")
endif (LIBSL_BUILD_MAX_PERFORMANCE)

if (LIBSL_POWER_USER)
add_definitions("-DLIBSL_IDKFK")
endif (LIBSL_POWER_USER)

if(WIN32)
#target_link_libraries(LibSL jpeg png 3ds zlib loki qhull shlwapi psapi winmm tinyxml hashlibpp)
target_link_libraries(LibSL jpeg png 3ds zlib qhull shlwapi psapi winmm tinyxml hashlibpp)
else(WIN32)
#target_link_libraries(LibSL jpeg png 3ds zlib loki qhull tinyxml hashlibpp)
target_link_libraries(LibSL jpeg png 3ds zlib qhull tinyxml hashlibpp)
endif(WIN32)

install(TARGETS LibSL
  RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
  LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/lib
  ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
)

if(NOT WIN32)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/libLibSL.a" DESTINATION ${CMAKE_SOURCE_DIR}/lib)
endif(NOT WIN32)

###############################

#if (WIN32)
#    set_source_files_properties(LibSL.precompiled.cpp
#        PROPERTIES
#        COMPILE_FLAGS "/YcLibSL.precompiled.h"
#        )
#    foreach( src_file ${LIBSL_CORE_SOURCE} )
#        set_source_files_properties(
#            ${src_file}
#            PROPERTIES
#            COMPILE_FLAGS "/YuLibSL.precompiled.h"
#            )
#    endforeach( src_file ${LIBSL_CORE_SOURCE} )
#    list(APPEND LIBSL_CORE_SOURCE LibSL.precompiled.cpp)
#endif (WIN32)

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

#  if (NOT EMSCRIPTEN)
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
#  endif (NOT EMSCRIPTEN)

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

###############################

if(LIBSL_BUILD_DX9)
	include_directories($ENV{DXSDK_DIR}/Samples/C++/DXUT/Core)
	include_directories($ENV{DXSDK_DIR}/Include)
	add_library(LibSL_d3d STATIC ${LIBSL_DX9_SOURCE} ${LIBSL_DX9_HEADERS})
	set_target_properties(LibSL_d3d PROPERTIES COMPILE_FLAGS -DDIRECT3D)
	set_target_properties(LibSL_d3d PROPERTIES DEBUG_POSTFIX "-d")
	target_link_libraries(LibSL_d3d LibSL)
	install(TARGETS LibSL_d3d
		RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
		LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/lib
		ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
	)
endif(LIBSL_BUILD_DX9)

###############################

if(LIBSL_BUILD_DX10)
	include_directories($ENV{DXSDK_DIR}/Samples/C++/DXUT/Core)
	include_directories($ENV{DXSDK_DIR}/Include)
	add_library(LibSL_dx10 STATIC ${LIBSL_DX10_SOURCE} ${LIBSL_DX10_HEADERS})
	set_target_properties(LibSL_dx10 PROPERTIES COMPILE_FLAGS -DDIRECTX10)
	set_target_properties(LibSL_dx10 PROPERTIES DEBUG_POSTFIX "-d")
	target_link_libraries(LibSL_dx10 LibSL)
	install(TARGETS LibSL_dx10
		RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
		LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/lib
		ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
	)
endif(LIBSL_BUILD_DX10)

###############################

if(LIBSL_BUILD_LINALG)
#	if(WIN32)
#		include_directories(${CMAKE_SOURCE_DIR}/src/libs/bin/win32/TAUCS/include)
#		set(TAUCS_LIB_PATH ${CMAKE_SOURCE_DIR}/src/libs/bin/win32/TAUCS/lib)
#	endif(WIN32)
	add_library(LibSL_linalg STATIC ${LIBSL_LINALG_SOURCE} ${LIBSL_LINALG_HEADERS})
	set_target_properties(LibSL_linalg PROPERTIES DEBUG_POSTFIX "-d")
	target_link_libraries(LibSL_linalg LibSL)
	target_link_libraries(LibSL_linalg nl newmat)
#	if(WIN32)
#		target_link_libraries(LibSL_linalg ${TAUCS_LIB_PATH}/libatlas.lib ${TAUCS_LIB_PATH}/libcblas.lib ${TAUCS_LIB_PATH}/libf77blas.lib ${TAUCS_LIB_PATH}/liblapack.lib ${TAUCS_LIB_PATH}/libmetis.lib ${TAUCS_LIB_PATH}/vcf2c.lib ${TAUCS_LIB_PATH}/libtaucs.lib)
#	endif(WIN32)
	install(TARGETS LibSL_linalg
		RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
		LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/lib
		ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
	)
endif(LIBSL_BUILD_LINALG)

###############################

# various fixes
if(APPLE)
set(CMAKE_C_ARCHIVE_FINISH "<CMAKE_RANLIB> -c <TARGET>")
set(CMAKE_CXX_ARCHIVE_FINISH "<CMAKE_RANLIB> -c <TARGET>")
set(CMAKE_Fortran_ARCHIVE_FINISH "<CMAKE_RANLIB> -c <TARGET>")
endif(APPLE)

###############################
