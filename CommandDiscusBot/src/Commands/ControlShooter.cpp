#include "ControlShooter.h"
#include "Subsystems/Shooter.h"

ControlShooter::ControlShooter()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(shooter.get());
	wheelOutput = new bool;
	wheelPInput = new bool;
}

// Called just before this Command runs the first time
void ControlShooter::Initialize()
{
	*wheelPInput = false;
	*wheelOutput = false;
}

// Called repeatedly when this Command is scheduled to run
void ControlShooter::Execute()
{
	Joystick *stick=CommandBase::oi.get()->GetJoystick();
	if (toggle(stick->GetRawButton(SHOOTERFLYWHEELBUTTON), wheelOutput, wheelPInput))
		shooter.get()->FlyWheelOn();
	else
		shooter.get()->FlyWheelOff();


	if (stick->GetRawButton(1))
		shooter.get()->PistonIn();
	else
		shooter.get()->PistonOut();
}

// Make this return true when this Command no longer needs to run execute()
bool ControlShooter::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlShooter::Interrupted()
{

}
