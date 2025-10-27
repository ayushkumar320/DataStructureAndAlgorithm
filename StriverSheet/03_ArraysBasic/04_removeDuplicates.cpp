#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &nums) {
  int i = 0; 
  for(int j = 0; j < nums.size(); j++) {
    if(nums[i] != nums[j]) {
      nums[i+1] = nums[j];
      i++;
    }
  }
  return i+1;
}

int main() {
  vector<int> nums = {1, 1, 2, 3, 4, 4, 5, 6, 6, 7};
  int num = removeDuplicate(nums);
  cout << num << endl;
  for(auto it: nums) {
    cout << it << " ";
  }
  return 0;
}