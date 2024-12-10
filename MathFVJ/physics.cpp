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
	double frictionforce(double u, double N) {
		if (u <= 0 || N <= 0) {
			throw std::invalid_argument("The friction coefficient or normal force cannot be less than zero.");
		}
		return u * N;
	}

	double frictionforceCoefficientOfFriction(double F, double N) {
		if (N <= 0) {
			throw std::invalid_argument("The normal force cannot be less than zero.");
		}
		return F / N;
	}

	double frictionforceNormalForce(double F, double u) {
		if (u <= 0) {
			throw std::invalid_argument("The friction coefficient cannot be less than zero.");
		}
		return F / u;
	}
	
	// Work, energy, power
	// Work of force
	double workOfForce(double F, double S, double cos_a) {
		if (cos_a == 0 || F <= 0 || S <= 0) {
			throw std::invalid_argument("cos a is not zero, the force or path must be greater than 0");
		}
		return F * S * std::cos(cos_a);
	}

	double workOfForcePower(double A, double S, double cos_a) {
		if (S <= 0 || cos_a == 0) {
			throw std::invalid_argument("cos a is not zero, the path must be greater than 0");
		}
		return A / (S * std::cos(cos_a));
	}

	double workOfForcePath(double A, double F, double cos_a) {
		if (F <= 0 || cos_a == 0) {
			throw std::invalid_argument("cos a is not zero, the path must be greater than 0");
		}
		return A / (F * std::cos(cos_a));
	}

	double workOfForceCos_a(double A, double F, double S) {
		if (F <= 0 || S <= 0) {
			throw std::invalid_argument("The force or path must be greater than 0");
		}
		return A / (F * S);
	}

	// Power
	double power(double A, double t) {
		if (t <= 0 || A < 0) {
			throw std::invalid_argument("Time cannot be less than zero and work cannot be less than zero");
		}
		return A / t;
	}

	double powerWork(double P, double t) {
		if (t <= 0) {
			throw std::invalid_argument("Time cannot be less than zero");
		}
		return P * t;
	}

	double powerTime(double A, double P) {
		if (A < 0) {
			throw std::invalid_argument("Work cannot be less than zero");
		}
		return A / P;
	}

	// Electrodynamics
	double electrodynamicsCurrentStrength(double U, double R) {
		if (U < 0 || R <= 0) {
			throw std::invalid_argument("The voltage must be greater than zero and the resistance must be greater than zero");
		}
		return U / R;
	}

	double electrodynamicsTension(double I, double R) {
		if (I < 0 || R <= 0) {
			throw std::invalid_argument("The current must be greater than zero and the resistance must be greater than zero");
		}
		return I * R;
	}

	double electrodynamicsResistance(double U, double I) {
		if (U < 0 || I < 0) {
			throw std::invalid_argument("Current and voltage must be more than equal to zero");
		}
		return U / I;
	}

	// Thermodynamics
	double thermodynamicsHeat(double c, double m, double del_T) {
		if (m <= 0 || c <= 0 || del_T == 0) {
			throw std::invalid_argument("The mass and specific heat capacity must be greater than zero and the change in temperature must not equal zero");
		}
		return c * m * del_T;
	}

	double thermodynamicsSpecificHeat(double Q, double m, double del_T) {
		if (m <= 0 || del_T == 0) {
			throw std::invalid_argument("The mass capacity must be greater than zero and the change in temperature must not equal zero");
		}
		return Q / (m * del_T);
	}

	double thermodynamicsMass(double Q, double c, double del_T) {
		if (c <= 0 || del_T == 0) {
			throw std::invalid_argument("The specific heat capacity must be greater than zero and the change in temperature must not equal zero");
		}
		return Q / (c * del_T);
	}

	double thermodynamicsDel_T(double Q, double c, double m) {
		if (m <= 0 || c <= 0) {
			throw std::invalid_argument("The mass and specific heat capacity must be greater than zero");
		}
		return Q / (c * m);
	}

	// Mechanical vibrations and waves
	double formulaForThePeriodOfOscillationOfaPendulum(double l) {
		if (l <= 0) {
			throw std::invalid_argument("The length of the pendulum must not be less than zero.");
		}
		return ((2 * M_PI) * (sqrt(l / Physics_constants::FREE_FALL_ACCELERATION_g_earth)));
	}

	double formulaForThePeriodOfOscillationOfaPendulumLength(double T) {
		if (T <= 0) {
			throw std::invalid_argument("The oscillation period of the pendulum must not be less than zero.");
		}
		return (pow(T, 2) * Physics_constants::FREE_FALL_ACCELERATION_g_earth) / (4 * pow(M_PI, 2));
	}

	// Wavelength formula
	double wavelengthFormula(double u, double f) {
		if (u <= 0 || f <= 0) {
			throw std::invalid_argument("The wave speed must be greater than zero, the wave frequency must be greater than zero.");
		}
		return u / f;
	}

	double wavelengthFormulaWaveSpeed(double L, double f) {
		if (f <= 0) {
			throw std::invalid_argument("The wave frequency must be greater than zero.");
		}
		return L * f;
	}

	double wavelengthFormulaWaveFrequency(double u, double L) {
		if (u <= 0) {
			throw std::invalid_argument("The wave speed must be greater than zero.");
		}
		return u / L;
	}

	// Lens formula (thin lens)
	double lensFormulaThinLens(double d, double f) {
		if (d <= 0 || f <= 0) {
			throw std::invalid_argument("Distance to object must be greater than zero, distance to image must be greater than zero.");
		}
		return (1 / ((1 / d) + (1 / f)));
	}

	double lensFormulaObjectDistance(double F, double f) {
		if (F <= 0 || f <= 0) {
			throw std::invalid_argument("Focal length should be greater than zero, image distance should be greater than zero.");
		}
		return (1 / ((1 / F) + (1 / f)));
	}

	double lensFormulaImageDistance(double F, double d) {
		if (F <= 0 || d <= 0) {
			throw std::invalid_argument("Focal length must be greater than zero, subject distance must be greater than zero.");
		}
		return (1 / ((1 / F) + (1 / d)));
	}
}