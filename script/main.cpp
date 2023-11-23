#include <fstream>
#include <string>
#include <vector>
#include "print.h"

#ifdef _WIN32
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1
#endif

int main() {
  Test intermediateStructure;
  std::vector<Test> testVector;
  char buffer[30];
  std::ifstream in("hello.txt"); // Открываем файл для чтения
  if (in.is_open()) {
    int count = 0;
    std::string line;
    while (std::getline(in, line)) {
      switch (count % 4) {
        case 0:
          intermediateStructure.identifier = std::stoi(line);
          break;
        case 1:
          intermediateStructure.classOfUnit = line;
          break;
        case 2:
          intermediateStructure.group = line;
          break;
        case 3:
          line.copy(buffer, line.length() + 1);
          sscanf(buffer, "%d %d", &intermediateStructure.coordinates.x, &intermediateStructure.coordinates.y);
          testVector.push_back(intermediateStructure);
          break;
      }
      count++;
    }
  }
  in.close();
  for (auto& a : testVector) {
    PrintStructTest(a);
  }
  return 0;
}
