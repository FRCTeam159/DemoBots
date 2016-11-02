#include "Lifter.h"
#include "../RobotMap.h"
#include "Commands/ControlLifter.h"
Lifter::Lifter() :
		Subsystem("lifter"), lifterMotor(LIFT)
{

}

void Lifter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new ControlLifter());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
