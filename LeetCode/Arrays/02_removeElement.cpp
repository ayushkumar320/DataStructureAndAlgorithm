#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val) {
  vector<int> nonrp;
  for(int i = 0; i < nums.size(); i++) {
    if(nums[i] != val) {
      nonrp.push_back(nums[i]);
    }
  }
  int size = nonrp.size();
  int i = 0;
  while(i < nonrp.size()) {
    nums[i] = nonrp[i];
    i++;
  }
  while(i < nums.size()) {
    nums[i] = val;
    i++;
  }
  return size;
}