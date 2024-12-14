#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
  string buf;
  getline(cin, buf);
  int left, right;
  bool left_filled{false};
  int cnt{0};
  size_t begin_of_digit{0};
  for (size_t i{0}; i<buf.size(); ++i) {
    if (isdigit(buf[i])) {
      // we are good
    } else if (buf[i] == '-') {
      // left is done
      left = stoi(&buf[begin_of_digit]);
      left_filled = true;
      begin_of_digit = i+1;
    } else if (buf[i] == ';') {
      if (left_filled) {
        right = stoi(&buf[begin_of_digit]);
      }
      cnt += left_filled ? right-left+1 : 1;
      left_filled = false;
      begin_of_digit = i+1;
    }
  }
  if (left_filled) {
    right = stoi(&buf[begin_of_digit]);
  }
  cnt += left_filled ? right-left+1 : 1;
  cout << cnt << endl;
}
