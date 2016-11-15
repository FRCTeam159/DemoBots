#ifndef Lifter_H
#define Lifter_H

#include <CANTalon.h>
#include <Commands/Subsystem.h>

class Lifter: public Subsystem
{
private:
	CANTalon lifterMotor;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:

	void Lifter::moveLifter();
};
#endif
