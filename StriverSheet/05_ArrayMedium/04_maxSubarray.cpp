// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int sum = 0;
  unordered_map<int, int> sumCheck;
  for(int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    sumCheck[i] = sum;
  }
  int maxSum = sumCheck[0];
  for(auto it : sumCheck) {
    if(it.second > maxSum) {
      maxSum = it.second;
    }
  }
  return maxSum;
}

int main() {
  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  int out = maxSubArray(nums);
  cout << out << endl;
  return 0;
}