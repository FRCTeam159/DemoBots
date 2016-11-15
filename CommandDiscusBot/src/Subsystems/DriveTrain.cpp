#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain"),
		frontLeft(FRONTLEFT),
		frontRight(FRONTRIGHT),
		backLeft(BACKLEFT),
		backRight(BACKRIGHT)
{
	drive = new RobotDrive(&frontLeft, &backLeft, &frontRight, &backRight);
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
