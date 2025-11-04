#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 1, 3, 2};
  // Lets say we have atmax element 12
  vector<int> hash(13, 0);
  for (int i = 0; i < nums.size(); i++) {
    // Storing it in hash
    hash[nums[i]]++;
  }
  cout << "Occurance of 1: " << hash[1];
  return 0;
}