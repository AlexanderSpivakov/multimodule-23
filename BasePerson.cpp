#include "BasePerson.h"

BasePerson::BasePerson()
{
	HP = 100;
	CurrentTeam = "Barbarian";
	//activiti=chill;
	InitiativePoints = 2;
}

void BasePerson::ChangeTeam(std::string team)
{
	CurrentTeam = team;
}

void BasePerson::TakeDamage(int damage)
{
	HP -= damage;
}

void BasePerson::TakeHealing(int heal)
{
	HP += heal;
	if (HP > 100)
		HP = 100;
}

void BasePerson::ChangeActivity(/*activity*/)
{
	//change activity;
}

