#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &nums) {
  for(int i = 0; i < nums.size() - 1; i++) {
    int mini = i;
    for(int j = i; j < nums.size(); j++) {
      if(nums[j] < nums[mini]) {
        mini = j;
      }
    }
    swap(nums[i], nums[mini]);
  }
}

int main() {
  vector<int> nums = {13, 46, 24, 52, 20, 9};
  selection_sort(nums);
  for (auto it : nums) {
    cout << it << " ";
  }
  return 0;
}