#pragma once

#include <iostream>
#include "structs.h"

void PrintStructTest(const Test& test) {
  std::cout << test.identifier << '\t';
  std::cout << test.classOfUnit << '\t';
  std::cout << test.group << '\t';
  test.coordinates.Print();
  std::cout << std::endl;
}
