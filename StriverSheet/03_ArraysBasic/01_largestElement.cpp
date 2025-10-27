// Given an array of integers nums, return the value of the largest element in the array

#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &nums) {
  int largest = nums[0];
  // for(auto it: nums) {
  //   if (largest < it) {
  //     largest = it;
  //   }
  // }
  for(int i = 0 ; i < nums.size(); i++) {
    if (largest < nums[i]) {
      largest = nums[i];
    }
  }
  return largest;
}

int main() {
  vector<int> nums = {15, 11, 23, 44, 65};
  int largest = largestElement(nums);
  cout << largest;
  return 0;
}