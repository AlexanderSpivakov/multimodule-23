#include "Map.h"
Coordinates::Coordinates()
{
	x = 0; y = 0;
}
Cell::Cell() {
	coords = Coordinates();
}
Map::Map(int n) {
	for (int x = 0; x != n; ++x)
	{
		map[x];
	}
}
Map::Map() {
	for (int x = 0; x != 10; ++x)
	{
		map[x]=Cell();
	}
}
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
Coordinates Cell::GetCoordinates()
{
	return Coordinates();
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
