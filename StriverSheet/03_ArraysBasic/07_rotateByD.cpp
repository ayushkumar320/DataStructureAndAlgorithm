#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
  vector<int> left;
  for (int i = 0; i < k; i++) {
    left.emplace_back(nums[i]);
  }
  int i = 0;
  for (int j = k; j < nums.size(); j++) {
    nums[i] = nums[j];
    i++;
  }
  int l = 0;
  for (; i < nums.size(); i++) {
    nums[i] = left[l];
    l++;
  }
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  rotate(nums, 3);
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  return 0;
}