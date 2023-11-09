#ifndef __MC_GAME_MANAGER__
#define __MC_GAME_MANAGER__
#include <iostream>
#include "Teams.h"
#include "Map.h"
#include "Unit.h"
#include <vector>

class GameManager {
	std::vector<Teams> teams;
	std::vector<UnitID> units;
	Map map;
public:
	GameManager();
	
	
};

#endif // __MC_GAME_MANAGER__