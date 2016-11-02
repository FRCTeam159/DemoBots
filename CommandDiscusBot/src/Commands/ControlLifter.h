#ifndef ControlLifter_H
#define ControlLifter_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlLifter: public CommandBase
{
public:
	ControlLifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
