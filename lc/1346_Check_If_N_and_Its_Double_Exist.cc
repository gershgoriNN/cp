#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      std::unordered_set<int> visited;
      for (int x: arr) {
        if ((x%2==0) && visited.find(x/2) != visited.end()) return true;
        if (visited.find(x*2) != visited.end()) return true;
        visited.insert(x);
      }
      return false;
    }
};
