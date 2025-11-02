// Given an array of integers called nums,sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.
#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &nums) {
  int flag = 0;
  for(int i = 0; i < nums.size() - 1; i++) {
    for(int j = 0; j < nums.size() - i - 1; j++) {
      if(nums[j] > nums[j+1]) {
        swap(nums[j], nums[j+1]);
        flag = 1;
      }
    }
    if(flag == 0) {
      break;
    }
  }
  return nums;
}

int main() {
  vector<int> nums = {11, 12, 1, 4, 15, 2, 13, 12, 10};
  vector<int> sorted = bubbleSort(nums);
  for(auto it : sorted) {
    cout << it << " ";
  }
  return 0;
}