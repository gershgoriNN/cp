#include<bits/stdc++.h>
int main() {
  std::string buf;
  unsigned long long x,y;
  while (std::getline(std::cin, buf)) {
    std::istringstream iss(buf);
    iss >> x >> y;
    std::cout << (x>y ? x-y : y-x) << std::endl;
  }
}
