#pragma once

#ifndef GEOMETRY_H
#define GEOMETRY_H
#define _USE_MATH_DEFINES

#include <cmath>

namespace geometry {
    // Квадрат
    double square_area(double lenght);
    double square_perimeter(double lenght);
    // Прямоугольник
    double rectangle_area(double lenghtA, double lenghtB);
    double rectangle_perimeter(double lenghtA, double lenghtB);
    // Треугольник
    double triangle_area(double base, double height);
    double triangle_perimeter(double sideA, double sideB, double sideC);
    double herons_formula_triangle_area(double semiperimeter, double sideA, double sideB, double sideC);
    // Круг
    double circle_area(double radius);
    double circle_perimeter(double radius);
    // Ромб
    double rhombus_area(double diagonalOne, double diagonalSecond);
    double rhombus_perimeter(double lenght);
    // Параллелограмм
    double parallelogram_area(double base, double height);
    double parallelogram_perimeter(double sideA, double sideB);
    // Трапеция
    double trapeze_area(double baseA, double baseB, double height);
    double trapeze_perimeter(double sideA, double sideB, double sideC, double sideD);
    // Куб
    double cube_volume(double lengthEdge);
    double cube_area(double lenghtEdge);
    // Прямоугольный параллелепипед
    double rectangularParallelepiped_volume(double sideA, double sideB, double sideC);
    double rectangularParallelepiped_area(double sideA, double sideB, double sideC);
    // Цилиндр
    double cylinder_volume(double radius, double height);
    double cylinder_area(double radius, double height);
    // Конус
    double cone_volume(double radius, double height);
    double cone_area(double radius, double formingObliqueHeight);
    // Сфера
    double sphere_volume(double radius);
    double sphere_area(double radius);

}

#endif