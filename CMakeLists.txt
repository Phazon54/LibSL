cmake_minimum_required(VERSION 3.0.0)

project(LibSL)

# message(STATUS "[in LibSL/]")

set(LibSL_DIR ${CMAKE_CURRENT_SOURCE_DIR})

#############################################################################
# options
if(ANDROID)
	#message(SEND_ERROR "LibSL Android!!")
	
	option(LIBSL_BUILD_GL              "Build LibSL_gl" ON)
	option(LIBSL_BUILD_GL4             "Build LibSL_gl for OpenGL 4.x" OFF)
	option(LIBSL_BUILD_DX9             "Build LibSL_d3d" OFF)
	option(LIBSL_BUILD_DX10            "Build LibSL_dx10" OFF)
	option(LIBSL_BUILD_LINALG          "Build LibSL_linalg" OFF)
	option(LIBSL_BUILD_MAX_PERFORMANCE "Build LibSL for performance rather than safety" ON)
	option(LIBSL_BUILD_SHARP           "Build LibSL_sharp" OFF)
	option(LIBSL_BUILD_TOOLS           "Build LibSL tools" OFF)
	option(LIBSL_BUILD_TUTORIALS       "Build LibSL tutorials" OFF)
	option(LIBSL_MULTITHREADED_STATIC  "Build LibSL with /MT flag in Visual C++" OFF)
	option(LIBSL_BUILD_GLUX            "Build gluX"   OFF)
	option(LIBSL_BUILD_LIBARCHIVE      "Build libarchive"   OFF)
	option(LIBSL_USE_GLUX              "Use gluX with LibSL_gl"   OFF)
	option(LIBSL_POWER_USER            "Power user mode (reserved, do not use)" OFF)
	
	add_definitions(-DANDROID)

else (ANDROID)

	if(EMSCRIPTEN)

		option(LIBSL_BUILD_GL              "Build LibSL_gl" ON)
		option(LIBSL_BUILD_GL4             "Build LibSL_gl for OpenGL 4.x" OFF)
		option(LIBSL_BUILD_GL4CORE         "Build LibSL_gl for OpenGL 4.x core profile" OFF)
		option(LIBSL_BUILD_DX9             "Build LibSL_d3d" OFF)
		option(LIBSL_BUILD_DX10            "Build LibSL_dx10" OFF)
		option(LIBSL_BUILD_LINALG          "Build LibSL_linalg" ON)
		option(LIBSL_BUILD_MAX_PERFORMANCE "Build LibSL for performance rather than safety" ON)
		option(LIBSL_BUILD_SHARP           "Build LibSL_sharp" OFF)
		option(LIBSL_BUILD_TOOLS           "Build LibSL tools" OFF)
		option(LIBSL_BUILD_TUTORIALS       "Build LibSL tutorials" OFF)
		option(LIBSL_MULTITHREADED_STATIC  "Build LibSL with /MT flag in Visual C++" OFF)
		option(LIBSL_BUILD_GLUX            "Build gluX"   OFF)
		option(LIBSL_BUILD_LIBARCHIVE      "Build libarchive"   OFF)
		option(LIBSL_USE_GLUX              "Use gluX with LibSL_gl"   OFF)
		option(LIBSL_POWER_USER            "Power user mode (reserved, do not use)" OFF)
	
	else(EMSCRIPTEN)
	
		option(LIBSL_BUILD_GL              "Build LibSL_gl" ON)
		option(LIBSL_BUILD_GL4             "Build LibSL_gl for OpenGL 4.x" ON)
		option(LIBSL_BUILD_GL4CORE         "Build LibSL_gl for OpenGL 4.x core profile" ON)
		option(LIBSL_BUILD_DX9             "Build LibSL_d3d" OFF)
		option(LIBSL_BUILD_DX10            "Build LibSL_dx10" OFF)
		option(LIBSL_BUILD_LINALG          "Build LibSL_linalg" ON)
		option(LIBSL_BUILD_MAX_PERFORMANCE "Build LibSL for performance rather than safety" ON)
		
		if(WIN32)
			option(LIBSL_BUILD_SHARP           "Build LibSL_sharp" ON)
		else(WIN32)
			option(LIBSL_BUILD_SHARP           "Build LibSL_sharp" OFF)
		endif(WIN32)

		option(LIBSL_BUILD_TOOLS           "Build LibSL tools" OFF)
		option(LIBSL_BUILD_TUTORIALS       "Build LibSL tutorials" OFF)
		option(LIBSL_MULTITHREADED_STATIC  "Build LibSL with /MT flag in Visual C++" OFF)
		option(LIBSL_BUILD_GLUX            "Build gluX"   ON)
		option(LIBSL_BUILD_LIBARCHIVE      "Build libarchive"   OFF)
		option(LIBSL_USE_GLUX              "Use gluX with LibSL_gl"   ON)
		option(LIBSL_POWER_USER            "Power user mode (reserved, do not use)" OFF)
	
	endif(EMSCRIPTEN)
	
endif(ANDROID)
	
#############################################################################
# Configure header

configure_file (
  "${PROJECT_SOURCE_DIR}/src/LibSL/LibSL.config.h.in"
  "${PROJECT_SOURCE_DIR}/src/LibSL/LibSL.config.h"
  )

configure_file (
  "${PROJECT_SOURCE_DIR}/src/LibSL/LibSL_gl.config.h.in"
  "${PROJECT_SOURCE_DIR}/src/LibSL/LibSL_gl.config.h"
  )

#############################################################################
# Include our custom macros
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/src/build/)

include(macros)
include(ForceOutOfSourceBuild)
include(UseColors)

#[[
# Find Boost
set(LIBSL_BOOST_INCLUDE_PATH CACHE PATH "Boost include path")
set(LIBSL_BOOST_LIBRARY_PATH CACHE PATH "Boost library path")
set(BOOST_INCLUDEDIR "${LIBSL_BOOST_INCLUDE_PATH}")
set(BOOST_LIBRARYDIR "${LIBSL_BOOST_LIBRARY_PATH}")
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.35.0 COMPONENTS filesystem thread date_time program_options signals system)
if(NOT Boost_FOUND)
	message(SEND_ERROR "Boost not found")
endif(NOT Boost_FOUND)
#end find boost
]]

include_directories(
			${CMAKE_CURRENT_SOURCE_DIR}/src
			${CMAKE_CURRENT_SOURCE_DIR}/src/LibSL
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/loki/include
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/tclap/include
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/glux/src
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/png
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/jpeg
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/zlib
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/newmat
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/OpenNL/src
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/anttweakbar/include
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/SQLite
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/qhull/src/libqhull_r
			${CMAKE_CURRENT_SOURCE_DIR}/src/libs/src/rply
			)

if (LIBSL_ENABLE_NVIDIA_CG)
	include_directories($ENV{CG_INC_PATH})
	link_directories($ENV{CG_LIB_PATH})
endif (LIBSL_ENABLE_NVIDIA_CG)

# Ugly, but force it to use the path we specified. Otherwise, it breaks on
# UNIX as most Linux distros come with a boost installation which gets
# found by default.
include_directories(${BOOST_INCLUDEDIR})
link_directories(${BOOST_LIBRARYDIR})

###############################################################################

if (LIBSL_MULTITHREADED_STATIC)
	foreach(flag_var
	        CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
	        CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO
	        CMAKE_C_FLAGS CMAKE_C_FLAGS_DEBUG CMAKE_C_FLAGS_RELEASE)
		if(${flag_var} MATCHES "/MD")
	    	string(REGEX REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")
	   	endif(${flag_var} MATCHES "/MD")
	endforeach(flag_var)
endif (LIBSL_MULTITHREADED_STATIC)

###############################################################################

## Linux/GCC: add -fPIC so that LibSL can be linked against shared libraries
if (NOT WIN32)
	if (NOT ANDROID)
		if("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "x86_64")
			set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -fPIC")
			set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fPIC"  )
			set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fPIC"  )
			set(CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO} -fPIC")
			set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fPIC"  )
			set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fPIC"  )
		endif("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "x86_64")
	endif(NOT ANDROID)
endif(NOT WIN32)

###############################################################################

if(EMSCRIPTEN)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s WASM=1")
endif(EMSCRIPTEN)

###############################################################################

# Add C++11 to LibSL target
#Include(UseCXX17)
#AddGlobalCXX11()

add_subdirectory(src)

# Building LibSL as part of a CMakeLists.txt tree makes the AUTO_BIND_SHADER macro available to the source tree (this behavior is what we want)
include(src/tools/autobindshader/AutoBindShader.cmake)
