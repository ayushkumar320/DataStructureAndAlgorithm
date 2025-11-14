#include<bits/stdc++.h>
using namespace std;

void normalInsertion(vector<int> &nums) {
  for(int i = 0; i < nums.size(); i++) {
    int j = i;
    while(j > 0 && nums[j-1] > nums[j]) {
      swap(nums[j-1], nums[j]);
      j--;
    }
  }
}

void recursiveInsertion(vector<int> &nums, int i, int n) {
  if (i == n) return;
  int j = i;
  while(j > 0 && nums[j-1] > nums[j]) {
    swap(nums[j-1], nums[j]);
    j--;
  }
  recursiveInsertion(nums, i + 1, n);
}


int main() {
  vector<int> nums = {1, 11, 14, 2, 7, 0, 32, 21};
  // normalInsertion(nums);
  recursiveInsertion(nums, 0, nums.size() - 1);
  for(auto it : nums) {
    cout << it << " ";
  }
  return 0;
}