#build the project and run the app
mkdir build
cmake -S Source -B build
cmake --build build --config=Debug
cd build/bin/Debug
./demoapplication JohnDow 44