#include <iostream>
#include <string>
#include <cstring>

void StringLiterals() {
  const char name[6] = "David";
  std::cout << strlen(name) << std::endl;

  const char* name2 = "David";
  std::cout << strlen(name2) << std::endl;

  char name3[] = "David";
  std::cout << name3 << std::endl;
  name3[3] = 'a';
  name3[4] = 's';
  std::cout << name3 << std::endl;

  const char* name4 = u8"David"; //1byte per char
  const wchar_t* name5 = L"David"; //2bytes per char
  const char16_t* name6 = u"David"; //2bytes per char
  const char32_t* name7 = U"David"; //4bytes per char

  using namespace std::string_literals;

  std::u32string name0 = U"David"s + U" hello";

  const char* example = R"(Line1
Line2
Line3
Line4)";

  const char* ex = "Line1"
    "Line2\n"
    "Line3\n";
}
