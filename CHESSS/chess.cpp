#include <iostream>
#include "Coordinates.h"
#include "BasePiece.h"
#include "Color.h"
#include "Signs.h"
#include "Cell.h"
#include "Board.h"
#include "ChessPiece.h"
#include "Queens.h"

int main()
{
    Queens* q = new Queens(8);

    q->FindAllSolutions(0);

    return 1;
}

