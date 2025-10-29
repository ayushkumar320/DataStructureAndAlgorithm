#include <bits/stdc++.h>
using namespace std;

void rotateRightByD(vector<int>& nums, int d) {
  int n = nums.size();
  vector<int> last;
  for (int i = n - d; i < n; i++) {
    last.push_back(nums[i]);
  }
  // We will fill from last
  for (int i = n - d - 1; i >= 0; i--) {
    nums[i+d] = nums[i];
  }

  for (int i = 0; i < d; i++) {
    nums[i] = last[i];
  }
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  rotateRightByD(nums, 3);
  for (auto it : nums) {
    cout << it << " ";
  }
  return 0;
}