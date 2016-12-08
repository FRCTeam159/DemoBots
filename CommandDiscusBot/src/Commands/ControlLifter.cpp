#include "ControlLifter.h"
#include "Subsystems/Lifter.h"

ControlLifter::ControlLifter()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(lifter.get());
	//Requires(oi.get());
}

// Called just before this Command runs the first time
void ControlLifter::Initialize()
{
std::cout<<"Control Lifter Initialize"<<std::endl;
}

// Called repeatedly when this Command is scheduled to run
void ControlLifter::Execute()
{
	Joystick* stick=oi->GetJoystick();
	if (stick->GetRawButton(LIFTERUPBUTTON))
	{
		lifter.get()->moveLifter(LIFTERUPSPEED);
	}
	else if (stick->GetRawButton(LIFTERDOWNBUTTON))
	{
		lifter.get()->moveLifter(LIFTERDOWNSPEED);
	}
	else
	{
		lifter.get()->moveLifter(0);
	}
	std::cout<<"position ="<< lifter.get()->GetPosition()<<std::endl;
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
