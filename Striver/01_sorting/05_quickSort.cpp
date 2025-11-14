#include<bits/stdc++.h>
using namespace std;

int partIndex(vector<int> &nums, int low, int high) {
  int pivot = low;
  int i = low;
  int j = high;
  while(i < j) {
    // Find first element greater than pivot from left
    while(nums[i] < nums[pivot] && i <= high) {
      i++;
    }
    // Find first element smaller than pivot from right
    while(nums[j] > nums[pivot] && j >= low) {
      j--;
    }
    // Now we have one smaller and one bigger element than pivot, so we will swap
    if(i < j) {
      swap(nums[i], nums[j]);
    }
  }
  // Lastly we swap the pivot to correct place as j crosses i and is the correct place for pivot
  swap(nums[pivot], nums[j]);
  return j;
}


void quickSort(vector<int> &nums, int low, int high) {
  if (low < high) {
    int partitionIndex = partIndex(nums, low, high);
    quickSort(nums, low, partitionIndex - 1);
    quickSort(nums, partitionIndex + 1, high);
  }
}


int main() {
  vector<int> nums = {1, 11, 14, 2, 5, 7, 23, 0, 6, 8};
  quickSort(nums, 0, nums.size() - 1);
  for(auto it : nums) {
    cout << it << " ";
  }
  return 0;
}