#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &nums, int key) {
  // for(int i = 0; i < nums.size(); i++) {
  //   if (nums[i] == key) {
  //     return i;
  //   }
  // }
  // We can imporve this by sending the searched element to first position now in next search it can be found easily
  for(int i = 0; i < nums.size(); i++) {
    if (nums[i] == key) {
      swap(nums[i], nums[0]);
      return i;
    }
  }
  return -1;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  int key = 3;
  int found = linearSearch(nums, key);
  cout << found << endl;
  cout << nums[0] << endl;
  return 0;
}