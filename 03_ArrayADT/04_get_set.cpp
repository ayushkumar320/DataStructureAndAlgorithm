#include <bits/stdc++.h>
using namespace std;

int get(vector<int>& nums, int index) {
  // Validate index
  if (index >= 0 && index < nums.size()) {
    return nums[index];
  }
  return -1;
}

void setElement(vector<int>& nums, int index, int x) {
  if (index >= 0 && index < nums.size()) {
    nums[index] = x;
  }
}

int maximumElement(vector<int>& nums) {
  int max = nums[0];
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > max) {
      max = nums[i];
    }
  }
  return max;
}

int minimumElement(vector<int>& nums) {
  int min = nums[0];
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] < min) {
      min = nums[i];
    }
  }
  return min;
}

int sumOfElements(vector<int>& nums) {
  int total = 0;
  for (int i = 0; i < nums.size(); i++) {
    total += nums[i];
  }
  return total;
}

float averageElement(vector<int>& nums) {
  float avg = 0;
  return (float) sumOfElements(nums) / (float) nums.size();
}

int main() {
  vector<int> nums = {1, 9, 3, 4, 5, 6, 7, 8};
  cout << get(nums, 4) << endl;
  setElement(nums, 4, 12);
  cout << "Max: " << maximumElement(nums) << " Min: " << minimumElement(nums)
       << endl;
  cout << "Sum: " << sumOfElements(nums) << " Avg: " << averageElement(nums)
       << endl;
  return 0;
}