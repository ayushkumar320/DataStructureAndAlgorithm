#include<bits/stdc++.h>
using namespace std;

void findDuplicates(vector<int> &nums) {
  int lastDuplicate = INT_MIN;
  int j;
  for(int i = 0; i < nums.size() - 1; i++) {
    if(nums[i] == nums[i+1] && nums[i] != lastDuplicate) {
      // cout << nums[i] << " ";
      j = i+1;
      while(nums[j] == nums[i]) j++;
      cout << nums[i] << " appeared " << j-i << " times\n";
      i = j - 1; 
      lastDuplicate = nums[i];
    }
  }
}

// It can be done using hash maps
void findDuplicateHash(vector<int> &nums) {
  map<int, int> mp;
  for(int i = 0; i < nums.size(); i++) {
    mp[nums[i]]++;
  }
  for(auto it : mp) {
    if (it.second > 1) {
      cout << it.first << " appeared " << it.second << " times.\n";
    }
  }
}
int main() {
  vector<int> nums = {1, 2, 2, 3, 4, 5 ,15, 15, 20, 20, 20, 1};
  findDuplicateHash(nums);
  return 0;
}