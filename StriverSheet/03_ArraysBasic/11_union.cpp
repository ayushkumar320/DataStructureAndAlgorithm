// Given two sorted arrays nums1 and nums2, return an array that contains the
// union of these two arrays. The elements in the union must be in ascending
// order.

#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> nums1, vector<int> nums2) {
  vector<int> unionArr;
  int n1 = nums1.size(), n2 = nums2.size();
  int i = 0, j = 0;

  while (i < n1 && j < n2) {
    if (nums1[i] < nums2[j]) {
      if (unionArr.empty() || unionArr.back() != nums1[i]) {
        unionArr.push_back(nums1[i]);
      }
      i++;
    } else if (nums1[i] > nums2[j]) {
      if (unionArr.empty() || unionArr.back() != nums2[j]) {
        unionArr.push_back(nums2[j]);
      }
      j++;
    } else {
      if (unionArr.empty() || unionArr.back() != nums1[i]) {
        unionArr.push_back(nums1[i]);
      }
      i++;
      j++;
    }
  }

  while (i < n1) {
    if (unionArr.empty() || unionArr.back() != nums1[i]) {
      unionArr.push_back(nums1[i]);
    }
    i++;
  }

  while (j < n2) {
    if (unionArr.empty() || unionArr.back() != nums2[j]) {
      unionArr.push_back(nums2[j]);
    }
    j++;
  }

  return unionArr;
}

int main() {
  vector<int> nums1 = {1, 2, 3, 4};
  vector<int> nums2 = {3, 4, 6, 7, 9};
  vector<int> unNum = unionArray(nums1, nums2);
  for (auto it : unNum) {
    cout << it << " ";
  }
  return 0;
}