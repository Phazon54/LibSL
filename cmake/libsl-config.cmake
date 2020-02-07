#[[
# Check for Win64 first
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
	set(DX_ARCHITECTURE "x64")
elseif(CMAKE_SIZEOF_VOID_P EQUAL 4)
	set(DX_ARCHITECTURE "x86")
endif(CMAKE_SIZEOF_VOID_P EQUAL 8)
]]

message(STATUS "libsl-config.cmake")

option(LIBSL_USE_GLUX  "Use gluX with LibSL_gl" ON) # TODO FIXME read this from libsl config

################################################################################

if (NOT LibSL_DIR)
	find_path(LibSL_DIR
		NAMES
			CREDITS.txt libsl-config.cmake
		HINTS
			ENV LibSL_DIR
			ENV LIBSL_DIR
		PATHS
			~/LIBRARIES/LibSL/
			~/LibSL
			./LibSL
	)
endif ()

file(TO_CMAKE_PATH ${LibSL_DIR} LibSL_DIR)

if (NOT DEFINED ENABLE_LIBARCHIVE)
	set (ENABLE_LIBARCHIVE FALSE)
endif ()

################################################################################

set(LIBSL_LIBRARY_DIR ${LibSL_DIR}/libs)
set(LIBSL_INCLUDE_DIR
		${LibSL_DIR}/src
		${LibSL_DIR}/libs
		${LibSL_DIR}/libs/loki/include
		${LibSL_DIR}/libs/tclap/include
		${LibSL_DIR}/libs/glux/src
		${LibSL_DIR}/libs/png
		${LibSL_DIR}/libs/jpeg
		${LibSL_DIR}/libs/zlib
		${LibSL_DIR}/libs/newmat
		${LibSL_DIR}/libs/tinyxml
		${LibSL_DIR}/libs/anttweakbar/include
		${LibSL_DIR}/libs/OpenNL/src
		${LibSL_DIR}/libs/TAUCS/include
		${LibSL_DIR}/libs/SQLite/
		${LibSL_DIR}/libs/hashlibpp/src/
		${LibSL_DIR}/libs/rply/
		$ENV{DXSDK_DIR}/include
		$ENV{DXSDK_DIR}/lib/x86
		$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core
	)

if (WIN32)

	find_library(LIBSL_LIBRARY 		LibSL.lib 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_LIBRARY_D 		LibSL-d.lib 		PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_GL_LIBRARY 		LibSL_gl.lib 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_GL_LIBRARY_D 	LibSL_gl-d.lib 		PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_GL4_LIBRARY 		LibSL_gl4.lib 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_GL4_LIBRARY_D 	LibSL_gl4-d.lib 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_GL4CORE_LIBRARY 		LibSL_gl4core.lib 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_GL4CORE_LIBRARY_D 	LibSL_gl4core-d.lib 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_LINALG_LIBRARY 	LibSL_linalg.lib 	PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_LINALG_LIBRARY_D	LibSL_linalg-d.lib 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_DX9_LIBRARY 		LibSL_d3d.lib 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_DX9_LIBRARY_D 	LibSL_d3d-d.lib 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_DX10_LIBRARY 	LibSL_dx10.lib 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_DX10_LIBRARY_D 	LibSL_dx10-d.lib 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_SHARPBINDER_LIBRARY 		LibSL_sharp_binder.lib 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_SHARPBINDER_LIBRARY_D 	LibSL_sharp_binder-d.lib 	PATHS ${LIBSL_LIBRARY_DIR})

	#set(TAUCS_LIB_DIR ${LibSL_DIR}/src/libs/bin/win32/TAUCS/lib)
	#set(TAUCS_LIBS  "${TAUCS_LIB_DIR}/libatlas.lib;${TAUCS_LIB_DIR}/libcblas.lib;${TAUCS_LIB_DIR}/libf77blas.lib;${TAUCS_LIB_DIR}/liblapack.lib;${TAUCS_LIB_DIR}/libmetis.lib;${TAUCS_LIB_DIR}/vcf2c.lib;${TAUCS_LIB_DIR}/libtaucs.lib")

else (WIN32)

	find_library(LIBSL_LIBRARY 		libLibSL.a 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_LIBRARY_D 		libLibSL-d.a 		PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_GL_LIBRARY 		libLibSL_gl.a 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_GL_LIBRARY_D 	libLibSL_gl-d.a 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_GL4_LIBRARY 		libLibSL_gl4.a 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_GL4_LIBRARY_D 	libLibSL_gl4-d.a 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_GL4CORE_LIBRARY 		libLibSL_gl4core.a 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_GL4CORE_LIBRARY_D 	libLibSL_gl4core-d.a 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_LINALG_LIBRARY 	LibSL_linalg.a 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_LINALG_LIBRARY_D	LibSL_linalg-d.a 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_DX9_LIBRARY 		libLibSL_d3d.a 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_DX9_LIBRARY_D 	libLibSL_d3d-d.a 	PATHS ${LIBSL_LIBRARY_DIR})

	find_library(LIBSL_DX10_LIBRARY 	libLibSL_d3d.a 		PATHS ${LIBSL_LIBRARY_DIR})
	find_library(LIBSL_DX10_LIBRARY_D 	libLibSL_d3d-d.a 	PATHS ${LIBSL_LIBRARY_DIR})

endif (WIN32)

################################################################################

if(NOT APPLE)
	if (LIBSL_USE_GLUX)
		add_definitions(-DUSE_GLUX)
		if(NOT WIN32)
			add_definitions(-DGL_ARB_multitexture=1)  # hack due to MESA headers including ARB_multitexture
		endif(NOT WIN32)
	endif (LIBSL_USE_GLUX)
endif(NOT APPLE)

add_definitions(-DUNICODE -D_UNICODE)
add_definitions(-DTW_STATIC -DTW_NO_LIB_PRAGMA)

find_package(OpenGL)
if (CMAKE_VERSION VERSION_LESS 2.8.0)
	# JD: With recent versions of CMake, FindGLU.cmake is basically
	# just an alias to FindOpenGL.cmake, so we can omit it safely.
	find_package(GLU)
endif ()
find_package(GLUT)

################################################################################

# SL: This ended up being necessary due to an odd behavior of find_package(OpenGL)
#     returning 'nul' on Emscripten...
if (OPENGL_LIBRARIES STREQUAL "nul")
	set(OPENGL_LIBRARIES "")
endif ()

################################################################################

if (WIN32)

	########################################
	set(LIBSL_LIBRARIES
		optimized ${LIBSL_LIBRARY_DIR}/LibSL.lib
		optimized ${LIBSL_LIBRARY_DIR}/jpeg.lib
		optimized ${LIBSL_LIBRARY_DIR}/png.lib
		optimized ${LIBSL_LIBRARY_DIR}/zlib.lib
		optimized ${LIBSL_LIBRARY_DIR}/loki.lib
		optimized ${LIBSL_LIBRARY_DIR}/3ds.lib
		optimized ${LIBSL_LIBRARY_DIR}/tinyxml.lib
		optimized ${LIBSL_LIBRARY_DIR}/hashlibpp.lib
		optimized ${LIBSL_LIBRARY_DIR}/qhull.lib
		debug ${LIBSL_LIBRARY_DIR}/LibSL-d.lib
		debug ${LIBSL_LIBRARY_DIR}/jpeg-d.lib
		debug ${LIBSL_LIBRARY_DIR}/png-d.lib
		debug ${LIBSL_LIBRARY_DIR}/zlib-d.lib
		debug ${LIBSL_LIBRARY_DIR}/loki-d.lib
		debug ${LIBSL_LIBRARY_DIR}/3ds-d.lib
		debug ${LIBSL_LIBRARY_DIR}/tinyxml-d.lib
		debug ${LIBSL_LIBRARY_DIR}/hashlibpp-d.lib
		debug ${LIBSL_LIBRARY_DIR}/qhull-d.lib
		winmm.lib
		psapi.lib
		shlwapi.lib
  )
	
	########################################
	if (NOT TARGET LibSL)
		add_library(LibSL STATIC IMPORTED)
	  	set_property(TARGET LibSL PROPERTY IMPORTED_LOCATION_DEBUG
	  		${LIBSL_LIBRARY_DIR}/LibSL-d.lib)
	  	set_property(TARGET LibSL PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG
			${LIBSL_LIBRARY_DIR}/jpeg-d.lib
			${LIBSL_LIBRARY_DIR}/png-d.lib
			${LIBSL_LIBRARY_DIR}/zlib-d.lib
			${LIBSL_LIBRARY_DIR}/loki-d.lib
			${LIBSL_LIBRARY_DIR}/3ds-d.lib
			${LIBSL_LIBRARY_DIR}/tinyxml-d.lib
			${LIBSL_LIBRARY_DIR}/hashlibpp-d.lib
			${LIBSL_LIBRARY_DIR}/qhull-d.lib
			winmm.lib
			psapi.lib
			shlwapi.lib
	  	)
	  	set_property(TARGET LibSL PROPERTY IMPORTED_LOCATION_RELEASE
			${LIBSL_LIBRARY_DIR}/LibSL.lib)
	  	set_property(TARGET LibSL PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE
			${LIBSL_LIBRARY_DIR}/jpeg.lib
			${LIBSL_LIBRARY_DIR}/png.lib
			${LIBSL_LIBRARY_DIR}/zlib.lib
			${LIBSL_LIBRARY_DIR}/loki.lib
			${LIBSL_LIBRARY_DIR}/3ds.lib
			${LIBSL_LIBRARY_DIR}/tinyxml.lib
			${LIBSL_LIBRARY_DIR}/hashlibpp.lib
			${LIBSL_LIBRARY_DIR}/qhull.lib
			winmm.lib
			psapi.lib
			shlwapi.lib
	  	)

	  	#[[
			set_property(TARGET LibSL PROPERTY INTERFACE_COMPILE_DEFINITIONS
				UNICODE
				_UNICODE
			)
	  	]]

	  	set_property(TARGET LibSL PROPERTY INTERFACE_INCLUDE_DIRECTORIES
			${LibSL_DIR}/src
			${LibSL_DIR}libs
			${LibSL_DIR}libs/loki/include
			${LibSL_DIR}libs/tclap/include
			${LibSL_DIR}libs/glux/src
			${LibSL_DIR}libs/png
			${LibSL_DIR}libs/jpeg
			${LibSL_DIR}libs/zlib
			${LibSL_DIR}libs/newmat
			${LibSL_DIR}libs/tinyxml
			${LibSL_DIR}libs/anttweakbar/include
			${LibSL_DIR}libs/OpenNL/src
			${LibSL_DIR}libs/TAUCS/include
			${LibSL_DIR}libs/SQLite/
			${LibSL_DIR}libs/hashlibpp/src/
	  	)
	endif() # NOT TARGET LibSL

	########################################
  	set(LIBSL_GL_LIBRARIES
  		optimized ${LIBSL_LIBRARY_DIR}/LibSL_gl.lib
  		optimized ${LIBSL_LIBRARY_DIR}/AntTweakBar.lib
  		optimized ${LIBSL_LIBRARY_DIR}/glux.lib
  		debug 	${LIBSL_LIBRARY_DIR}/LibSL_gl-d.lib
  		debug 	${LIBSL_LIBRARY_DIR}/glux-d.lib
  		debug 	${LIBSL_LIBRARY_DIR}/AntTweakBar-d.lib
  		${OPENGL_LIBRARIES}
  	)

	########################################
	if (NOT TARGET LibSL_gl)
		add_library(LibSL_gl STATIC IMPORTED)
	  	set_property(TARGET LibSL_gl PROPERTY IMPORTED_LOCATION_DEBUG
				${LIBSL_LIBRARY_DIR}/LibSL_gl-d.lib)
	  	set_property(TARGET LibSL_gl PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG
				${LIBSL_LIBRARY_DIR}/glux-d.lib
				${LIBSL_LIBRARY_DIR}/AntTweakBar-d.lib
				${OPENGL_LIBRARIES}
				${GLUT_LIBRARIES}
	  	)
	  	set_property(TARGET LibSL_gl PROPERTY IMPORTED_LOCATION_RELEASE
			${LIBSL_LIBRARY_DIR}/LibSL_gl.lib)
	  	set_property(TARGET LibSL_gl PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE
			${LIBSL_LIBRARY_DIR}/glux.lib
			${LIBSL_LIBRARY_DIR}/AntTweakBar.lib
			${OPENGL_LIBRARIES}
			${GLUT_LIBRARIES}
	  	)
	  	set_property(TARGET LibSL_gl PROPERTY INTERFACE_COMPILE_DEFINITIONS
	  		OPENGL
			TW_STATIC
			TW_NO_LIB_PRAGMA
	  	)
	endif() # NOT TARGET LibSL_gl

	########################################
	set(LIBSL_GL4_LIBRARIES
  		optimized ${LIBSL_LIBRARY_DIR}/LibSL_gl4.lib
  		optimized ${LIBSL_LIBRARY_DIR}/AntTweakBar.lib
  		optimized ${LIBSL_LIBRARY_DIR}/glux.lib
  		debug 	${LIBSL_LIBRARY_DIR}/LibSL_gl4-d.lib
  		debug 	${LIBSL_LIBRARY_DIR}/glux-d.lib
  		debug 	${LIBSL_LIBRARY_DIR}/AntTweakBar-d.lib
  		${OPENGL_LIBRARIES}
  	)

	if (NOT TARGET LibSL_gl4)
		add_library(LibSL_gl4 STATIC IMPORTED)
	  	set_property(TARGET LibSL_gl4 PROPERTY IMPORTED_LOCATION_DEBUG
			${LIBSL_LIBRARY_DIR}/LibSL_gl4-d.lib)
	  	set_property(TARGET LibSL_gl4 PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG
			${LIBSL_LIBRARY_DIR}/glux-d.lib
			${LIBSL_LIBRARY_DIR}/AntTweakBar-d.lib
			${OPENGL_LIBRARIES}
			${GLUT_LIBRARIES}
	  	)
	  	set_property(TARGET LibSL_gl4 PROPERTY IMPORTED_LOCATION_RELEASE
			${LIBSL_LIBRARY_DIR}/LibSL_gl4.lib)
	  	set_property(TARGET LibSL_gl4 PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE
			${LIBSL_LIBRARY_DIR}/glux.lib
			${LIBSL_LIBRARY_DIR}/AntTweakBar.lib
			${OPENGL_LIBRARIES}
			${GLUT_LIBRARIES}
	  	)
	  	set_property(TARGET LibSL_gl4 PROPERTY INTERFACE_COMPILE_DEFINITIONS
	  		OPENGL
	  		OPENGL4
			TW_STATIC
			TW_NO_LIB_PRAGMA
	  	)
	endif() # NOT TARGET LibSL_gl4

	########################################
	set(LIBSL_GL4CORE_LIBRARIES
  		optimized ${LIBSL_LIBRARY_DIR}/LibSL_gl4core.lib
  		optimized ${LIBSL_LIBRARY_DIR}/AntTweakBar.lib
  		optimized ${LIBSL_LIBRARY_DIR}/glux.lib
  		debug 	${LIBSL_LIBRARY_DIR}/LibSL_gl4core-d.lib
  		debug 	${LIBSL_LIBRARY_DIR}/glux-d.lib
  		debug 	${LIBSL_LIBRARY_DIR}/AntTweakBar-d.lib
  		${OPENGL_LIBRARIES}
  	)

	if (NOT TARGET LibSL_gl4core)
	  	add_library(LibSL_gl4core STATIC IMPORTED)
	  	set_property(TARGET LibSL_gl4core PROPERTY IMPORTED_LOCATION_DEBUG
			${LIBSL_LIBRARY_DIR}/LibSL_gl4core-d.lib)
	  	set_property(TARGET LibSL_gl4core PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG
			${LIBSL_LIBRARY_DIR}/glux-d.lib
			${LIBSL_LIBRARY_DIR}/AntTweakBar-d.lib
			${OPENGL_LIBRARIES}
			${GLUT_LIBRARIES}
	  	)
	  	set_property(TARGET LibSL_gl4core PROPERTY IMPORTED_LOCATION_RELEASE
			${LIBSL_LIBRARY_DIR}/LibSL_gl4core.lib)
	  	set_property(TARGET LibSL_gl4core PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE
			${LIBSL_LIBRARY_DIR}/glux.lib
			${LIBSL_LIBRARY_DIR}/AntTweakBar.lib
			${OPENGL_LIBRARIES}
			${GLUT_LIBRARIES}
	  	)
	  	set_property(TARGET LibSL_gl4core PROPERTY INTERFACE_COMPILE_DEFINITIONS
	  		OPENGL
	  		OPENGL4
	    	OPENGLCORE
	    	TW_STATIC
	    	TW_NO_LIB_PRAGMA
	  	)
	endif() # NOT TARGET LibSL_gl4core

	########################################
  	set(LIBSL_LINALG_LIBRARIES
		optimized 	${LIBSL_LIBRARY_DIR}/LibSL_linalg.lib
		optimized 	${LIBSL_LIBRARY_DIR}/nl.lib
		optimized 	${LIBSL_LIBRARY_DIR}/newmat.lib
		debug 		${LIBSL_LIBRARY_DIR}/LibSL_linalg-d.lib
		debug 		${LIBSL_LIBRARY_DIR}/nl-d.lib
		debug 		${LIBSL_LIBRARY_DIR}/newmat-d.lib
		${TAUCS_LIBS}
  	)

	########################################
	if (NOT TARGET LibSL_linalg)
	  	add_library(LibSL_linalg STATIC IMPORTED)
	  	set_property(TARGET LibSL_linalg PROPERTY IMPORTED_LOCATION_DEBUG
			${LIBSL_LIBRARY_DIR}/LibSL_linalg-d.lib)
	  	set_property(TARGET LibSL_linalg PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG
			${LIBSL_LIBRARY_DIR}/nl-d.lib
			${LIBSL_LIBRARY_DIR}/newmat-d.lib
	  	)
	  	set_property(TARGET LibSL_linalg PROPERTY IMPORTED_LOCATION_RELEASE
			${LIBSL_LIBRARY_DIR}/LibSL_linalg.lib)
	  	set_property(TARGET LibSL_linalg PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE
			${LIBSL_LIBRARY_DIR}/nl.lib
			${LIBSL_LIBRARY_DIR}/newmat.lib
	  	)
	endif() # NOT TARGET LibSL_linalg

	########################################
  	set(LIBSL_DX9_LIBRARIES
		optimized ${LIBSL_LIBRARY_DIR}/LibSL_d3d.lib
		debug 	  ${LIBSL_LIBRARY_DIR}/LibSL_d3d-d.lib
		$ENV{DXSDK_DIR}/lib/x86/d3d9.lib
		$ENV{DXSDK_DIR}/lib/x86/d3dx9.lib
		$ENV{DXSDK_DIR}/lib/x86/dxerr.lib
		$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/Release/dxut.lib
		comctl32.lib
	)

	########################################
	if (NOT TARGET LibSL_sharp_binder)
	  	add_library(LibSL_sharp_binder STATIC IMPORTED)
	  	set_property(TARGET LibSL_sharp_binder PROPERTY IMPORTED_LOCATION_DEBUG ${LIBSL_LIBRARY_DIR}/LibSL_sharp_binder-d.lib)
	  	set_property(TARGET LibSL_sharp_binder PROPERTY IMPORTED_LOCATION_RELEASE ${LIBSL_LIBRARY_DIR}/LibSL_sharp_binder.lib)
	  	set_property(TARGET LibSL_sharp_binder PROPERTY INTERFACE_INCLUDE_DIRECTORIES
			${LibSL_DIR}/src/LibSL_sharp/GLPanel/C++/
	  	)
	endif() # NOT TARGET LibSL_sharp_binder
	
	########################################
	if (NOT TARGET LibSL_d3d)
	  	add_library(LibSL_d3d STATIC IMPORTED)
	  	set_property(TARGET LibSL_d3d PROPERTY IMPORTED_LOCATION_DEBUG
			${LIBSL_LIBRARY_DIR}/LibSL_d3d-d.lib)
	  	set_property(TARGET LibSL_d3d PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG
			$ENV{DXSDK_DIR}/lib/x86/d3d9.lib
			$ENV{DXSDK_DIR}/lib/x86/d3dx9.lib
			$ENV{DXSDK_DIR}/lib/x86/dxerr.lib
			$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/Release/dxut.lib
			comctl32.lib
	  	)
	  	set_property(TARGET LibSL_d3d PROPERTY IMPORTED_LOCATION_RELEASE
			${LIBSL_LIBRARY_DIR}/LibSL_d3d.lib)
	  	set_property(TARGET LibSL_d3d PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE
			$ENV{DXSDK_DIR}/lib/x86/d3d9.lib
			$ENV{DXSDK_DIR}/lib/x86/d3dx9.lib
			$ENV{DXSDK_DIR}/lib/x86/dxerr.lib
			$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/Release/dxut.lib
			comctl32.lib
	  	)
	  	#[[
		set_property(TARGET LibSL_d3d PROPERTY COMPILE_DEFINITIONS
			UNICODE
			_UNICODE
		)
	  	]]
	  	set_property(TARGET LibSL_d3d PROPERTY INTERFACE_INCLUDE_DIRECTORIES
			$ENV{DXSDK_DIR}/Include
			$ENV{DXSDK_DIR}/lib/x86
			$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/
	  	)
	endif() #NOT TARGET LibSL_d3d

	########################################
	set(LIBSL_DX10_LIBRARIES
		optimized	${LIBSL_LIBRARY_DIR}/LibSL_dx10.lib
		debug    	${LIBSL_LIBRARY_DIR}/LibSL_dx10.lib
		$ENV{DXSDK_DIR}/lib/x86/d3d11.lib
		$ENV{DXSDK_DIR}/lib/x86/d3dx11.lib
		$ENV{DXSDK_DIR}/lib/x86/dxerr.lib
		$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/Release/dxut.lib
		comctl32.lib
	)
	
	########################################
	if (NOT TARGET LibSL_dx10)
	  	add_library(LibSL_dx10 STATIC IMPORTED)
	  	set_property(TARGET LibSL_dx10 PROPERTY IMPORTED_LOCATION_DEBUG
			${LIBSL_LIBRARY_DIR}/LibSL_dx10-d.lib)
	  	set_property(TARGET LibSL_dx10 PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG
			$ENV{DXSDK_DIR}/lib/x86/d3d11.lib
			$ENV{DXSDK_DIR}/lib/x86/d3dx11.lib
			$ENV{DXSDK_DIR}/lib/x86/dxerr.lib
			$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/Release/dxut.lib
			comctl32.lib
	  	)
	  	set_property(TARGET LibSL_dx10 PROPERTY IMPORTED_LOCATION_RELEASE
			${LIBSL_LIBRARY_DIR}/LibSL_dx10.lib)
	  	set_property(TARGET LibSL_dx10 PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE
			$ENV{DXSDK_DIR}/lib/x86/d3d11.lib
			$ENV{DXSDK_DIR}/lib/x86/d3dx11.lib
			$ENV{DXSDK_DIR}/lib/x86/dxerr.lib
			$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/Release/dxut.lib
			comctl32.lib
	  	)
	  	#[[
		set_property(TARGET LibSL_dx10 PROPERTY COMPILE_DEFINITIONS
			UNICODE
			_UNICODE
		)
	  	]]
	  	set_property(TARGET LibSL_dx10 PROPERTY INTERFACE_INCLUDE_DIRECTORIES
			$ENV{DXSDK_DIR}/Include
			$ENV{DXSDK_DIR}/lib/x86
			$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/
	  	)
	endif() # NOT TARGET LibSL_dx10

	########################################
	set(LIBSL_DX9_INCLUDE_DIR
		$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/
		$ENV{DXSDK_DIR}/Include)

	set(LIBSL_DX10_INCLUDE_DIR
		$ENV{DXSDK_DIR}/Samples/C++/DXUT/Core/
		$ENV{DXSDK_DIR}/Include)

	add_definitions(-D_UNICODE -DUNICODE)

################################################################################
else (WIN32)

	include(FindGLUT)

	INCLUDE_DIRECTORIES(${OPENGL_INCLUDE_DIR})

	########################################
	set(LIBSL_LIBRARIES "${LIBSL_LIBRARY_DIR}/libLibSL.a;${LIBSL_LIBRARY_DIR}/libjpeg.a;${LIBSL_LIBRARY_DIR}/libpng.a;${LIBSL_LIBRARY_DIR}/libzlib.a;${LIBSL_LIBRARY_DIR}/libloki.a;${LIBSL_LIBRARY_DIR}/lib3ds.a;${LIBSL_LIBRARY_DIR}/libtinyxml.a;${LIBSL_LIBRARY_DIR}/libhashlibpp.a;${LIBSL_LIBRARY_DIR}/libqhull.a")

	if (NOT EMSCRIPTEN)
	  	set(LIBSL_GL_LIBRARIES "${LIBSL_LIBRARY_DIR}/libLibSL_gl.a;${LIBSL_LIBRARY_DIR}/libglux.a;${LIBSL_LIBRARY_DIR}/libAntTweakBar.a" ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
	else (NOT EMSCRIPTEN)
  	  	set(LIBSL_GL_LIBRARIES "${LIBSL_LIBRARY_DIR}/libLibSL_gl.a" ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
	endif (NOT EMSCRIPTEN)

	set(LIBSL_GL4_LIBRARIES "${LIBSL_LIBRARY_DIR}/libLibSL_gl4.a;${LIBSL_LIBRARY_DIR}/libglux.a;${LIBSL_LIBRARY_DIR}/libAntTweakBar.a" ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
	set(LIBSL_GL4CORE_LIBRARIES "${LIBSL_LIBRARY_DIR}/libLibSL_gl4core.a;${LIBSL_LIBRARY_DIR}/libglux.a;${LIBSL_LIBRARY_DIR}/libAntTweakBar.a" ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
	set(LIBSL_LINALG_LIBRARIES "${LIBSL_LIBRARY_DIR}/libLibSL_linalg.a;${LIBSL_LIBRARY_DIR}/libnl.a")

	########################################
	if (NOT TARGET LibSL)
	  	add_library(LibSL STATIC IMPORTED)
	  	set_property(TARGET LibSL PROPERTY IMPORTED_LOCATION
			${LIBSL_LIBRARY_DIR}/libLibSL.a)
	  	set_property(TARGET LibSL PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES
			${LIBSL_LIBRARY_DIR}/libjpeg.a
			${LIBSL_LIBRARY_DIR}/libpng.a
			${LIBSL_LIBRARY_DIR}/libzlib.a
			${LIBSL_LIBRARY_DIR}/libloki.a
			${LIBSL_LIBRARY_DIR}/lib3ds.a
			${LIBSL_LIBRARY_DIR}/libtinyxml.a
			${LIBSL_LIBRARY_DIR}/libhashlibpp.a
			${LIBSL_LIBRARY_DIR}/libqhull.a
	  	)
	
	  	set_property(TARGET LibSL PROPERTY INTERFACE_INCLUDE_DIRECTORIES
			${LibSL_DIR}/src
			${LibSL_DIR}/libs
			${LibSL_DIR}/libs/loki/include
			${LibSL_DIR}/libs/tclap/include
			${LibSL_DIR}/libs/glux/src
			${LibSL_DIR}/libs/png
			${LibSL_DIR}/libs/jpeg
			${LibSL_DIR}/libs/zlib
			${LibSL_DIR}/libs/newmat
			${LibSL_DIR}/libs/tinyxml
			${LibSL_DIR}/libs/anttweakbar/include
			${LibSL_DIR}/libs/OpenNL/src
			${LibSL_DIR}/libs/TAUCS/include
			${LibSL_DIR}/libs/SQLite/
			${LibSL_DIR}/libs/hashlibpp/src/
	  	)
	endif() # NOT TARGET LibSL

	########################################
	if (NOT TARGET AntTweakBar)
	  	add_library(AntTweakBar STATIC IMPORTED)
	  	if (NOT EMSCRIPTEN)
	  		find_package(X11 REQUIRED)
	  	endif (NOT EMSCRIPTEN)
	  	set_property(TARGET AntTweakBar PROPERTY IMPORTED_LOCATION
			${LIBSL_LIBRARY_DIR}/libAntTweakBar.a)
	  	set_property(TARGET AntTweakBar PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES
			${OPENGL_LIBRARIES}
			${X11_LIBRARIES}
	  	)
			#[[
	  	if(APPLE)
	  	    add_definitions(-D_MACOSX)
	  	    add_definitions(-D__PLACEMENT_NEW_INLINE)
	  	    set_TARGET_PROPERTIES(AntTweakBar PROPERTIES INTERFACE_COMPILE_DEFINITIONS "-O3 -arch i386 -arch x86_64 -fno-strict-aliasing -ObjC++")
	  	else(APPLE)
	  	    set_TARGET_PROPERTIES(AntTweakBar PROPERTIES INTERFACE_COMPILE_DEFINITIONS "-O3 -D_UNIX -D__PLACEMENT_NEW_INLINE")
	  	endif(APPLE)
			]]
	endif () # NOT TARGET AntTweakBar

	########################################
	if (NOT TARGET LibSL_gl)
	  	add_library(LibSL_gl STATIC IMPORTED)
	  	set_property(TARGET LibSL_gl PROPERTY IMPORTED_LOCATION	${LIBSL_LIBRARY_DIR}/libLibSL_gl.a)
	  	if (NOT EMSCRIPTEN)
	    	set_property(TARGET LibSL_gl PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES
	    		LibSL
	    		AntTweakBar
	    		${LIBSL_LIBRARY_DIR}/libglux.a
	    		${OPENGL_LIBRARIES}
	    		${GLUT_LIBRARIES}
	    	)
	  	else (NOT EMSCRIPTEN)
	    	set_property(TARGET LibSL_gl PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES
	    		LibSL
	    		${OPENGL_LIBRARIES}
	    		${GLUT_LIBRARIES}
	    	)
	  	endif (NOT EMSCRIPTEN)  
	  	set_property(TARGET LibSL_gl PROPERTY INTERFACE_COMPILE_DEFINITIONS
			OPENGL
			TW_STATIC
			TW_NO_LIB_PRAGMA
	  	)
	endif() # NOT TARGET LibSL_gl

	########################################
	if (NOT TARGET LibSL_gl4)
	  	add_library(LibSL_gl4 STATIC IMPORTED)
	  	set_property(TARGET LibSL_gl4 PROPERTY IMPORTED_LOCATION
			${LIBSL_LIBRARY_DIR}/libLibSL_gl4.a)
	  	set_property(TARGET LibSL_gl4 PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES
			LibSL
			AntTweakBar
			${LIBSL_LIBRARY_DIR}/libglux.a
			${OPENGL_LIBRARIES}
			${GLUT_LIBRARIES}
	  	)
	  	set_property(TARGET LibSL_gl4 PROPERTY INTERFACE_COMPILE_DEFINITIONS
	  		OPENGL
	  		OPENGL4
	  		USE_GLUT
			TW_STATIC
			TW_NO_LIB_PRAGMA
	  	)
	endif() #NOT TARGET LibSL_gl4

	########################################
	if (NOT TARGET LibSL_gl4core)
	  	add_library(LibSL_gl4core STATIC IMPORTED)
	  	set_property(TARGET LibSL_gl4core PROPERTY IMPORTED_LOCATION
			${LIBSL_LIBRARY_DIR}/libLibSL_gl4core.a)
	  	set_property(TARGET LibSL_gl4core PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES
			LibSL
			AntTweakBar
			${LIBSL_LIBRARY_DIR}/libglux.a
			${OPENGL_LIBRARIES}
			${GLUT_LIBRARIES}
	  	)
	  	set_property(TARGET LibSL_gl4core PROPERTY INTERFACE_COMPILE_DEFINITIONS
	  		OPENGL
	  		OPENGL4
	  		USE_GLUT
			TW_STATIC
			TW_NO_LIB_PRAGMA
	  	)
	endif() # NOT TARGET LibSL_gl4core

	########################################
	if (NOT TARGET LibSL_linalg)
	  	add_library(LibSL_linalg STATIC IMPORTED)
	  	set_property(TARGET LibSL_linalg PROPERTY IMPORTED_LOCATION
			${LIBSL_LIBRARY_DIR}/libLibSL_linalg.a)
	  	set_property(TARGET LibSL_linalg PROPERTY IMPORTED_LINK_INTERFACE_LIBRARIES
			${LIBSL_LIBRARY_DIR}/libnl.a
	  	)
	endif() # NOT TARGET LibSL_linal

endif (WIN32)

########################################
if (ENABLE_LIBARCHIVE)
	if (NOT TARGET archive_static)
		ADD_SUBDIRECTORY(${LibSL_DIR}/libs/libarchive libsl/libarchive)
	endif ()
endif ()

################################################################################

INCLUDE(FindPackageHandleStandardArgs)
find_package_HANDLE_STANDARD_ARGS(LibSL		DEFAULT_MSG 	LIBSL_LIBRARIES		LIBSL_INCLUDE_DIR)

INCLUDE(${LibSL_DIR}/tools/autobindshader/AutoBindShader.cmake)
