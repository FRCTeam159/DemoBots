#ifndef ControlShooter_H
#define ControlShooter_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlShooter: public CommandBase
{
private:
	double shooterpos;
	bool *wheelOutput;
	bool *wheelPInput;

	bool toggle(bool input, bool* loutput, bool* pinput) {
		if (input && !(*pinput)) {
			(*loutput) = !(*loutput);
			(*pinput) = input;
			return (*loutput);
		} else {
			(*pinput) = input;
			return (*loutput);
		}
	}

public:
	ControlShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
