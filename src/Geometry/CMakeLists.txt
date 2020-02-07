set(GEOMETRY_HEADERS
	AAB.h
	Bezier.h
	BezierCurve.h
	Brush.h
	Components.h
	Contour.h
	ConvexHull.h
	ImplicitShape.h
	LookUpTable.h
	MarchingCubes.h
	Morpho.h
	Plane.h
	PointTree.h
	Polygon.h
	Voxelizer.h
	VoxelTools.h

	Distances/Distance_Segment_Point.h

	Intersections/Intersection_Plane_AABox.h
	Intersections/Intersection_Polygon_AABox.h
	Intersections/Intersection_Ray_AABox.h
	Intersections/Intersection_Ray_Plane.h
	Intersections/Intersection_Segment_Segment.h
)

set(GEOMETRY_SOURCES
	Components.cpp
	Contour.cpp
	ConvexHull.cpp
	ImplicitShape.cpp
	MarchingCubes.cpp
	Morpho.cpp
  PointTree.cpp
	#Voxelizer.cpp

	Distances/Distance_Segment_Point.cpp

	Intersections/Intersection_Plane_AABox.cpp
	Intersections/Intersection_Polygon_AABox.cpp
	Intersections/Intersection_Ray_AABox.cpp
	Intersections/Intersection_Ray_Plane.cpp
	Intersections/Intersection_Segment_Segment.cpp
	Intersections/triangle_aabox.cpp
	Intersections/triangle_ray.cpp
)