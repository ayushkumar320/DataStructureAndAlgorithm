#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int>& nums1, vector<int>& nums2) {
  vector<int> merged;
  int i = 0, j = 0;
  int n1 = nums1.size();
  int n2 = nums2.size();
  while(i < n1 && j < n2) {
    if (nums1[i] < nums2[j]) {
      merged.push_back(nums1[i]);
      i++;
    } else {
      merged.push_back(nums2[j]);
      j++;
    }
  }
  // Now we will add the remaining elements
  for(; i < n1; i++) {
    merged.push_back(nums1[i]);
  }
  for(; j < n2; j++) {
    merged.push_back(nums2[j]);
  }
  return merged;
}

int main() {
  vector<int> nums1 = {1, 3, 6, 11};
  vector<int> nums2 = {1, 4, 14, 15};
  vector<int> nums3 = mergeArrays(nums1, nums2);
  for(auto it: nums3) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}