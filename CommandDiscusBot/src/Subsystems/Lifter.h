#ifndef Lifter_H
#define Lifter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
	CANTalon lifterMotor;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Lifter();
	void InitDefaultCommand();
};

#endif
