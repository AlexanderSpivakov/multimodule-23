#ifndef __MC_MAP__
#define __MC_MAP__

#include<vector>

class Resourse {

};

class Oil : public Resourse {

};

class Cow : public Resourse {

};

class Vine : public Resourse {

};

class NoResourse : public Resourse {

};

enum class TerrainType {
	Plain,
	Desert,
	Hill,
	Mountain,
	Ocean
};

class Terrain {
public:
	virtual TerrainType GetType() const ;
	virtual double GetTerrainInitiativeFactor() const ;
};

class Plain : public Terrain {

	TerrainType GetType() const override;
	double GetTerrainInitiativeFactor() const;
};

class Desert : public Terrain {
public:
	TerrainType GetType() const override;
	double GetTerrainInitiativeFactor() const;
};

class Hill : public Terrain {
public:
	TerrainType GetType() const override;
	double GetTerrainInitiativeFactor() const;
};

class Mountain : public Terrain {
public:
	TerrainType GetType() const override;
	double GetTerrainInitiativeFactor() const;
};


class Ocean : public Terrain {
public:
	double GetTerrainInitiativeFactor() const;
	TerrainType GetType() const override;
};

class Building {

};

class Mine : public Building {

};

class Fortress : public Building {

};

class NoBuilding : public Building {

};

class CellFilling {
	Resourse resourse;
	Terrain terrain;
	Building building;
	bool IsRoadBuilt;

public:
	Terrain GetTerrain() const;

	Building GetBuilding() const;
	void SetBuilding(Building newBuilding);
};

class Coordinates {
	int x;
	int y;
public:
	Coordinates();
};
class Cell {
	Coordinates coords;
	std::vector<bool> isSeenToPlayer; // если isSeenToPlayer[index] == true, то клетка видна команде с номером index, иначе - не видна
	CellFilling filling;

public:
	Cell();
	TerrainType GetTerrain();
	Coordinates GetCoordinates();

};




class Map {
	std::vector<Cell> map;
public:
	Map();
	Map(int n);
};

#endif // __MC_MAP__
