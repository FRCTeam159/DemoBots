#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	stick = new Joystick(STICK);
	// Process operator interface input here.
}

Joystick* OI::GetJoystick()
{
	return stick;
}
