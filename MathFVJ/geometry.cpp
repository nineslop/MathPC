#include "geometry.h"

namespace geometry {

    // �������
    double square_area(double lenght) {
        return pow(lenght, 2);
    }
    double square_perimeter(double lenght) {
        return 4 * lenght;
    }
    // �������������
    double rectangle_area(double lenghtA, double lenghtB) {
        return lenghtA * lenghtB;  // ������� ��������������
    }
    double rectangle_perimeter(double lenghtA, double lenghtB) {
        return 2 * (lenghtA + lenghtB);  // �������� ��������������
    }
    // �����������
    double triangle_area(double base, double height) {
        return 0.5 * base * height;  // ������� ������������
    }
    double triangle_perimeter(double sideA, double sideB, double sideC) {
        return sideA + sideB + sideC;
    }
    double herons_formula_triangle_area(double semiperimeter, double sideA, double sideB, double sideC) {
        return sqrt(semiperimeter * (semiperimeter - sideA) * (semiperimeter - sideB) * (semiperimeter - sideC));
    }
    // ����
    double circle_area(double radius) {
        return M_PI * radius * radius;  // ������� �����
    }

    double circle_perimeter(double radius) {
        return 2 * M_PI * radius; // �������� �����
    }
    // ����
    double rhombus_area(double diagonalOne, double diagonalSecond) {
        return diagonalOne * diagonalSecond / 2;
    }
    double rhombus_perimeter(double lenght) {
        return 4 * lenght;
    }
    // ��������������
    double parallelogram_area(double base, double height) {
        return base * height;
    }
    double parallelogram_perimeter(double sideA, double sideB) {
        return 2 * (sideA + sideB);
    }
    // ��������
    double trapeze_area(double baseA, double baseB, double height) {
        return 0.5 * (baseA + baseB) * height;
    }
    double trapeze_perimeter(double sideA, double sideB, double sideC, double sideD) {
        return sideA + sideB + sideC + sideD;
    }
    // ���
    double cube_volume(double lengthEdge) {
        return pow(lengthEdge, 3);
    }
    double cube_area(double lenghtEdge) {
        return 6 * pow(lenghtEdge, 2);
    }
    // ������������� ��������������
    double rectangularParallelepiped_volume(double sideA, double sideB, double sideC) {
        return sideA * sideB * sideC;
    }
    double rectangularParallelepiped_area(double sideA, double sideB, double sideC) {
        return 2 * (sideA * sideB + sideA * sideC + sideB * sideC);
    }
    // �������
    double cylinder_volume(double radius, double height) {
        return M_PI * pow(radius, 2) * height;
    }
    double cylinder_area(double radius, double height) {
        return 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;
    }
    // �����
    double cone_volume(double radius, double height) {
        return 1.0 / 3.0 * M_PI * pow(radius, 2) * height;
    }
    double cone_area(double radius, double formingObliqueHeight) {
        return M_PI * radius * (radius + formingObliqueHeight);
    }
    // �����
    double sphere_volume(double radius) {
        return 4.0 / 3.0 * M_PI * pow(radius, 3);
    }
    double sphere_area(double radius) {
        return 4 * M_PI * pow(radius, 2);
    }
}