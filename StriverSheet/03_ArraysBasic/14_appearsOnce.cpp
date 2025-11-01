// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one
#include<bits/stdc++.h>
using namespace std;

// Without constant space complexity
// Time Complexity - O(n)
int singleNumber(vector<int> &nums) {
  unordered_map<int, int> mpp;
  for(int i = 0 ; i < nums.size(); i++) {
    mpp[nums[i]]++;
  }
  for(auto it : mpp) {
    if(it.second == 1) {
      return it.first;
    }
  }
  return -1;
}

// Bitwise operation for O(1) time complexity
// x^x = 0, x^0 = x
// 0 ^ 0 = 0
// 1 ^ 1 = 0
// 0 ^ 1 || 1 ^ 0 = 1
// So all paired numbers vanish, and only the unique number remains.
int singleNumberOptimal(vector<int> &nums) {
  int ans = 0;
  for(int i = 0; i < nums.size(); i++) {
    ans = ans ^ nums[i];
  }
  return ans;
}

int main() {
  vector<int> nums = {2, 2, 1, 1, 3};
  int single = singleNumberOptimal(nums);
  cout << single;
  return 0;
}