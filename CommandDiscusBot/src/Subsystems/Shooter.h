#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "CANTalon.h"


class Shooter: public Subsystem
{
private:
	CANTalon *flywheelMotor;
	DoubleSolenoid *shooterPneumatic;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Shooter();
	void InitDefaultCommand();
	void FlyWheelOn();
	void FlyWheelOff();
	void PistonIn ();
	void PistonOut ();
};

#endif
