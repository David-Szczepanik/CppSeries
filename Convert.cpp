#include <iostream>
#include <string>
#include <sstream>
using std::string;
using std::cout;

void Convert() {
  string s1 = "123";
  int n1 = std::stoi(s1);
  cout << n1 << "\n";

  string s2 = "456";
  std::stringstream convert;
  convert << s2;
  int n2;
  convert >> n2;
  cout << n2 << "\n";


// try {
//         int number = std::stoi(numberStr);
//         std::cout << "The integer value is: " << number << std::endl;
//     } catch (const std::invalid_argument& e) {
//         std::cout << "Invalid input string: " << numberStr << std::endl;
//     } catch (const std::out_of_range& e) {
//         std::cout << "Input string out of range: " << numberStr << std::endl;
//     }

}
