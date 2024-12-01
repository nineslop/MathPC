#include "geometry.h"

namespace geometry {

    // Square
    double square_area(double lenght) {
        return pow(lenght, 2);
    }
    double square_perimeter(double lenght) {
        return 4 * lenght;
    }
    // Rectangle
    double rectangle_area(double lenghtA, double lenghtB) {
        return lenghtA * lenghtB;
    }
    double rectangle_perimeter(double lenghtA, double lenghtB) {
        return 2 * (lenghtA + lenghtB);
    }
    // Triangle
    double triangle_area(double base, double height) {
        return 0.5 * base * height;
    }
    double triangle_perimeter(double sideA, double sideB, double sideC) {
        return sideA + sideB + sideC;
    }
    double herons_formula_triangle_area(double semiperimeter, double sideA, double sideB, double sideC) {
        return sqrt(semiperimeter * (semiperimeter - sideA) * (semiperimeter - sideB) * (semiperimeter - sideC));
    }
    // Circle
    double circle_area(double radius) {
        return M_PI * radius * radius;
    }

    double circle_perimeter(double radius) {
        return 2 * M_PI * radius;
    }
    // Rhombus
    double rhombus_area(double diagonalOne, double diagonalSecond) {
        return diagonalOne * diagonalSecond / 2;
    }
    double rhombus_perimeter(double lenght) {
        return 4 * lenght;
    }
    // Parallelogram
    double parallelogram_area(double base, double height) {
        return base * height;
    }
    double parallelogram_perimeter(double sideA, double sideB) {
        return 2 * (sideA + sideB);
    }
    // Trapeze
    double trapeze_area(double baseA, double baseB, double height) {
        return 0.5 * (baseA + baseB) * height;
    }
    double trapeze_perimeter(double sideA, double sideB, double sideC, double sideD) {
        return sideA + sideB + sideC + sideD;
    }
    // Cube
    double cube_volume(double lengthEdge) {
        return pow(lengthEdge, 3);
    }
    double cube_area(double lenghtEdge) {
        return 6 * pow(lenghtEdge, 2);
    }
    // Rectangular parallelepiped
    double rectangularParallelepiped_volume(double sideA, double sideB, double sideC) {
        return sideA * sideB * sideC;
    }
    double rectangularParallelepiped_area(double sideA, double sideB, double sideC) {
        return 2 * (sideA * sideB + sideA * sideC + sideB * sideC);
    }
    // Cylinder
    double cylinder_volume(double radius, double height) {
        return M_PI * pow(radius, 2) * height;
    }
    double cylinder_area(double radius, double height) {
        return 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;
    }
    // Cone
    double cone_volume(double radius, double height) {
        return 1.0 / 3.0 * M_PI * pow(radius, 2) * height;
    }
    double cone_area(double radius, double formingObliqueHeight) {
        return M_PI * radius * (radius + formingObliqueHeight);
    }
    // Char
    double char_volume(double radius) {
        return 4.0 / 3.0 * M_PI * pow(radius, 3);
    }
    double char_area(double radius) {
        return 4 * M_PI * pow(radius, 2);
    }
    // Polygon
    double polygon_area(double numberOfSides, double length) {
        return numberOfSides * pow(length, 2) / (4 * std::tan(M_PI / numberOfSides));
    }
    double polygon_perimetr(double numberOfSides, double length) {
        return numberOfSides * length;
    }
    //Ellipse
    double ellipse_area(double largeAxleHalf, double minorAxle) {
        return M_PI * largeAxleHalf * minorAxle;
    }
    double ellipse_perimetr(double largeAxleHalf, double minorAxle) {
        return M_PI * (3 * (largeAxleHalf + minorAxle) - sqrt((3 * largeAxleHalf + minorAxle) * (largeAxleHalf + 3 * minorAxle)));
    }
    // Circle sector
    double circleSector_area(double sectorCenterCorner, double radius) {
        return (sectorCenterCorner / (2 * M_PI)) * (M_PI * pow(radius, 2));
    }
    double circleSector_arcLength(double sectorCenterCorner, double radius) {
        return radius * sectorCenterCorner;
    }
    // Thor
    double thor_volume(double centerCircleRadius, double torusTubeRadius) {
        return 2 * pow(M_PI, 2) * centerCircleRadius * pow(torusTubeRadius, 2);
    }
    double surfaceAreaOfThe_torus(double centerCircleRadius, double torusTubeRadius) {
        return 4 * pow(M_PI, 2) * centerCircleRadius * torusTubeRadius;
    }
}