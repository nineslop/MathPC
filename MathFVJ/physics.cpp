#include "physics.h"
#include "physics_constants.h"


namespace physics {

	//Kinematics Formulas of equal-velocity motion
	double findingTheTravelled_calculate_path(double v, double t) {
		return v * t; // s = v * t
	}

	double findingTheTravelled_calculate_time(double s, double v) {
		if (v == 0 || s <= 0) {
			throw std::invalid_argument("The speed (v) must not be 0 and the path (s) must not be negative.");
		}
		return s / v; // t = s / v
	}

	double findingTheTravelled_calculate_speed(double s, double t) {
		if (t == 0) {
			throw std::invalid_argument("Time (t) cannot be zero.");
		}
		return s / t; // v = s / t
	}


	// The formula for the path in equidirectional motion
	double terminal_velocity(double a, double t) {
		return a * t; // v = a * t
	}

	double pathOfEquidirectionalMotion(double v_zero, double t, double a) {
		if (t <= 0 && (v_zero != 0 || a != 0)) {
			throw std::invalid_argument("The time must be greater than zero and at least one of the parameters must be non-zero (v0 = 0 or a = 0).");
		}
		return (v_zero * t) + ((a * pow(t, 2)) / 2);
	}

	double v_zeroOfEquidirectionalMotion(double S, double a, double t) {
		if (t <= 0) {
			throw std::invalid_argument("The time must be greater than zero.");
		}
		return (S - ((a * pow(t, 2)) / 2)) / t;
	}

	double accelerationOfEquidirectionalMotion(double S, double v_zero, double t) {
		if (t <= 0) {
			throw std::invalid_argument("The time must be greater than zero.");
		}
		return (2 * (S - v_zero * t)) / pow(t, 2);
	}

	// Equation of the relationship between velocity, acceleration and path
	double equationOfTheRelationshipBetweenVelocity(double v_zero, double a, double S) {
		if (S <= 0 || a == 0) {
			throw std::invalid_argument("The path must be greater than 0 and the acceleration must not equal 0.");
		}
		return sqrt(pow(v_zero, 2) + 2 * a * S);
	}

	double equationOfTheRelationshipBetweenV_zero(double v, double a, double S) {
		if (S <= 0 || a == 0) {
			throw std::invalid_argument("The path must be greater than 0 and the acceleration must not equal 0.");
		}
		return sqrt(pow(v, 2) + 2 * a * S);
	}

	double equationOfTheRelationshipBetweenAcceleration(double v, double v_zero, double S) {
		if (S <= 0) {
			throw std::invalid_argument("The path must be greater than 0.");
		}
		return (pow(v, 2) - pow(v_zero, 2)) / (2 * S);
	}

	double equationOfTheRelationshipBetweenPath(double v, double v_zero, double a) {
		if (a == 0) {
			throw std::invalid_argument("The acceleration must not equal 0.");
		}
		return (pow(v, 2) - pow(v_zero, 2)) / (2 * a);
	}

	// Dynamics Newton's Second Law
	double dynamicsNewtonsSecondLaw(double m, double a) {
		if (m <= 0) {
			throw std::invalid_argument("Mass cannot be zero.");
		}
		return m * a;
	}

	double dynamicsNewtonsSecondLawMass(double F, double a) {
		if (a == 0) {
			throw std::invalid_argument("Mass cannot be zero.");
		}
		return F / a;
	}

	double dynamicsNewtonsSecondLawStrong(double F, double m) {
		if (m <= 0) {
			throw std::invalid_argument("Mass cannot be zero.");
		}
		return F / m;
	}

	// Gravity
	// Friction force
}