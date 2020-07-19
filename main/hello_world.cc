#include <iostream>
#include <string>
#include <vector>

#include "absl/strings/str_join.h"
#include "retSquare.h"

int main() {
  std::vector<std::string> v = {"foo", "bar", "baz"};
  std::string s = absl::StrJoin(v, "-");

  std::cout << "Joined string: " << s << "\n";
  
  std::cout << "The square of 3 is  " << retSquare(3) << "\n";

  return 0;
}
