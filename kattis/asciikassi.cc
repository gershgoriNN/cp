#include<bits/stdc++.h>
int main() {
  size_t N;
  std::cin >> N;
  std::cout << '+';
  for (size_t i{0}; i<N; ++i) {
    std::cout << '-';
  }
  std::cout << '+' << std::endl;

  for (size_t i{0}; i<N; ++i) {
    std::cout << '|';
    for (size_t i{0}; i<N; ++i) {
      std::cout << ' ';
    }
    std::cout << '|' << std::endl;
  }

  std::cout << '+';
  for (size_t i{0}; i<N; ++i) {
    std::cout << '-';
  }
  std::cout << '+' << std::endl;
}
