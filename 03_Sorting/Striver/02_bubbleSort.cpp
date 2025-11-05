#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &nums) {
  for(int i = 0; i < nums.size() - 1; i++) {
    int flag = 0;
    for(int j = 0; j < nums.size() - i- 1; j++) {
      if(nums[j] > nums[j+1]) {
        swap(nums[j], nums[j+1]);
        flag = 1;
      }
    }
    if(flag == 0) {
      break;
    }
  }
}

int main() {
  vector<int> nums = {13, 46, 24, 52, 20, 9};
  bubble_sort(nums);
  for(auto it : nums) {
    cout << it << " ";
  }
  return 0;
}