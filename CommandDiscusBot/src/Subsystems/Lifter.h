#ifndef Lifter_H
#define Lifter_H

#include "WPILib.h"
#include "RobotMap.h"


class Lifter: public Subsystem
{
private:
	CANTalon lifterMotor;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Lifter();
	void InitDefaultCommand();
	void moveLifter(float power);
};
#endif
