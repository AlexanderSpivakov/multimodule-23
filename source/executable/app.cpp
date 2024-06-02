#include "speaker.h"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <name> <age>" << std::endl;
        return 1;
    }
    LogNameAge(argv[1], argv[2]);
    return 0;
}
