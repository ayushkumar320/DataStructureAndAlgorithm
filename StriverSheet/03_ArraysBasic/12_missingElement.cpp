// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.
#include<bits/stdc++.h>
using namespace std;

// We can use hashing

// First we need to find the max element
int maxElement(vector<int> nums) {
  int max = INT_MIN;
  for(int i = 0; i < nums.size(); i++) {
    if(nums[i] > max) {
      max = nums[i];
    }
  }
  return max;
}

vector<int> missingNumbers(vector<int> &nums) {
  int maxNum = maxElement(nums);
  vector<int> hash(maxNum+1, 0);
  vector<int> missing;
  for(int i = 0; i < nums.size(); i++) {
    hash[nums[i]]++;
  }
  for(int i = 0; i < hash.size(); i++) {
    if(hash[i] == 0) {
      missing.push_back(i);
    }
  }
  return missing;
}

int main() {
  vector<int> nums = {0, 2 ,4, 5, 6, 9};
  vector<int> missing = missingNumbers(nums);
  for(auto it: missing) {
    cout << it << " ";
  }
  return 0;
}