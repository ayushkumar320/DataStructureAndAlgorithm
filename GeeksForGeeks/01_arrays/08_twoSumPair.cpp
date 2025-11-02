#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getPairs(vector<int> &nums) {
  unordered_set<int> seen;
  set<pair<int, int>> uniquePairs; // to avoid duplicate pairs like [-1,1] and [1,-1]

  for (int num : nums) {
    int target = -num;
    if (seen.find(target) != seen.end()) {
      uniquePairs.insert({min(num, target), max(num, target)});
    }
    seen.insert(num);
  }

  vector<vector<int>> result;
  for (auto &p : uniquePairs) {
    result.push_back({p.first, p.second});
  }
  return result;
}

int main() {
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> res = getPairs(nums);

  for (auto &pair : res) {
    cout << "[" << pair[0] << ", " << pair[1] << "]\n";
  }

  return 0;
}
