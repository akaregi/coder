#include <iostream>

int main() {
  constexpr auto seconds = 365 * 24 * 60 * 60;

  std::cout << seconds * 1  << "\n";
  std::cout << seconds * 2  << "\n";
  std::cout << seconds * 5  << "\n";
  std::cout << seconds * 10 << "\n";
}
