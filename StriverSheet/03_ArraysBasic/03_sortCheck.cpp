#include <bits/stdc++.h>
using namespace std;

// The below code can not handle the cyclic approach where last element can be compared to first element
// bool check(vector<int> &nums) {
//   for(int i = 0; i < nums.size(); i++) {
//     if(nums[i] > nums[i+1]) {
//       return false;
//     }
//   }
//   return true;
// }

bool check(vector<int> &nums) {
  int n = nums.size();
  if (n < 2)
    return true;
  int breaks = 0;
  for (int i = 0; i < n; i++) {
    // Here (i+1) % n is there to handle the case of last and first element comparison
    if (nums[i] > nums[(i + 1) % n]) {
      breaks++;
    }
    
  }
  return breaks <= 1;
}


int main() {
  vector<int> nums = {2, 1, 3, 4};
  bool c = check(nums);
  cout << c;
  return 0;
}