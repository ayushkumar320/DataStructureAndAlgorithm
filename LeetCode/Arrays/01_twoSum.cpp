// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> mpp;
  vector<int> indices;
  for(int i = 0; i < nums.size(); i++) {
    if(mpp.find(target - nums[i]) != mppp.end()) {
      indices.emplace_back(i);
      indices.emplace_back(mpp[target - nums[i]]);
      break;
    } else {
      mpp[nums[i]] = i;
    }
  }
  return indices;
}