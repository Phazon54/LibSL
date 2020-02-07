project(LIBSL)

###############################

add_subdirectory(LibSL-advanced)
add_subdirectory(LibSL-core)
add_subdirectory(LibSL-GPU)
if(LIBSL_BUILD_SHARP)
	add_subdirectory(LibSL-sharp)
endif(LIBSL_BUILD_SHARP)
add_subdirectory(LibSL-structures)

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


createsourcegroups("Header files" src "${LIBSL_GL_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_GL_SOURCE}")

createsourcegroups("Header files" src "${LIBSL_GL4_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_GL4_SOURCE}")

createsourcegroups("Header files" src "${LIBSL_GL4CORE_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_GL4CORE_SOURCE}")

###############################

createsourcegroups("Header files" src "${LIBSL_DX9_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_DX9_SOURCE}")

###############################


createsourcegroups("Header files" src "${LIBSL_DX10_HEADERS}")
createsourcegroups("Source files" src "${LIBSL_DX10_SOURCE}")

###############################

# if    (WIN32)
# add_definitions("-DHAS_TAUCS")
# endif (WIN32)

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

###############################

# various fixes
if(APPLE)
set(CMAKE_C_ARCHIVE_FINISH "<CMAKE_RANLIB> -c <TARGET>")
set(CMAKE_CXX_ARCHIVE_FINISH "<CMAKE_RANLIB> -c <TARGET>")
set(CMAKE_Fortran_ARCHIVE_FINISH "<CMAKE_RANLIB> -c <TARGET>")
endif(APPLE)

###############################
