#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("lifter"), lifterMotor(0)
{

}

void Lifter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
