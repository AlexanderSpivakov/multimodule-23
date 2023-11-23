#pragma once

#include <string>

struct __declspec(dllexport) Coords {
  int x;
  int y;

  Coords();

  Coords(const Coords&);

  ~Coords();

  void Print() const;
};

struct Test {
  int identifier;
  std::string classOfUnit;
  std::string group;
  Coords coordinates;
};
