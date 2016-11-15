#include "Shooter.h"
#include "../RobotMap.h"
#include "Commands/ControlShooter.h"
#include "Subsystems/Shooter.h"

Shooter::Shooter() :
		Subsystem("Shooter")
{
	flywheelMotor = new CANTalon(FLYWHEELMOTORID);
}

void Shooter::InitDefaultCommand()
{
SetDefaultCommand(new ControlShooter());

	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

