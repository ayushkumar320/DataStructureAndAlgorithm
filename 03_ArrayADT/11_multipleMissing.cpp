#include<bits/stdc++.h>
using namespace std;

// If my array is sorted:
void multipleMissing(vector<int> &nums) {
  int n = nums.size();
  int l = nums[0];
  int h = nums[n-1];
  int diff = l;
  for(int i = 0; i < n; i++) {
    if(nums[i] - i != diff) {
      while(diff < nums[i] - i) {
        cout << i + diff << " ";
        diff++;
      }
    }
  }
}

// If arrays is not sorted and using hashtables
void missingHash(vector<int> &nums, int low, int high) {
  int n = nums.size();
  vector<int> hash(high, 0);
  for(int i = 0; i < n; i++) {
    hash[nums[i]]++;
  }
  for(int i = low; i < high; i++) {
    if(hash[i] == 0) {
      cout << i << " ";
    }
  }

}

int main() {
  vector<int> num = {4, 5, 7, 8, 9, 11, 13};
  multipleMissing(num);
  cout << endl;
  vector<int> num2 = {2, 5, 7, 11, 14, 17};
  missingHash(num2, 2, 17);
  return 0;
}