#ifndef __MC_UNIT__
#define __MC_UNIT__

#include <memory>
#include "Activity.h"
#include "Teams.h"



class Unit {
	int InitiativePoints;
	int HitPoints;
	Activity currentActivity;
public:
	Unit();
};

class Worker : public Unit {
	int InitiativePoints = 3;
	int HitPoints = 1;
	Activity currentActivity = None();
};

class Warrior : public Unit {
	int InitiativePoints = 3;
	int HitPoints = 100;
	Activity currentActivity = None();
};

class Settler : public Unit {
	int InitiativePoints = 3;
	int HitPoints = 1;
	Activity currentActivity = None();
};
class UnitID {
public:
	std::shared_ptr<Unit> unit_ptr;
	Teams unitTeam;

	UnitID(std::shared_ptr<Unit> unit, Teams team) :
		unit_ptr(unit), unitTeam(team) {}

	UnitID();
};
#endif // __MC_UNIT__