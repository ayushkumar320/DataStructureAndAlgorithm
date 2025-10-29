#include<bits/stdc++.h>
using namespace std;

void rotateRightByOne(vector<int> &nums) {
  int last = nums[nums.size()-1];
  for(int i = nums.size() - 1 ; i > 0; i--) {
    nums[i] = nums[i-1];
  }
  nums[0] = last;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  rotateRightByOne(nums);
  for(auto it : nums) {
    cout << it << " ";
  }
  return 0;
}