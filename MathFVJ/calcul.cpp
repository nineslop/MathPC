#include "calcul.h"

// Arithmetic operations
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) throw std::invalid_argument("Деление на ноль невозможно!");
    return a / b;
}

// Trigonometric functions
double calculateSin(double value) {
    return sin(value);
}

double calculateCos(double value) {
    return cos(value);
}

double calculateTan(double value) {
    return tan(value);
}

double calculateCotan(double value) {
    if (tan(value) == 0) throw std::invalid_argument("Значение котангенса неопределено!");
    return 1.0 / tan(value);
}

double calculateArcsin(double value) {
    if (value < -1 || value > 1) throw std::invalid_argument("Аргумент вне допустимого диапазона [-1, 1]");
    return asin(value);
}

double calculateArccos(double value) {
    if (value < -1 || value > 1) throw std::invalid_argument("Аргумент вне допустимого диапазона [-1, 1]");
    return acos(value);
}

double calculateArctan(double value) {
    return atan(value);
}

// Degrees, roots and logarithms
double calculateSqrt(double value) {
    if (value < 0) throw std::invalid_argument("Корень из отрицательного числа невозможен!");
    return sqrt(value);
}

double calculatePow(double base, double exponent) {
    return pow(base, exponent);
}

double calculateLog(double value, double base) {
    if (value <= 0 || base <= 0 || base == 1) throw std::invalid_argument("Недопустимые значения для логарифма!");
    return log(value) / log(base);
}

double calculateModulus(double value) {
    return fabs(value);
}
