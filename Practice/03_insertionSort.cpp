#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &nums) {
  for(int i = 0; i < nums.size(); i++) {
    int j = i;
    while(j > 0 & nums[j-1] > nums[j]) {
      swap(nums[j-1], nums[j]);
      j--;
    }
  }
}

int main() {
  vector<int> nums = {1, 3, 5, 2, 11, 52, 12, 14, 7};
  insertionSort(nums);
  for (auto it : nums) {
    cout << it << " ";
  }
  return 0;
}