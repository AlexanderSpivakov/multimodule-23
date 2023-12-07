#ifndef STRUCTS
#define STRUCTS

#include <string>

#ifdef _WIN32
struct __declspec(dllexport) Coords {
#else
struct Coords {
#endif
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

#endif STRUCTS
