#include "ControlShooter.h"
#include "Subsystems/Shooter.h"

ControlShooter::ControlShooter()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Shooter);
}

// Called just before this Command runs the first time
void ControlShooter::Initialize()
{
	wheelOutput = new bool;
	wheelPInput = new bool;

}

// Called repeatedly when this Command is scheduled to run
void ControlShooter::Execute()
{
	if (toggle(stick->GetRawButton(2), wheelOutput, wheelPInput))
		shooter.get()->FlyWheelOn();
	else
		shooter.get()->FlyWheelOff();

	if (stick->GetRawButton(1))
		shooterPneumatic->Set(DoubleSolenoid::kReverse);
	else
		shooterPneumatic->Set(DoubleSolenoid::kForward);
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
