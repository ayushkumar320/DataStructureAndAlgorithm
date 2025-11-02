#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& nums) {
  for (int i = 0; i < nums.size() - 1; i++) {
    for (int j = i; j < nums.size(); j++) {
      if (nums[i] > nums[j]) {
        swap(nums[i], nums[j]);
      }
    }
  }
  return nums;
}

int main() {
  vector<int> nums = {2, 3, 11, 1, 4, 54, 8};
  vector<int> sorted = selectionSort(nums);
  for (auto it : sorted) {
    cout << it << " ";
  }
  return 0;
}