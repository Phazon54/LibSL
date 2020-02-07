add_subdirectory(LinAlg)
add_subdirectory(TemplateHelpers)

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