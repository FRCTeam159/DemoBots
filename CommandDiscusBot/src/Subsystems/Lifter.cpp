#include "Lifter.h"
#include "RobotMap.h"
#include <Commands/Subsystem.h>
#include "WPILib.h"


Lifter::Lifter() :
Subsystem("lifter"), lifterMotor(LIFT)
{

}
void Lifter::moveLifter(float power)
{
	lifterMotor.Set(power);

};
void Lifter::InitDefaultCommand()
{
	SetDefaultCommand (new ControlLifter());
};
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());


// Put methods for controlling this subsystem
// here. Call these from Commands.
