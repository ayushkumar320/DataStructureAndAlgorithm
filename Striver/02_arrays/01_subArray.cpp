// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.
#include<bits/stdc++.h>
using namespace std;

// Brute force == TC = O(n^3)
int bruteForce(vector<int> &nums, int target) {
  int len = INT_MIN;
  for(int i = 0; i < nums.size(); i++) {
    for(int j = i; j < nums.size(); j++) {
      int sum = 0; // Reset the sum for every (i, j)
      for(int k = i; k <= j; k++) {
        sum += nums[k];
      }
      if(sum == target) len = max(len, j-i+1);
    }
  }
  return len;
}

// We can improve the Time Complexity to O(n^2)

int betterBrute(vector<int> &nums, int target) {
  int len = INT_MIN;
  for(int i = 0; i < nums.size(); i++) {
    int sum = 0; // Reset the sum for every (i, j)
    for(int j = i; j < nums.size(); j++) {
      sum += nums[j];   
      if(sum == target) len = max(len, j-i+1);
    }
  }
  return len;
}

// TC - O(n), SC - O(n)
int betterSolution(vector<int> nums, long long k) {
  unordered_map<long long, int> prefixSum;
  long long sum = 0;
  int maxLen = 0;
  for(int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    if(sum == k) {
      maxLen = max(maxLen, i+1);
    }
    long long remaining = sum - k;
    if(prefixSum.find(remaining) != prefixSum.end()) {
      int len = i - prefixSum[remaining];
      maxLen = max(maxLen, len);
    }
    // We need to check if the prefix sum is already present or not like if we have zeroes in the array, it will give wrong length as it will update the index every time. so we only store the first occurrence.
    if(prefixSum.find(sum) == prefixSum.end()) {
      prefixSum[sum] = i;
    }
  }
  return maxLen;
}

int main() {
  vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
  // int len = bruteForce(nums, 3);
  // int len = betterBrute(nums, 3);
  int len = betterSolution(nums, 3);
  cout << len << endl;
  return 0;
}