#pragma once
enum class ActivityName 
{
	build,
	move,
	attack,
	chill,
	craft,
	collect,
	weed,
	castSpell,
	findStick
};

class Activity
{
	int time;
	ActivityName name;
public:
	Activity();
	void ChangeCell();
	void Execute();
};

