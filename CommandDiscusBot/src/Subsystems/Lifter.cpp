#include "Lifter.h"
#include "../RobotMap.h"
#include <Commands/Subsystem.h>
#include "WPILib.h"

int lifterUpSpeed(2);
int lifterDownSpeed(3);
int lifterUpButton(3);
int lifterDownButton(4);

Lifter::Lifter() :
Subsystem("lifter"), lifterMotor(0)
{

}

void Lifter::InitDefaultCommand()
{
		if (stick->GetRawButton(lifterUpButton))
		{
			lifterMotor->set(lifterDownSpeed);
		}
		else if (stick->GetRawButton(lifterDownButton))
		{
			lifterMotor->set(lifterUpSpeed);
		}
		else
		{
			lifterMotor->set(0);
		}
	}
}
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());

	//void moveLifter();
//		if (stick->GetRawButton(lifterUpButton))
//		{
//			lifterMotor->set(lifterDownSpeed);
//		}
//		else if (stick->GetRawButton(lifterDownButton))
//		{
//			lifterMotor->set(lifterUpSpeed);
//		}
//		else
//		{
//			lifterMotor->set(0);
//		}
//	}



// Put methods for controlling this subsystem
// here. Call these from Commands.
