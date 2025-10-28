#include <bits/stdc++.h>
using namespace std;

// Inserting an element
void insertElement(vector<int>& nums, int x) {
  nums.resize(nums.size() + 1);  // Make space for new element
  int i = nums.size() - 2;       // Start from last original element
  while (i >= 0 && nums[i] > x) {
    nums[i + 1] = nums[i];
    i--;
  }
  nums[i + 1] = x;
}

// Check if array is sorted or not
bool isSorted(vector<int> nums) {
  for(int i = 0 ; i < nums.size()-1; i++) {
    if (nums[i] > nums[i+1]) {
      return false;
    }
  }
  return true;
}

// Rearranging negative to left side of array using two pointers
void rearrangeNegative(vector<int> &nums) {
  int i = 0, j = nums.size() - 1;
  while (i < j) {
    while(nums[i] < 0) {
      i++;
    }
    while(nums[j] >= 0) {
      j--;
    }
    if (i < j) {
      swap(nums[i], nums[j]);
    }
  }
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 7};
  vector<int> nums2 = {-1, 2, -3, 4, 5, -6, 7, -8};
  rearrangeNegative(nums2);
  insertElement(nums, 5);
  for (auto it : nums) {
    cout << it << " ";
  }
  cout << endl;
  cout << isSorted(nums) << endl;
  for (auto it : nums2) {
    cout << it << " ";
  }
  return 0;
}