#ifndef COORDINATES
#define COORDINATES

#include <cstdlib>

class Coordinate
{
public:
	Coordinate();
	Coordinate(size_t col, size_t row);
	~Coordinate();

	size_t GetColumn();
	size_t GetRow();

private:
	size_t _col; // board's column
	size_t _row; // board's row
};

#endif