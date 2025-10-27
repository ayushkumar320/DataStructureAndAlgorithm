#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &nums) {
  int largest = nums[0];
  int secondLargest = INT_MIN;
  for(int i = 0 ; i < nums.size(); i++) {
    if(largest < nums[i]) {
      largest = nums[i];
    }
  }
  for(int i = 0; i < nums.size(); i++) {
    if(secondLargest < nums[i] && nums[i] != largest) {
      secondLargest = nums[i];
    }
  }
  return secondLargest;
}

int main() {
  vector<int> nums = {2, 44, 56, 23, 45, 72};
  int secondLargestNum = secondLargest(nums);
  cout << secondLargestNum;
  return 0;
}