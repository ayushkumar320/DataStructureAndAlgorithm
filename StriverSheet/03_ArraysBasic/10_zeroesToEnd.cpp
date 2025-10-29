#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
  // We will use two pointers to compare
  // This approach does not preserve the order of non-zero elements as it swaps them from end

  int first = 0, last = nums.size() - 1;
  while (first < last) {
    if (nums[first] == 0 && nums[last] != 0) {
      swap(nums[first], nums[last]);
      last--;
      first++;
    } else if (nums[last] == 0) {
      last--;
    } else {
      first++;
    }
  }
}

// Better approach to preserve the order of non-zero elements
// We can check for 0 and check its corresponding element and if it is non-zero, we can swap them
// Here the TC is O(n^2)
void moveZeroesBetter(vector<int> &nums) {
  for(int i = 0; i < nums.size() - 1; i++) {
    for(int j = i; j < nums.size(); j++) {
      if(nums[i] == 0 && nums[j] != 0) {
        swap(nums[i], nums[j]);
        break;
      }
    }
  }
}

// Optimal way - We can just move all the non - zero elements to front and fill manually the remaining elements
void moveZeroesOptimal(vector<int> &nums) {
  int indexToFill = 0;
  // Move alll elements to front
  for(int i = 0; i < nums.size(); i++) {
    // If the number is not zero then only populate the array
    if(nums[i] != 0) {
      nums[indexToFill] = nums[i];
      indexToFill++;
    }
  }
  // Fill the remaining elements with 0
  for(; indexToFill < nums.size(); indexToFill++) {
    nums[indexToFill] = 0;
  }
}

int main() {
  vector<int> nums = {0, 2, 0, 0, -1, 0, 3, 4, 0};
  moveZeroesOptimal(nums);
  for(auto it: nums) {
    cout << it << " ";
  }
  return 0;
}