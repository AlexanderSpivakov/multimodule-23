#include "Map.h"
TerrainType Plain::GetType() const {
	return TerrainType::Plain;
}
double Plain::GetTerrainInitiativeFactor() const {
	return 1.;
}

double Desert::GetTerrainInitiativeFactor() const {
	return 1.2;
}
TerrainType Desert::GetType() const {
	return TerrainType::Desert;
}

TerrainType Hill::GetType() const{
	return TerrainType::Hill;
}

double Hill::GetTerrainInitiativeFactor() const {
	return 1.5;
}

TerrainType Mountain::GetType() const {
	return TerrainType::Mountain;
}

double Mountain::GetTerrainInitiativeFactor() const {
	return 2.;
}

TerrainType Ocean::GetType() const {
	return TerrainType::Ocean;
}

double Ocean::GetTerrainInitiativeFactor() const {
	return 1.;
}
TerrainType Cell::GetTerrain(){
	return filling.GetTerrain().GetType();
}
Terrain	CellFilling::GetTerrain() const {
	return terrain;
}
Building CellFilling::GetBuilding() const {
	return building;
}
void CellFilling::SetBuilding(Building newBuilding) {
	building = newBuilding;
}