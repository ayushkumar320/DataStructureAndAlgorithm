#include<bits/stdc++.h>
using namespace std;

// If it is first n natural numbers with one missing element
int findMissing(vector<int> &nums, int n) {
  int total = n * (n + 1) / 2; 
  int sum = 0;
  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
  }
  return total - sum;
}

// If it is sequesnce of natural number starting from any number with one missing element
int findMissingGeneral(vector<int> &nums) {
  int n = nums.size();
  int l = nums[0];
  int h = nums[n - 1];
  int diff = l;
  for (int i = 0; i < n; i++) {
    if(nums[i] - i != diff) {
      return i + diff;
    }
  }
  return -1;
}

int main() {
  vector<int> nums = {1, 2, 3, 5, 6};
  cout << findMissing(nums, 6) << endl;
  vector<int> nums2 = {10, 11, 12, 14, 15};
  cout << findMissingGeneral(nums2) << endl;
  return 0;
}