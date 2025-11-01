#include<bits/stdc++.h>
using namespace std;\

int missingNum(vector<int>& arr) {
  int n = arr.size();
  vector<int> hash(n+2, 0);
  for(int i = 0; i < n; i++) {
    hash[arr[i]]++;
  }
  for(int i = 1; i <= n+1; i++) {
    if(hash[i] == 0) {
      return i;
    }
  }
  return -1;
}

int main() {
  vector<int> nums = {1};
  cout << missingNum(nums);
  return 0;
}