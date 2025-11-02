#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int low, int high) {
  int pivot = nums[low];
  int i = low, j = high;
  while(i < j) {
    while(nums[i] <= pivot) i++;
    while(nums[j] > pivot) j--;
    if(i < j) {
      swap(nums[i], nums[j]);
    }
  }
  swap(nums[low], nums[j]);
  return j;
}

void quickSort(vector<int> &nums, int low, int high) {
  if(low < high) {
    int pivotIndex = partition(nums, low, high);
    quickSort(nums, low, pivotIndex - 1);
    quickSort(nums, pivotIndex + 1, high);
  }
}


int main() {
  vector<int> nums = {3, 6, 8, 10, 1, 2, 1};
  quickSort(nums, 0, nums.size() - 1);
  for(int num : nums) {
    cout << num << " ";
  }
  return 0;
}