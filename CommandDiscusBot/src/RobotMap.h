#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"
using namespace std;
const float LIFTERUPSPEED=.5;
const float LIFTERDOWNSPEED=-.5;
const int LIFTERUPBUTTON=3;
const int LIFTERDOWNBUTTON=4;
const int SHOOTERFLYWHEELBUTTON=2;
/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
const int FRONTLEFT = 1;
const int FRONTRIGHT = 4;
const int BACKLEFT = 2;
const int BACKRIGHT = 3;
const int LIFT = 5;
const int SHOOTER = 6;

const int STICK = 0;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

#endif
