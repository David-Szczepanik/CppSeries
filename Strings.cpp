#include <iostream>
#include <string>

void PrintString(const std::string& string) {
  std::cout << string << std::endl;
}

void Strings() {
  const char* name = "David";
  char name2[6] = {'D', 'a', 'v', 'i', 'd', 0}; //'\0'

  std::cout << name2 << std::endl;
  std::cout << name << std::endl;
  PrintString(name);

  std::string name3 = "Hello";
  name3 += " David!";

  std::cout << name3.size() << std::endl;
  std::cout << name3 << std::endl;

  std::string name4 = std::string("Hello") + " David!";
  bool contains = name4.find("vi") != std::string::npos;
  std::cout << name4 << '\n' << contains << std::endl;
}
