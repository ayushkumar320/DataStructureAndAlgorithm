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

void qs(vector<int>& nums, int low, int high) {
  if (low < high) {
    int pIndex = partIndex(nums, low, high);
    qs(nums, low, pIndex - 1);
    qs(nums, pIndex + 1, high);
  }
}

vector<int> quickSort(vector<int>& nums) {
  int low = 0;
  int high = nums.size() - 1;
  qs(nums, low, high);
  return nums;
}

int main() {}