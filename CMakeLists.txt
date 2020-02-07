cmake_minimum_required(VERSION 3.0.0)

project(LibSL)

# message(STATUS "[in LibSL/]")

set(LibSL_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# Include our custom macros
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")
include(macros)
include(ForceOutOfSourceBuild)
include(UseColors)
include(CMakeDependentOption)
include(CheckCompilers)
# Building LibSL as part of a CMakeLists.txt tree makes the AUTO_BIND_SHADER macro available to the source tree (this behavior is what we want)
include(tools/autobindshader/AutoBindShader.cmake)

#############################################################################
# options
option(LIBSL_CORE_ONLY "Build only the core of LibSL" ON)

CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_GL "Build LibSL_gl" ON "NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_GL4 "Build LibSL_gl for OpenGL 4.x" OFF "LIBSL_BUILD_GL;NOT LIBSL_CORE_ONLY" OFF)

CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_GLUX "Build gluX" ON "NOT ANDROID;NOT EMSCRIPTEN;NOT LIBSL_CORE_ONLY" OFF) #?
CMAKE_DEPENDENT_OPTION(LIBSL_USE_GLUX "Use gluX with LibSL_gl" ON "NOT ANDROID;NOT EMSCRIPTEN;NOT LIBSL_CORE_ONLY" OFF) #?

CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_DX9 "Build LibSL_d3d" OFF "WIN32;NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_DX10 "Build LibSL_dx10" OFF "WIN32;NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_SHARP "Build LibSL_sharp" ON "WIN32;NOT LIBSL_CORE_ONLY" OFF)

CMAKE_DEPENDENT_OPTION(LIBSL_USE_ANTTWEAKBAR "Use AntTweakBar with LibSL_gl" OFF "NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_USE_IMGUI "Use ImGUI with LibSL_gl" ON "NOT LIBSL_CORE_ONLY" OFF)

CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_LINALG "Build LibSL_linalg" OFF "NOT LIBSL_CORE_ONLY" OFF) #?

CMAKE_DEPENDENT_OPTION(LIBSL_POWER_USER "Power user mode (reserved, do not use)" OFF "NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_MAX_PERFORMANCE "Build LibSL for performance rather than safety" ON "NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_MULTITHREADED_STATIC "Build LibSL with /MT flag in Visual C++" OFF "NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_BOOST "Build and use BOOST with libSL" OFF "NOT LIBSL_CORE_ONLY" OFF)

CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_TOOLS "Build LibSL tools" OFF "NOT ANDROID;NOT EMSCRIPTEN;NOT LIBSL_CORE_ONLY" OFF)

CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_TUTORIALS "Build LibSL tutorials" OFF "NOT LIBSL_CORE_ONLY" OFF)

CMAKE_DEPENDENT_OPTION(LIBSL_ENABLE_NVIDIA_CG "Enable NVidia Env for LibSL" OFF "NOT LIBSL_CORE_ONLY" OFF) # deprecated?
CMAKE_DEPENDENT_OPTION(LIBSL_TESTS "Build tests for LibSL" OFF "NOT LIBSL_CORE_ONLY" OFF) # deprecated?

CMAKE_DEPENDENT_OPTION(LIBSL_BUILD_LIBARCHIVE "Build libarchive" OFF "NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_USE_SQLITE "Use SQLite" OFF "NOT LIBSL_CORE_ONLY" OFF)
CMAKE_DEPENDENT_OPTION(LIBSL_USE_TCALP "Use Tclap" OFF "NOT LIBSL_CORE_ONLY" OFF)

	
#############################################################################
# Configure header

configure_file (
  "${PROJECT_SOURCE_DIR}/src/LibSL.config.h.in"
  "${PROJECT_SOURCE_DIR}/src/LibSL.config.h"
  )

# Empty ??
configure_file (
  "${PROJECT_SOURCE_DIR}/src/LibSL_gl.config.h.in"
  "${PROJECT_SOURCE_DIR}/src/LibSL_gl.config.h"
  )

#############################################################################


if(LIBSL_BOOST)
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

	# Ugly, but force it to use the path we specified. Otherwise, it breaks on
	# UNIX as most Linux distros come with a boost installation which gets
	# found by default.
	include_directories(${BOOST_INCLUDEDIR})
	link_directories(${BOOST_LIBRARYDIR})
endif(LIBSL_BOOST)

#[[
include_directories(
			${CMAKE_CURRENT_SOURCE_DIR}/src
			${CMAKE_CURRENT_SOURCE_DIR}/libs
			${CMAKE_CURRENT_SOURCE_DIR}/libs/loki/include
			${CMAKE_CURRENT_SOURCE_DIR}/libs/tclap/include
			${CMAKE_CURRENT_SOURCE_DIR}/libs/glux/src
			${CMAKE_CURRENT_SOURCE_DIR}/libs/png
			${CMAKE_CURRENT_SOURCE_DIR}/libs/jpeg
			${CMAKE_CURRENT_SOURCE_DIR}/libs/zlib
			${CMAKE_CURRENT_SOURCE_DIR}/libs/newmat
			${CMAKE_CURRENT_SOURCE_DIR}/libs/OpenNL/src
			${CMAKE_CURRENT_SOURCE_DIR}/libs/anttweakbar/include
			${CMAKE_CURRENT_SOURCE_DIR}/libs/SQLite
			${CMAKE_CURRENT_SOURCE_DIR}/libs/qhull/src/libqhull_r
			${CMAKE_CURRENT_SOURCE_DIR}/libs/rply
			)
]]

if(LIBSL_ENABLE_NVIDIA_CG)
	include_directories($ENV{CG_INC_PATH})
	link_directories($ENV{CG_LIB_PATH})
endif(LIBSL_ENABLE_NVIDIA_CG)

###############################################################################

if(LIBSL_MULTITHREADED_STATIC)
	foreach(flag_var
	        CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
	        CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO
	        CMAKE_C_FLAGS CMAKE_C_FLAGS_DEBUG CMAKE_C_FLAGS_RELEASE)
		if(${flag_var} MATCHES "/MD")
	    	string(REGEX REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")
	   	endif(${flag_var} MATCHES "/MD")
	endforeach(flag_var)
endif(LIBSL_MULTITHREADED_STATIC)

###############################################################################

## Linux/GCC: add -fPIC so that LibSL can be linked against shared libraries
if(NOT WIN32)
	if(NOT ANDROID)
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

if(NOT DEFINED CMAKE_BUILD_TYPE)
	if(LIBSL_BUILD_DEBUG)
		set(CMAKE_BUILD_TYPE Debug)
	else(LIBSL_BUILD_DEBUG)
		set(CMAKE_BUILD_TYPE Release)
	endif(LIBSL_BUILD_DEBUG)
endif()

if(ANDROID)
	add_definitions(-DANDROID)
endif(ANDROID)

###############################################################################

# Add C++11 to LibSL target
#Include(UseCXX17)
#AddGlobalCXX11()

###############################################################################
add_subdirectory(src)

add_subdirectory(libs)

if(LIBSL_BUILD_TOOLS)
	add_subdirectory(tools)
endif(LIBSL_BUILD_TOOLS)

if(LIBSL_BUILD_TUTORIALS)
	add_subdirectory(tutorials)
endif(LIBSL_BUILD_TUTORIALS)

if(LIBSL_TESTS)
	add_subdirectory(tests)
	if(EMSCRIPTEN)
		add_subdirectory(tests/emscripten)
	endif(EMSCRIPTEN)
endif(LIBSL_TESTS)
