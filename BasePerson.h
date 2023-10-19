#pragma once
#include <string>
#include <vector>
#include "Activity.h"


class BasePerson {
	int HP;
	std::string CurrentTeam;
	int Speed;
	int InitiativePoints;
	std::vector <Activity> Activitys;
	Activity CurrentActivity;
public:
	BasePerson();
	void ChangeTeam(std::string team);
	void TakeDamage(int damage);
	void TakeHealing(int heal);
	void ChangeActivity();//не надо
};