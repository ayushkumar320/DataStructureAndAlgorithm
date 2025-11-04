#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {1, 1, 2, 3, 1, 2, 3, 12};
  // Ordered map stores data in sorted form
  map<int, int> mpp;
  // For better time complexity we can use unordered_map as its avearage time cmplexity is O(1) for storing, and worst case is O(n) in unoredered_map wherease Time Complexity ofr map is O(log n)
  for(int i = 0; i < nums.size(); i++) {
    mpp[nums[i]]++;
  } 
  cout << "Occurance of 1 is: " << mpp[1] << endl;
  return 0;
}