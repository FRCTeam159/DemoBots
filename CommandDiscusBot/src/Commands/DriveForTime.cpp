#include "Commands/DriveForTime.h"
#include "WPILib.h"
#include "RobotMap.h"
#include "Subsystems/DriveTrain.h"

DriveForTime::DriveForTime(double t, double s) : CommandBase("DriveTrain")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(drivetrain.get());
	time = t;
	speed = s;
}

// Called just before this Command runs the first time
void DriveForTime::Initialize()
{
	targetTime = Timer::GetFPGATimestamp() + time;
}

// Called repeatedly when this Command is scheduled to run
void DriveForTime::Execute()
{
	drivetrain.get()->Drive(speed, 0, 0);

}

// Make this return true when this Command no longer needs to run execute()
bool DriveForTime::IsFinished()
{
	currentTime = Timer::GetFPGATimestamp();
	if(currentTime >= targetTime)
	{
		return true;
	}
	else
	{
	return false;
	}
}

// Called once after isFinished returns true
void DriveForTime::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForTime::Interrupted()
{

}
