#pragma once

#ifndef GEOMETRY_H
#define GEOMETRY_H
#define _USE_MATH_DEFINES

#include <cmath>

namespace geometry {
    // Square
    double square_area(double lenght);
    double square_perimeter(double lenght);
    // Rectangle
    double rectangle_area(double lenghtA, double lenghtB);
    double rectangle_perimeter(double lenghtA, double lenghtB);
    // Triangle
    double triangle_area(double base, double height);
    double triangle_perimeter(double sideA, double sideB, double sideC);
    double herons_formula_triangle_area(double semiperimeter, double sideA, double sideB, double sideC);
    // Circle
    double circle_area(double radius);
    double circle_perimeter(double radius);
    // Rhombus
    double rhombus_area(double diagonalOne, double diagonalSecond);
    double rhombus_perimeter(double lenght);
    // Parallelogram
    double parallelogram_area(double base, double height);
    double parallelogram_perimeter(double sideA, double sideB);
    // Trapeze
    double trapeze_area(double baseA, double baseB, double height);
    double trapeze_perimeter(double sideA, double sideB, double sideC, double sideD);
    // Cube
    double cube_volume(double lengthEdge);
    double cube_area(double lenghtEdge);
    // Rectangular parallelepiped
    double rectangularParallelepiped_volume(double sideA, double sideB, double sideC);
    double rectangularParallelepiped_area(double sideA, double sideB, double sideC);
    // Cylinder
    double cylinder_volume(double radius, double height);
    double cylinder_area(double radius, double height);
    // Cone
    double cone_volume(double radius, double height);
    double cone_area(double radius, double formingObliqueHeight);
    // Char
    double char_volume(double radius);
    double char_area(double radius);
    // Polygon
    double polygon_area(double numberOfSides, double length);
    double polygon_perimetr(double numberOfSides, double length);
    // Ellipse
    double ellipse_area(double largeAxleHalf, double minorAxle);
    double ellipse_perimetr(double largeAxleHalf, double minorAxle);
    // Circle sector
    double circleSector_area(double sectorCenterCorner, double radius);
    double circleSector_arcLength(double sectorCenterCorner, double radius);
    // Thor
    double thor_volume(double centerCircleRadius, double torusTubeRadius);
    double surfaceAreaOfThe_torus(double centerCircleRadius, double torusTubeRadius);
}

#endif