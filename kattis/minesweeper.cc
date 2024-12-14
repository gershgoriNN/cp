#include<bits/stdc++.h>
int main() {
  int y, x, k;
  std::cin >> y >> x >> k;
  std::vector<std::vector<bool>> xss(y, std::vector<bool>(x, false));
  while (k--) {
    std::cin >> y >> x;
    xss[y-1][x-1] = true;
  }
  for (const auto line : xss) {
    for (const bool elem : line) {
      std::cout << (elem ? '*' : '.');
    }
    std::cout << std::endl;
  }
}
