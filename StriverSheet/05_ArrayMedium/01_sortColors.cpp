#include<bits/stdc++.h>
using namespace std;

// Quick Sort

int partIndex(vector<int> &nums, int low, int high) {
  int i = low, j = high;
  int pivot = low;
  while(i < j) {
    while(nums[i] <= nums[pivot] && i < high) {
      i++;
    }
    while(nums[j] > nums[pivot] && j >= low) {
      j--;
    }
    if(i < j) swap(nums[i], nums[j]);
  }
  swap(nums[pivot], nums[j]);
  return j;
}

void qs(vector<int> &nums, int low, int high) {
  if(low < high) {
    int pIndex = partIndex(nums, low, high);
    qs(nums, low, pIndex-1);
    qs(nums, pIndex+1, high);
  }
}

void sortColor(vector<int> &nums) {
  qs(nums, 0, nums.size() - 1);
}