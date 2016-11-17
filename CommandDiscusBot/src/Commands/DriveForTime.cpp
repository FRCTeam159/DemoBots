#include "DriveForTime.h"
#include "WPILib.h"
#include "../RobotMap.h"
#include "Subsystems/DriveTrain.h"

DriveForTime::DriveForTime(time, speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(DriveTrain);
	drive = new RobotDrive(&frontLeft, &backLeft, &frontRight, &backRight);
}

// Called just before this Command runs the first time
void DriveForTime::Initialize()
{
	targetTime = Timer::GetFPGATimestamp() + time;

}

// Called repeatedly when this Command is scheduled to run
void DriveForTime::Execute()
{
	currentTime = Timer::GetFPGATimestamp();
	if(currentTime >= targetTime){
		drive->MecanumDrive_Cartesian(0,0,0);
		IsFinished(true);
	} else {
		drive->MecanumDrive_Cartesian(0, speed, 0);
	}

}

// Make this return true when this Command no longer needs to run execute()
bool DriveForTime::IsFinished()
{
	return false;
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
