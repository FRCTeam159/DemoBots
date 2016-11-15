#ifndef ControlShooter_H
#define ControlShooter_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlShooter: public CommandBase
{
private:
	double shooterpos;
public:
	ControlShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
