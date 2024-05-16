#include <iostream>
#include <cstring>

#define LOG(x) std::cout << x << std::endl

void Pointers() {
  // int var = 8;
  // int* ptr = &var;  //get var address
  // *ptr = 10;        //access ptr and change to 10
  // LOG(var);

  char* buffer = new char[8];
  memset(buffer, 0, 8);

  char** ptr = &buffer;

  delete[] buffer;
  // std::cin.get();
}
