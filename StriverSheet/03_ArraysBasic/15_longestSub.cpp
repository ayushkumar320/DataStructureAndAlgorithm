#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> nums, int key) {
  unordered_map<int, int> mpp;
  int maxLength = 0;
  int sum = 0;
  for(int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    if (sum == key) {
      maxLength = i + 1;
    } 
    if (mpp.count(sum - key)) {
      maxLength = max(maxLength, i - mpp[sum-key]);
    } else {
      mpp[sum] = i;
    }
  }
  return maxLength;
}


int main() {
  vector<int> nums = {10, 5, 2, 7, 1, 9};
  int num = longestSubarray(nums, 15);
  cout << num;
  return 0;
}