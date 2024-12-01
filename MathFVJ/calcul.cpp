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
    if (b == 0) throw std::invalid_argument("Division by zero is impossible!");
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
    if (tan(value) == 0) throw std::invalid_argument("The value of the cotangent is indeterminate!");
    return 1.0 / tan(value);
}

double calculateArcsin(double value) {
    if (value < -1 || value > 1) throw std::invalid_argument("Argument outside the valid range [-1, 1]");
    return asin(value);
}

double calculateArccos(double value) {
    if (value < -1 || value > 1) throw std::invalid_argument("Argument outside the valid range [-1, 1]");
    return acos(value);
}

double calculateArctan(double value) {
    return atan(value);
}

// Degrees, roots and logarithms
double calculateSqrt(double value) {
    if (value < 0) throw std::invalid_argument("The root of a negative number is impossible!");
    return sqrt(value);
}

double calculatePow(double base, double exponent) {
    return pow(base, exponent);
}

double calculateLog(double value, double base) {
    if (value <= 0 || base <= 0 || base == 1) throw std::invalid_argument("Invalid values for the logarithm!");
    return log(value) / log(base);
}

double calculateModulus(double value) {
    return fabs(value);
}

double definitionOfFactorial(double num) {
    if (num < 0 || static_cast<int>(num) != num) {
        throw std::invalid_argument("The factorial is defined only for non-negative integers.");
    }

    if (num == 0) {
        return 1.0;
    }

    double value = 1.0;
    for (int i = 1; i <= static_cast<int>(num); ++i) {
        value *= i;
    }

    return value;
}

double definitionOfFactorialRecursive(double num) {
    if (num < 0 || static_cast<int>(num) != num) {
        throw std::invalid_argument("The factorial is defined only for non-negative integers.");
    }

    if (num == 0) {
        return 1.0;
    }

    return num * definitionOfFactorialRecursive(num - 1); // Recurrence case: n! = n * (n-1)!
}

double propertiesOfFactorials(double num) {
    if (num < 1 || static_cast<int>(num) != num) {
        throw std::invalid_argument("The factorial is defined only for non-negative integers.");
    }

    if (num == 0) {
        return 1.0;
    }

    return num;
}

double numberOfCombinations(double num, double k) {
    if (num < 0 || k < 0 || k > num || static_cast<int>(num) != num || static_cast<int>(k) != k) {
        throw std::invalid_argument("The number of combinations is defined only for 0 <= k <= n, where n and k are integers.");
    }

    if (num == 0 && k == 0) {
        return 1.0;
    }

    return definitionOfFactorialRecursive(num) / definitionOfFactorialRecursive(k) * definitionOfFactorialRecursive(num - k);
}
