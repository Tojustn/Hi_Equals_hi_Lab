#include <iostream>
#include <string>

#include "src/strcmp.hpp"

int main() {
  std::string str1{"main"};
  std::string str2{"Main"};

  int result = strcmp_case_insensitive(str1, str2);
  std::cout << "Comparison result: " << result << std::endl;
}
