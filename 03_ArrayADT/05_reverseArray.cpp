#include <bits/stdc++.h>
using namespace std;

// Takes more space complexity
// TC - O(n)
void reverseAuxiliary(vector<int>& nums) {
  vector<int> B(nums.size());
  for (int i = nums.size() - 1, j = 0; i >= 0; i--, j++) {
    B[j] = nums[i];
  }
  for (int i = 0; i < nums.size(); i++) {
    nums[i] = B[i];
  }
}

// Better two pointer approach, less space complexity as no new array is declared
// TC - O(n)
void reverseBetter(vector<int> &nums) {
  for (int i = 0, j = nums.size() - 1; i < j; i++, j--) {
    swap(nums[i], nums[j]);
  }
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  // reverseAuxiliary(nums);
  reverseBetter(nums);
  for (auto it : nums) {
    cout << it << " ";
  }
  return 0;
}