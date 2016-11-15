#include "Lifter.h"
#include "RobotMap.h"
#include <Commands/Subsystem.h>
#include "WPILib.h"


Lifter::Lifter() :
Subsystem("lifter"), lifterMotor(LIFT)
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
	};
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
