#include <iostream>


void Arrays() {
  //CREATED ON STACK - faster than heap because of jumping arround
  static const int exampleSize = 5; //TODO: What's constexpr?
  int example[exampleSize]; //Integer pointer to block of memory with 5 integers
  int* ptr = example;

  // CREATED IN HEAP
  // alive until destroyed
  int* another = new int[exampleSize];

  for (int i = 0; i < exampleSize; i++) {
    example[i] = 2;
    another[i] = 3;
  }

  //Not good practise
  int count = sizeof(example) / sizeof(int);
  std::cout << "Count of example array is: " << count << std::endl;

  //same
  example[2] = 5;
  *(ptr + 2) = 6;

  //same as
  //example[2] = 7;
  *(int*)((char*)ptr + 8) = 7;
  // char = 1byte, then you have to add + 8bytes
  //because you want to write an integer = 4bytes
  //cast back into integer pointer = (int*) and dereference (first *)


  delete[] another;

  std::cout << example[0] << std::endl;
  std::cout << example << std::endl;
}
