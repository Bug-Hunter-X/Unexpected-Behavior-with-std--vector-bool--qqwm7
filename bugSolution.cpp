#include <iostream>
#include <vector>

int main() {
  // Avoid std::vector<bool>
  std::vector<char> vec(1000); // Use std::vector<char> or other suitable type
  for (int i = 0; i < 1000; ++i) {
    vec[i] = 1; // Store boolean values as 0 or 1
  }

  bool b = vec[500] == 1; // Access as boolean

  std::cout << b << std::endl; // Output: 1

  return 0;
}
