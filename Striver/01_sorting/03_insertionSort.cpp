#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &nums) {
  for(int i = 0; i < nums.size(); i++) {
    int j = i;
    while(j > 0 && nums[j-1] > nums[j]) {
      swap(nums[j-1], nums[j]);
      j--;
    }
  }
}

int main() {
  vector<int> nums = {13, 46, 24, 52, 20, 9};
  insertion_sort(nums);
  for(auto it : nums) {
    cout << it << " ";
  }
  return 0;
}