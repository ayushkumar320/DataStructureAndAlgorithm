// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map <int, int> preSum;
  vector<int> indices;
  for(int i = 0; i < nums.size(); i++) {
    int need = target - nums[i];
    if(preSum.find(need) != preSum.end()) {
      indices.push_back(preSum[need]);
      indices.push_back(i);
      break;
    } else {
      preSum[nums[i]] = i;
    }
  }
  return indices;
}

int main() {
  vector<int> nums = {2,7,11,15};
  int target = 9;
  vector<int> ind = twoSum(nums, target);
  for(auto it : ind) {
    cout << it << " ";
  }
  return 0;
}