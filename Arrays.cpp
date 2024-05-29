#include <iostream>
#include <vector>
using std::cout;
using std::cin;

void Arrays() {
  //FIXME: Wrong formatting in console
  float monthsArray[6]  = {100, 220, 300, 0, 200, 250};
  float total = 0;
  for (int i = 0; i < 6; i++) {
    // cout << "Enter amount for month " << i + 1 << ": ";
    // cin >> monthsArray[i];
    total += monthsArray[i];
  }

  float average = total / 6;
  float inTwoYears = average * 24;

  cout << "\ntotal = " << total << "\n";
  cout << "average = " << average << "\n";
  cout << "inTwoYears = " << inTwoYears << "\n";


  //----------------------------------------------------------------------------
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
  cout << "\n\nCount of example array is: " << count << "\n";

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


  int nums1[4] = {2, 7, 11, 15};

  std::cout << "\nFor array int nums[4]" << "\n";
  std::cout << sizeof(nums1) << " bytes - Total size\n";
  std::cout << sizeof(nums1[0]) << " bytes - Size of first element\n";

  std::vector<int> nums2 = {2, 7, 11, 15};
  std::cout << "\nFor array vector<int> nums" << "\n";
  std::cout << nums2.size() * size(nums2) << " bytes - Total size\n";
  std::cout << size(nums2) << " bytes - Size of first element";
}
