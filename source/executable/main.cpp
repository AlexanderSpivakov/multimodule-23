#include <iostream>

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <name> <age>" << std::endl;
        return 1;
    }
    std::cout << "Hi, my name is " << argv[1] << " and I'm " << argv[2] << " years old." << std::endl;
    return 0;
}
