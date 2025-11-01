#include<bits/stdc++.h>
using namespace std;

// Time Complexity => O(n^2)
void bubbleSort(vector<int> &nums) {
  int flag = 0;
  // Loop for n-1 passes
  for(int i = 0; i < nums.size() - 1; i++) {
    // Loop for comparision 
    for(int j = 0; j < nums.size() - 1 - i; j++) {
      if (nums[j] > nums[j+1]) {
        swap(nums[j], nums[j+1]);
        flag = 1;
      }
    }
    // After first pass, if no swapping is done, list is already sorted
    if(flag == 0) {
      break;
    }
  }
}


int main() {
  vector<int> nums = {2, 4, 6, 11, 1, 13, 24};
  bubbleSort(nums);
  for (auto it : nums) {
    cout << it << " ";
  }
  return 0;
}