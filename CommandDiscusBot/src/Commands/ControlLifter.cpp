#include "ControlLifter.h"

ControlLifter::ControlLifter()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(lifter);
	Requires(oi);
}

// Called just before this Command runs the first time
void ControlLifter::Initialize()
{
std::cout<<"Control Lifter Intialize"<<std::endl;
}

// Called repeatedly when this Command is scheduled to run
void ControlLifter::Execute()
{
	Joystick* stick=oi->GetJoystick();
	if (stick->GetRawButton(lifterUpButton))
	{
		lifter->moveLifter(lifterUpSpeed);
	}
	else if (stick->GetRawButton(lifterDownButton))
	{
		lifter->moveLifter(lifterDownSpeed);
	}
	else
	{
		lifter->moveLifter(0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ControlLifter::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlLifter::End()
{
std::cout<<"Control Lifter End"<<std::endl;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlLifter::Interrupted()
{

}
