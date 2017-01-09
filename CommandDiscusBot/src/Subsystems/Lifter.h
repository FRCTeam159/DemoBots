#ifndef Lifter_H
#define Lifter_H

#include "WPILib.h"
#include "RobotMap.h"
#include "CANTalon.h"

class Lifter: public Subsystem
{
private:
	CANTalon lifterMotor;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	bool FoundZero = false;
public:
	Lifter();
	void InitDefaultCommand();
	void moveLifter(float power);
	double GetPosition();
	void Reset();
	bool FindZero();
};
#endif
