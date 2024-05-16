#include <iostream>

#define LOG(x) std::cout << x << std::endl

//Pointer
void Increment(int* value) {
  (*value)++; //(dereference first) and then increment
}

//Reference
void IncrementByReference(int& value) {
  value++;
}

void References() {
  // int a = 5;
  // int& ref = a;
  // ref = 2;

  int a = 5;
  Increment(&a); //passing memory address of a which is 5
  IncrementByReference(a);
  LOG(a);


  int b = 5;
  int c = 8;

  int* ref = &b;
  *ref = 2; // b = 2
  ref = &c;
  *ref = 1; //c = 1

  LOG(b);
  LOG(c);
}
