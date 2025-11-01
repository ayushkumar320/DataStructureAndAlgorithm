// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums) {
  int maxCount = 0;
  int count = 0;
  for(int i = 0; i < nums.size(); i++) {
    if(nums[i] == 1) {
      count++;
      maxCount = max(maxCount, count);
    } else {
      count = 0;
    }
  }
  return maxCount;
}


int main() {
  vector<int> nums = {1, 1, 0, 1, 1, 1, 0};
  int maxCount = findMaxConsecutiveOnes(nums);
  cout << maxCount << endl;
  return 0;
}