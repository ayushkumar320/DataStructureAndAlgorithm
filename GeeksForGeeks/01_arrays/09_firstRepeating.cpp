// Given an array arr[], find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.
#include<bits/stdc++.h>
using namespace std;

int firstRepeated(vector<int> &arr) {
  unordered_map<int, int> hashmap;
  for(int i = 0; i < arr.size(); i++) {
    hashmap[arr[i]]++;
  }
  for(int i = 0; i < arr.size(); i++) {
    if(hashmap[arr[i]] > 1) {
      return i + 1;
    }
  }
  return -1;
}

int main() {
  vector<int> nums = {1, 5, 3, 4, 3, 5, 6};
  cout << firstRepeated(nums);
  return 0;
}