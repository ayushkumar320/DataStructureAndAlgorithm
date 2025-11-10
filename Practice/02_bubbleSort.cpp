#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& nums) {
  for (int i = 0; i < nums.size() - 1; i++) {
    int didSwap = 0;
    for (int j = 0; j < nums.size() - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        swap(nums[j], nums[j + 1]);
        didSwap = 1;
      }
    }
    if (!didSwap) {
      break;
    }
  }
}

int main() {
  vector<int> nums = {1, 3, 5, 2, 11, 52, 12, 14, 7};
  bubble_sort(nums);
  for (auto it : nums) {
    cout << it << " ";
  }
  return 0;
}