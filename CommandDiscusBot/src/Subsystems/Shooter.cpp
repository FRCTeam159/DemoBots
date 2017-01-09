#include "Shooter.h"
#include "RobotMap.h"
#include "Commands/ControlShooter.h"
#include "Subsystems/Shooter.h"


Shooter::Shooter() :
		Subsystem("Shooter")
{
	flywheelMotor = new CANTalon(SHOOTER);
	shooterPneumatic = new DoubleSolenoid(7,0,1);
}

void Shooter::InitDefaultCommand()
{
	SetDefaultCommand(new ControlShooter());
}

void Shooter::FlyWheelOn()
{
	flywheelMotor->Set(-1);
}

void Shooter::FlyWheelOff()
{
	flywheelMotor->Set(0);
}

void Shooter::PistonIn()
{
shooterPneumatic->Set(DoubleSolenoid::kReverse);
}

void Shooter::PistonOut()
{
shooterPneumatic->Set(DoubleSolenoid::kForward);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

