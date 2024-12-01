#pragma once

#ifndef ALGEBRA_H
#define ALGEBRA_H

#include <stdexcept>
#include <cmath>
#include <tuple>

namespace algebra {

    double solve_linear_equation(double a, double b);
    bool solve_quadratic_equation(double a, double b, double c, double& x1, double& x2);
}

#endif
