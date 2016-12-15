#include "Subsystems/Lifter.h"
#include "RobotMap.h"
#include <Commands/ControlLifter.h>
#include "WPILib.h"
#define ENCODER_TICKS 64
#define GEAR_REDUCTION 1
#define DIAMETER 3
Lifter::Lifter() :
Subsystem("lifter"), lifterMotor(LIFT)
{
	double ticksPerRev =(double)ENCODER_TICKS * GEAR_REDUCTION;
	lifterMotor.ConfigLimitMode(CANTalon::kLimitMode_SwitchInputsOnly);
	lifterMotor.ConfigFwdLimitSwitchNormallyOpen(false);
	lifterMotor.ConfigRevLimitSwitchNormallyOpen(false);
	lifterMotor.Enable();
	lifterMotor.SetInverted(true);

	//lifterMotor.ConfigEncoderCodesPerRev(ticksPerRev);
	lifterMotor.SetFeedbackDevice(CANTalon::QuadEncoder);
//lifterMotor.EnableControl();
}
void Lifter::moveLifter(float power)
{
	lifterMotor.Set(power);
	cout << lifterMotor.GetPosition() << endl;

};
void Lifter::InitDefaultCommand()
{
	SetDefaultCommand (new ControlLifter());
};

double Lifter::GetPosition()
{
	return lifterMotor.GetPosition();
}
;

void Lifter::Reset() {
//	lifterMotor.Reset();
	//lifterMotor.Enable();
	FoundZero = false;
}

bool Lifter::FindZero() {
	if(FoundZero){
		return true;
	} else {
		lifterMotor.Set(-0.5);
		cout<<"FindZero called"<<endl;
		if(!lifterMotor.IsFwdLimitSwitchClosed()){	// This is lower limit switch
			FoundZero = true;
			lifterMotor.SetPosition(0);
			cout<<"Zero Position Found"<<endl;
			return true;
		}
		return false;
	}
}
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());


// Put methods for controlling this subsystem
// here. Call these from Commands.
