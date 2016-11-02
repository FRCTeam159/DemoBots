#include "CommandBase.h"
#include "Subsystems/DriveTrain.h"
#include "Commands/Scheduler.h"
#include "Subsystems/Shooter.h"
#include "WPILib.h"

// Initialize a single static instance of all of your subsystems to NULL
std::shared_ptr<DriveTrain> CommandBase::drivetrain;
std::unique_ptr<OI> CommandBase::oi;
std::shared_ptr<Shooter> CommandBase::shooter;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drivetrain.reset(new DriveTrain());
	shooter.reset (new Shooter());

	oi.reset(new OI());
}
