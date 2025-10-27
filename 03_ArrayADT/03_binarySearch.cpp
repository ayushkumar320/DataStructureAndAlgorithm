#include<bits/stdc++.h>
using namespace std;

// Loop method
int binarySearch(vector<int> &nums, int key) {
  int low = 0;
  int high = nums.size() - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (key == nums[mid]) {
      return mid;
    }
    else if (key < nums[mid]) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

// Recursive Method
int recursiveBinary(vector<int> &nums, int low, int high, int key) {
  if (low <= high) {
    int mid = (low + high) / 2;
    if(key == nums[mid]) {
      return mid;
    } else if (key < nums[mid]) {
      return recursiveBinary(nums, low, mid-1, key);
    } else {
      return recursiveBinary(nums, mid + 1, high, key);
    }
  }
  return -1;
}


int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  int key = 13;
  // int found = binarySearch(nums, key);
  int found = recursiveBinary(nums, 0, nums.size(), 3);
  cout << found << endl;
  return 0;
}