#include<bits/stdc++.h>
inline bool cond_small(const std::string &ref, size_t i) {
  return (ref[i] == ':' || ref[i] == ';') && ref[i+1] == ')';
}

inline bool cond(const std::string &ref, size_t i) {
  return cond_small(ref, i) || 
    ((ref[i] == ':' || ref[i] == ';') && ref[i+1] == '-' && ref[i+2] == ')');
}


int main() {
  std::string buf;
  std::getline(std::cin, buf);
  for (size_t i{0}; i<buf.size()-2; ++i) {
    if (cond(buf, i)) {
      std::cout << i << std::endl;
    }
  }
  // check last
  if (cond_small(buf, buf.size()-2)) {
    std::cout << buf.size()-2 << std::endl;
  }
}
