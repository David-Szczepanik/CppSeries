#include <iostream>

int multiplication(int n) {
  //Bit shifting
  // return n << 1;
  __asm__("shl %edi\nmov %edi,%eax\nret\n");
  // return n * 2;
}


void Multiplication() {
  std::cout << multiplication(2) << "\n";
  std::cout << multiplication(3) << "\n";
}
