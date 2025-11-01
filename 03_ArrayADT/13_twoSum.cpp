#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums, int key) {
  vector<int> result;
  unordered_map<int, int> hashmap;
  for(int i = 0; i < nums.size(); i++) {
    if(hashmap[key - nums[i]] != 0) {
      result.push_back(nums[i]);
      result.push_back(key - nums[i]);
      break;
    } else {
      hashmap[nums[i]]++;
    }
  }
  return result;
}

int main() {
  vector<int> nums = {1, 2, 3, 4 ,5, 6, 8, 9, 10, 12, 14};
  vector<int> result = twoSum(nums, 10);
  for (auto it : result) {
    cout << it << " ";
  }
  return 0;
}