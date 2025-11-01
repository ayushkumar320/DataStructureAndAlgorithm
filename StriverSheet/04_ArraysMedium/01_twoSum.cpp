// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int> &nums, int target) {
  vector<int> indices;
  unordered_map<int, int> mpp;
  for(int i = 0; i < nums.size(); i++) {
    if(mpp.find(target - nums[i]) != mpp.end()) {
      indices.push_back(i);
      indices.push_back(mpp[target - nums[i]]);
      break;
    } else {
      mpp[nums[i]] = i;
    }
  }
  return indices;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  vector<int> index = twoSum(nums, 3);
  for (auto it : index) {
    cout << it << " ";
  }
  return 0;
}