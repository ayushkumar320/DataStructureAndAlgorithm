#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int> &nums, int size) {
  if(size == 1) return;
  int didSwap = 0;
  for(int i = 0; i < size-1; i++) {
    if(nums[i] > nums[i+1]) {
      swap(nums[i], nums[i+1]);
      didSwap = 1;
    }
  }
  if(didSwap == 0) return;
  bubble(nums, size-1);
}

vector<int> bubbleSort(vector<int> &nums) {
  bubble(nums, nums.size());
  return nums;
}

int main() {
  vector<int> nums = {1, 11, 1123, 12, 3, 0, 4, 71, 22};
  vector<int> sorted = bubbleSort(nums);
  for(auto it : sorted) {
    cout << it << " ";
  }
  return 0;
}