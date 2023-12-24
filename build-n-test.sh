#build the project and run the app
mkdir build
cmake -S Source -B build
cmake --build build --config=Debug
cd build/bin
./demoapplication JohnDow 44