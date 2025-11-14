// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
  int low = 0, high = nums.size() - 1;
  int found = 0;
  while(low <= high) {
    int mid = (low + high) / 2;
    if(nums[mid] == target) {
      found = 1;
      return mid;
    }
    else if (nums[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return low;
}