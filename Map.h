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
	virtual TerrainType GetType() const {};
	virtual double GetTerrainInitiativeFactor() const {};
};

class Plain : public Terrain {

	TerrainType GetType() const override;
	double GetTerrainInitiativeFactor() const;
/*public:
	TerrainType GetType() const override {
		return TerrainType::Plain;
	}
	double GetTerrainInitiativeFactor() const {
		return 1.;
	}
	*/
};

class Desert : public Terrain {
public:
	TerrainType GetType() const override;
	double GetTerrainInitiativeFactor() const;
	/*
	TerrainType GetType() const override {
		return TerrainType::Desert;
	}
	double GetTerrainInitiativeFactor() const {
		return 1.2;
	}
	*/
};

class Hill : public Terrain {
public:
	TerrainType GetType() const override;
	double GetTerrainInitiativeFactor() const;
	/*
	TerrainType GetType() const override {
		return TerrainType::Hill;
	}
	double GetTerrainInitiativeFactor() const {
		return 1.5;
	}
	*/
};

class Mountain : public Terrain {
public:
	TerrainType GetType() const override;
	double GetTerrainInitiativeFactor() const;
	/*
	TerrainType GetType() const override {
		return TerrainType::Mountain;
	}
	double GetTerrainInitiativeFactor() const {
		return 2.;
	}
	*/
};


class Ocean : public Terrain {
public:
	double GetTerrainInitiativeFactor() const;
	TerrainType GetType() const override;
	/*
	TerrainType GetType() const override {
		return TerrainType::Ocean;
	}
	double GetTerrainInitiativeFactor() const {
		return 1.;
	}
	*/
};

class Building {

};

class Mine : public Building {

};

class Fortress : public Building {

};

class NoBuilding : public Building {

};

class Cell {
	Coordinates coords;
	CellFilling filling;

	TerrainType GetTerrain();
	/* {
		return filling.GetTerrain().GetType();
	}*/
};

class Coordinates {
	int x;
	int y;
};

class CellFilling {
	Resourse resourse;
	Terrain terrain;
	Building building;
	bool IsRoadBuilt;

public:
	Terrain GetTerrain() const; 
	/* {
		return terrain;
	}*/

	Building GetBuilding() const; 
	/*{
		return building;
	}*/
	void SetBuilding( Building newBuilding ) 
	/* {
		building = newBuilding;
	}*/
};

class Map {
	std::vector<Cell> map;
};

#endif // __MC_MAP__
