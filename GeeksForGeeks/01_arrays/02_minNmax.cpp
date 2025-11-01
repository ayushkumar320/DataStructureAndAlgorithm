#include<bits/stdc++.h>
using namespace std;

vector<int> getMinMax(vector<int> &arr) {
  vector<int> ans;
  int minNum = INT_MAX;
  int maxNum = INT_MIN;
  for(int i = 0; i < nums.size(); i++) {
    if (nums[i] > maxNum) {
      maxNum = nums[i];
    } 
    if (nums[i] < minNum) {
      minNum = nums[i];
    }
  }
  return ans;
}