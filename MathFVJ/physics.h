#pragma once

#ifndef PHYSICS_H
#define PHYSICS_H
#define _USE_MATH_DEFINES

#include <cmath>
#include <string>
#include <stdexcept>

namespace physics {
	//MECHANICS Speed
	double calculate_path(double v, double t);
	double calculate_time(double s, double v);
	double calcilate_speed(double s, double t);

	//MECHANICS Acceleration
	double calculate_acceleration(double del_u, double del_t);
	double calculate_del_u(double a, double del_t);
	double calculate_del_t(double del_u, double a);

	// Force (Newton's second law)
	double calculate_F(double m, double a);
	double calculate_m(double F, double a);
	double calculate_a(double F, double m);

	// A
	double calculate_work(double F, double s, double alpha_deg);
	double calculate_force(double A, double s, double alpha_deg);
	double calculate_distance(double A, double F, double alpha_deg);
}

#endif