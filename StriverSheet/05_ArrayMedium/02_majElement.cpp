#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
  unordered_map<int, int> mpp;
  for(int i = 0; i < nums.size(); i++) {
    mpp[nums[i]]++;
  }
  pair<int, int> majority = {-1, -1};
  for(auto it : mpp) {
    if(it.second > majority.second) {
      majority.first = it.first;
      majority.second = it.second;
    }
  }
  return majority.first;
}