[ ! -d "build" ] && mkdir build
cd build
cmake ..
make -j8