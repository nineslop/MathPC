#pragma once

#ifndef PHYSICS_H
#define PHYSICS_H
#define _USE_MATH_DEFINES

#include <cmath>
#include <string>
#include <stdexcept>

namespace physics {
	//Kinematics Formulas of equal-velocity motion
	double findingTheTravelled_calculate_path(double v, double t);
	double findingTheTravelled_calculate_time(double s, double v);
	double findingTheTravelled_calculate_speed(double s, double t);

	// The formula for the path in equidirectional motion
	double terminal_velocity(double a, double t);
	double pathOfEquidirectionalMotion(double v_zero, double t, double a);
	double v_zeroOfEquidirectionalMotion(double S, double a, double t);
	double accelerationOfEquidirectionalMotion(double S, double v_zero, double t);

	// Equation of the relationship between velocity, acceleration and path
	double equationOfTheRelationshipBetweenVelocity(double v_zero, double a, double S);
	double equationOfTheRelationshipBetweenV_zero(double v, double a, double S);
	double equationOfTheRelationshipBetweenAcceleration(double v, double v_zero, double S);
	double equationOfTheRelationshipBetweenPath(double v, double v_zero, double a);

	// Dynamics Newton's Second Law
	double dynamicsNewtonsSecondLaw(double m, double a);
	double dynamicsNewtonsSecondLawMass(double F, double a);
	double dynamicsNewtonsSecondLawStrong(double F, double m);

	// Friction force
	double frictionforce(double u, double N);
	double frictionforceCoefficientOfFriction(double F, double N);
	double frictionforceNormalForce(double F, double u);

	// Work of force
	double workOfForce(double F, double S, double cos_a);
	double workOfForcePower(double A, double S, double cos_a);
	double workOfForcePath(double A, double F, double cos_a);
	double workOfForceCos_a(double A, double F, double S);

	// Power
	double power(double A, double t);
	double powerWork(double P, double t);
	double powerTime(double A, double P);

	// Electrodynamics
	double electrodynamicsCurrentStrength(double U, double R);
	double electrodynamicsTension(double I, double R);
	double electrodynamicsResistance(double U, double I);

	// Thermodynamics
	double thermodynamicsHeat(double c, double m, double del_T);
	double thermodynamicsSpecificHeat(double Q, double m, double del_T);
	double thermodynamicsMass(double Q, double c, double del_T);
	double thermodynamicsDel_T(double Q, double c, double m);

	// Mechanical vibrations and waves
	double formulaForThePeriodOfOscillationOfaPendulum(double l);
	double formulaForThePeriodOfOscillationOfaPendulumLength(double T);

	// Wavelength formula
	double wavelengthFormula(double u, double f);
	double wavelengthFormulaWaveSpeed(double L, double f);
	double wavelengthFormulaWaveFrequency(double u, double L);

	// Lens formula (thin lens)
	double lensFormulaThinLens(double d, double f);
	double lensFormulaObjectDistance(double F, double f);
	double lensFormulaImageDistance(double F, double d);

	// Electromagnetic field
	double faradaysLaw(double del_F, double del_t);
	double faradaysLawMagneticFluxVariation(double E, double del_t);
	double faradaysLawChangeTime(double del_F, double E);

	// Lorenz's strength
	double lorenzsStrength(double q, double v, double B, double sin_a);
	double lorenzsStrenghtCharge(double F, double v, double B, double sin_a);
	double lorenzsStrenghtChargeRate(double F, double q, double B, double sin_a);
	double lorenzsStrenghtMagneticInduction(double F, double q, double v, double sin_a);
	double lorenzsStrenghtSin_a(double F, double q, double v, double B);

	// Quantum physics photon energy
	double photonEnergy(double v);
	double photonEnergyRadiationFrequency(double E);

	// The de Broglie equation
	double theDeBroglieEquation(double p);
	double theDeBroglieEquationParticleMomentum(double L);
}

#endif