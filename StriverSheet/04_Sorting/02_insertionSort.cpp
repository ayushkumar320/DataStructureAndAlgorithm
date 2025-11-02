// Given an array of integers called nums, sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.

#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> &nums) {
  int i, j, x;
  for(i = 1; i < nums.size(); i++) {
    j = i - 1;
    x = nums[i];
    while (j > -1 && nums[j] > x) {
      nums[j+1] = nums[j];
      j--;
    }
    nums[j+1] = x;
  }
  return nums;
}

int main() {
  vector<int> nums = {11, 12, 1, 4, 15, 2, 13, 12, 10};
  vector<int> sorted = insertionSort(nums);
  for(auto it : sorted) {
    cout << it << " ";
  }
  return 0;
}