sudo apt update
sudo apt install -y clang cmake libgtest-dev clang-tidy clang-format
cd /usr/src/gtest
sudo cmake .
sudo make
sudo cp *.a /usr/lib
