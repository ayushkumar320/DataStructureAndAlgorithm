#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &nums) {
  for(int i = 0; i < nums.size() - 1; i++) {
    int minElement = i;
    for(int j = i + 1; j < nums.size(); j++) {
      if(nums[minElement] > nums[j]) {
        minElement = j;
      }
    }
    if(minElement != i) {
      swap(nums[i], nums[minElement]);
    }
  }
}
int main() {
  vector<int> nums = {1, 3, 5, 2, 11, 52, 12, 14, 7};
  selection_sort(nums);
  for (auto it : nums) {
    cout << it << " ";
  }
  return 0;
}