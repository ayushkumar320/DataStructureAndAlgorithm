#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  int i = 0, j = 0;
  vector<int> nums;
  while (i < m && j < n) {
    if (nums1[i] <= nums2[j]) {
      nums.push_back(nums1[i]);
      i++;
    } else {
      nums.push_back(nums2[j]);
      j++;
    }
  }
  while (i < m) {
    nums.push_back(nums1[i]);
    i++;
  }
  while (j < n) {
    nums.push_back(nums2[j]);
    j++;
  }
  for(int k = 0; k < nums.size(); k++) {
    nums1[k] = nums[k];
  }
}