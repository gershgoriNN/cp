#include<bits/stdc++.h>
int main() {
  int N;
  std::string buf;
  std::getline(std::cin, buf);
  std::getline(std::cin, buf);
  if (std::isupper(buf[0])) {
    std::cout << buf[0];
  }
  for (size_t i{1}; i<buf.size(); ++i) {
    if (buf[i-1] == ' ' && std::isupper(buf[i])) {
      std::cout << buf[i];
    }
  }
  std::cout << std::endl;
}
