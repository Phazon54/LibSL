if(LIBSL_BUILD_GL)
	add_subdirectory(viewmesh)
	add_subdirectory(viewimage)
endif(LIBSL_BUILD_GL)

if(LIBSL_BUILD_DX9)
	add_subdirectory(uvatlas)
	add_subdirectory(viewfloat)
endif(LIBSL_BUILD_DX9)

add_subdirectory(imageedit)
add_subdirectory(smoothmesh)
