#include <bits/stdc++.h>
using namespace std;

// Binary Set operations
// 1. Union - Take all elements except duplicates, no element should be repeated

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
  vector<int> newArray;
  int i = 0, j = 0;
  int n1 = nums1.size();
  int n2 = nums2.size();
  while (i < n1 && j < n2) {
    if (nums1[i] < nums2[j]) {
      newArray.push_back(nums1[i]);
      i++;
    } else if (nums1[i] == nums2[j]) {
      newArray.push_back(nums1[i]);
      i++;
      j++;
    } else {
      newArray.push_back(nums2[j]);
      j++;
    }
  }
  // Add any remaining elements from either array
  while (i < n1) {
    newArray.push_back(nums1[i]);
    i++;
  }
  while (j < n2) {
    newArray.push_back(nums2[j]);
    j++;
  }
  return newArray;
}

// 2. Intersection - Take only common elements for sorted array
vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
  int i = 0, j = 0;
  int n1 = nums1.size();
  int n2 = nums2.size();
  vector<int> intersectedArray;
  while (i < n1 && j < n2) {
    if (nums1[i] < nums2[j]) {
      i++;
    } else if (nums1[i] > nums2[j]) {
      j++;
    } else {
      intersectedArray.push_back(nums1[i]);
      i++;
      j++;
    }
  }
  return intersectedArray;
}

// If arrays is not sorted
vector<int> intersectionUnsorted(vector<int>& nums1, vector<int>& nums2) {
  vector<int> intersectedArray;
  int n1 = nums1.size();
  int n2 = nums2.size();
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      if (nums1[i] == nums2[j]) {
        intersectedArray.push_back(nums1[i]);
        break;
      }
    }
  }
  return intersectedArray;
}

// 3. Difference - Elements in first array but not in second array
// For unsorted arrays
vector<int> differenceArray(vector<int>& nums1, vector<int>& nums2) {
  vector<int> diffArr;
  int n1 = nums1.size();
  int n2 = nums2.size();
  for (int i = 0; i < n1; i++) {
    bool found = false;
    for (int j = 0; j < n2; j++) {
      if (nums1[i] == nums2[j]) {
        found = true;
        break;
      }
    }
    if (!found) {
      diffArr.push_back(nums1[i]);
    }
  }
  return diffArr;
}

// For sorted arrays
vector<int> differenceSortedArray(vector<int>& nums1, vector<int>& nums2) {
  vector<int> diffArr;
  int i = 0, j = 0;
  int n1 = nums1.size();
  int n2 = nums2.size();
  while (i < n1 && j < n2) {
    if (nums1[i] < nums2[j]) {
      diffArr.push_back(nums1[i]);
      i++;
    } else if (nums1[i] > nums2[j]) {
      j++;
    } else {
      i++;
      j++;
    }
  }
  // Add remaining elements from nums1
  while (i < n1) {
    diffArr.push_back(nums1[i]);
    i++;
  }
  return diffArr;
}

int main() {
  vector<int> nums1 = {1, 2, 4, 5, 6};
  vector<int> nums2 = {2, 3, 5, 7};
  vector<int> result = unionArray(nums1, nums2);
  for (auto it : result) {
    cout << it << " ";
  }
  cout << endl;
  vector<int> interResult = intersectionArray(nums1, nums2);
  for (auto it : interResult) {
    cout << it << " ";
  }
  cout << endl;
  vector<int> interUnsortedResult = intersectionUnsorted(nums1, nums2);
  for (auto it : interUnsortedResult) {
    cout << it << " ";
  }
  cout << endl;
  vector<int> nums3 = {1, 2, 4, 5, 6};
  vector<int> nums4 = {2, 3, 5, 7};
  vector<int> diffResult = differenceArray(nums3, nums4);
  for (auto it : diffResult) {
    cout << it << " ";
  }
  cout << endl;
  vector<int> diffSortedResult = differenceSortedArray(nums3, nums4);
  for (auto it : diffSortedResult) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}