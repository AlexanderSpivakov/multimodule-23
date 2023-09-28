#ifndef IGAMERULES
#define IGAMERULES

#include <iostream>
#include "Board.h"

class IGameRules
{
public:
	virtual void MovePiece(const std::string& from, const std::string& to) = 0; // move piece from "from" to "to".
};

#endif // !IGAMERULES
