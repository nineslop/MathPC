#include "physics.h"


namespace physics {

	//MECHANICS SPEED
	double calculate_path(double v, double t) {
		return v * t; // s = v * t
	}

	double calculate_time(double s, double v) {
		if (v == 0 || s <= 0) {
			throw std::invalid_argument("The speed (v) must not be 0 and the path (s) must not be negative.");
		}
		return s / v; // t = s / v
	}

	double calcilate_speed(double s, double t) {
		if (t == 0) {
			throw std::invalid_argument("Time (t) cannot be zero.");
		}
		return s / t; // v = s / t
	}

	//MECHANICS acceleration, velocity change, time change
	double calculate_acceleration(double del_u, double del_t) {
		if (del_t == 0) {
			throw std::invalid_argument("Time change (t) cannot be zero.");
		}
		return del_u / del_t; // a = u / t
	}

	double calculate_del_u(double a, double del_t) {
		return a * del_t; // del_u = a * del_t
	}

	double calculate_del_t(double del_u, double a) {
		return del_u / a; // del_t = del_u / a
	}

	// Force (Newton's second law)
	double calculate_F(double m, double a) {
		if (m == 0) {
			throw std::invalid_argument("Mass (m) cannot be zero");
		}
		return m * a; // F = m * a
	}

	double calculate_m(double F, double a) {
		return F / a; // m = F / a
	}

	double calculate_a(double F, double m) {
		return F / m; // a = F / m
	}

	double calculate_work(double F, double s, double alpha_deg) {
		if (F == 0 || s == 0) {
			throw std::invalid_argument("Force (F) and distance (s) cannot be zero if work is non-zero.");
		}
		double alpha_rad = alpha_deg * M_PI / 180.0;  // Convert the angle to radians
		return F * s * cos(alpha_rad);  // A = F * s * cos(a)
	}

	double calculate_force(double A, double s, double alpha_deg) {
		if (s == 0 || A == 0) {
			throw std::invalid_argument("Distance (s) and work (A) cannot be zero when calculating force.");
		}
		double alpha_rad = alpha_deg * M_PI / 180.0;  // Convert the angle to radians
		return A / (s * cos(alpha_rad));  // F = A / (s * cos(a))
	}

	double calculate_distance(double A, double F, double alpha_deg) {
		if (F == 0 || A == 0) {
			throw std::invalid_argument("Force (F) and work (A) cannot be zero when calculating distance.");
		}
		double alpha_rad = alpha_deg * M_PI / 180.0;  // Convert the angle to radians
		return A / (F * cos(alpha_rad));  // s = A / (F * cos(a))
	}
}