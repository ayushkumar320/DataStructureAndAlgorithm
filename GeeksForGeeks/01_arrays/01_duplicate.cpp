// Given an integer array arr[] and an integer k, determine whether there exist two indices i and j such that arr[i] == arr[j] and |i - j| ≤ k. If such a pair exists, return 'Yes', otherwise return 'No'.
#include<bits/stdc++.h>
using namespace std;

// Time complexity - O(n^2)
bool checkDuplicate(vector<int> &nums, int k) {
  for(int i = 0; i < nums.size(); i++) {
    for(int j = i + 1; j < nums.size(); j++) {
      if(nums[i] == nums[j] && abs(i - j) <= k) {
        return true;
      }
    }
  }
  return false;
}

// Betetr complexity using hash maps
bool checkDuplicateOptimized(vector<int> &nums, int k) {
  unordered_map<int, int> indexMap; // Map to store the last index of each element
  for(int i = 0; i < nums.size(); i++) {
    if(indexMap.find(nums[i]) != indexMap.end()) {
      // Element found in map, check the index difference
      if(i - indexMap[nums[i]] <= k) {
        return true;
      }
    }
    // Update the last index of the element
    indexMap[nums[i]] = i;
  }
  return false;

int main() {
  vector<int> nums = {1, 2, 3, 1, 2, 3};
  int k = 2;
  bool ans = checkDuplicate(nums, k);
  ans ? cout << "Yes" : cout << "No";
  return 0;
}