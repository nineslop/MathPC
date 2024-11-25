#pragma once

#ifndef CALCUL_H
#define CALCUL_H

#include <cmath>
#include <stdexcept>

// Arithmetic operations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

// Trigonometric functions
double calculateSin(double value);
double calculateCos(double value);
double calculateTan(double value);
double calculateCotan(double value);
double calculateArcsin(double value);
double calculateArccos(double value);
double calculateArctan(double value);

// Degrees, roots and logarithms
double calculateSqrt(double value);
double calculatePow(double base, double exponent);
double calculateLog(double value, double base);
double calculateModulus(double value);

#endif
