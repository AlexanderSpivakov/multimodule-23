#include <iostream>
#include "structs.h"

Coords::Coords()
    : x(0), y(0) {}

Coords::Coords(const Coords& c)
    : x(c.x), y(c.y) {}

Coords::~Coords() = default;

void Coords::Print() const {
  std::cout << x << '\t' << y;
}
