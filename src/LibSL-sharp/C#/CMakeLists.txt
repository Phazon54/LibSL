set(LIBSL_DX9_HEADERS
	LibSL_d3d.h
	D3DHelpers/D3DHelpers.h
	D3DHelpers/FxImageProcessing.h
	D3DHelpers/D3DQuad.h
	D3DHelpers/FxHelpers.h
	D3DHelpers/FxHelpers_dx9_policy.h
	../LibSL-GPU/GPUHelpers/Font.h
	../LibSL-GPU/GPUHelpers/GPUHelpers.h
	../LibSL-GPU/GPUHelpers/GPUHelpers_d3d.h
	../LibSL-GPU/GPUHelpers/Profiler.h
	../LibSL-GPU/GPUHelpers/Shapes.h
	../LibSL-core/Image/ImageFormat_dds.h
	../LibSL-core/Mesh/AnimatedMeshFxRenderer.h
	../LibSL-core/Mesh/MeshRenderer.h
	../LibSL-core/Mesh/TexturedMeshRenderer.h
	../LibSL-GPU/UIHelpers/Manipulator.h
	../LibSL-GPU/UIHelpers/SimpleUI.h
	../LibSL-GPU/UIHelpers/TrackballUI.h
	../LibSL-GPU/UIHelpers/Trackball.h
)

set(LIBSL_DX9_SOURCE
	D3DHelpers/D3DHelpers.cpp
	D3DHelpers/FxImageProcessing.cpp
	D3DHelpers/D3DQuad.cpp
	../LibSL-GPU/GPUHelpers/Font.cpp
	../LibSL-GPU/GPUHelpers/GPUHelpers.cpp
	../LibSL-GPU/GPUHelpers/Profiler.cpp
	../LibSL-GPU/GPUHelpers/Shapes.cpp
	../LibSL-core/Image/ImageFormat_dds.cpp
	../LibSL-core/Mesh/AnimatedMeshFxRenderer.cpp
	../LibSL-GPU/UIHelpers/Manipulator.cpp
	../LibSL-GPU/UIHelpers/SimpleUI.cpp
	../LibSL-GPU/UIHelpers/TrackballUI.cpp
	../LibSL-GPU/UIHelpers/Trackball.cpp
	../LibSL-GPU/UIHelpers/BindAntTweakBar.cpp
)

set(LIBSL_DX10_HEADERS
	LibSL_dx10.h
	D3DHelpers/D3DHelpers.h
	D3DHelpers/FxImageProcessing.h
	D3DHelpers/D3DQuad.h
	D3DHelpers/FxHelpers.h
	D3DHelpers/FxHelpers_dx10_policy.h
	../LibSL-GPU/GPUHelpers/Font.h
	../LibSL-GPU/GPUHelpers/GPUHelpers.h
	../LibSL-GPU/GPUHelpers/GPUHelpers_d3d.h
	../LibSL-GPU/GPUHelpers/Profiler.h
	../LibSL-GPU/GPUHelpers/Shapes.h
	../LibSL-core/Image/ImageFormat_dds.h
	../LibSL-core/Mesh/AnimatedMeshFxRenderer.h
	../LibSL-core/Mesh/MeshRenderer.h
	../LibSL-core/Mesh/TexturedMeshRenderer.h
	../LibSL-GPU/UIHelpers/Manipulator.h
	../LibSL-GPU/UIHelpers/SimpleUI.h
	../LibSL-GPU/UIHelpers/TrackballUI.h
	../LibSL-GPU/UIHelpers/Trackball.h
)

set(LIBSL_DX10_SOURCE
	D3DHelpers/D3DHelpers.cpp
	D3DHelpers/FxImageProcessing.cpp
	D3DHelpers/D3DQuad.cpp
	../LibSL-GPU/GPUHelpers/Font.cpp
	../LibSL-GPU/GPUHelpers/GPUHelpers.cpp
	../LibSL-GPU/GPUHelpers/Profiler.cpp
	../LibSL-GPU/GPUHelpers/Shapes.cpp
	../LibSL-core/Image/ImageFormat_dds.cpp
	../LibSL-core/Mesh/AnimatedMeshFxRenderer.cpp
	../LibSL-GPU/UIHelpers/Manipulator.cpp
	../LibSL-GPU/UIHelpers/SimpleUI.cpp
	../LibSL-GPU/UIHelpers/TrackballUI.cpp
	../LibSL-GPU/UIHelpers/Trackball.cpp
	../LibSL-GPU/UIHelpers/BindAntTweakBar.cpp
)

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