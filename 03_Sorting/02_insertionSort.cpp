// In insertion sort we take out element from right and place it at correct position in left part
#include <iostream>
#include <vector>
using namespace std;

// Time Complexity => O(n^2)
void insertionSort(vector<int> &nums) {
  int i, j, x;
  
  for(i = 1; i < nums.size(); i++) {
    j = i - 1;
    x = nums[i];
    while(j > -1 && nums[j] > x) {
      nums[j+1] = nums[j];
      j--;
    }
    nums[j+1] = x;
  }
}

int main() {
  vector<int> nums = {11, 1, 3, 4, 12, 32};
  insertionSort(nums);
  for(auto it : nums) {
    cout << it << " ";
  }
  return 0;
}

void insertSortAgain(vector<int> &nums) {
  int i, j, x;
  for(i = 1; i < nums.size(); i++) {
    j = i - 1;
    x = nums[i];
    while(j > -1 && nums[j] > x) {
      nums[j+1] = nums[j];
      j--;
    }
    nums[j+1] = x;
  }
}