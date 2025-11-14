#include <bits/stdc++.h>
using namespace std;

int partIndex(vector<int>& nums, int low, int high) {
  int pivotVal = nums[low];
  int i = low;
  int j = high;

  while (i < j) {
    while (i <= high && nums[i] <= pivotVal) i++;
    while (j >= low && nums[j] > pivotVal) j--;

    if (i < j) {
      swap(nums[i], nums[j]);
    }
  }

  swap(nums[low], nums[j]);
  return j;
}

void quickSort(vector<int>& nums, int low, int high) {
  if (low < high) {
    int partitionIndex = partIndex(nums, low, high);
    quickSort(nums, low, partitionIndex - 1);
    quickSort(nums, partitionIndex + 1, high);
  }
}

int main() {
  vector<int> nums = {1, 11, 14, 2, 5, 7, 23, 0, 6, 8};
  quickSort(nums, 0, nums.size() - 1);
  for (auto it : nums) {
    cout << it << " ";
  }
  return 0;
}