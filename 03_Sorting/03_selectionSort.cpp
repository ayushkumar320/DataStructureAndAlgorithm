#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums) {
  int i, j, k;
  for(i = 0; i < nums.size() - 1; i++) {
    for(j = k = i; j < nums.size(); j++) {
      if (nums[j] < nums[k]) {
        k = j;
      }
    }
    swap(nums[i], nums[k]);
  }
}

int main() {
  vector<int> nums = {2, 11, 23, 1, 7 ,12};
  selectionSort(nums);
  for(auto it : nums) {
    cout << it << " ";
  }
  return 0;
}