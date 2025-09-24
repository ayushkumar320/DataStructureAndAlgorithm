#include<bits/stdc++.h>
using namespace std;

vector<int> reversedArray(vector<int> &nums, int start, int end);

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int end = arr.size() - 1;
  vector<int> rev = reversedArray(arr, 0, end);
  for(auto it : rev) {
    cout << it << " ";
  }
  return 0;
}

vector<int> reversedArray(vector<int> &nums, int start, int end) {
  if (start >= end) return nums; 
  swap(nums[start], nums[end]);
  return reversedArray(nums, start+1, end-1);
  
  // Loop approach

  // for(int i = 0; i < nums.size(); i++) {
  //   swap(nums[start], nums[end]);
  //   start++;
  //   end--;
  // }
}

