// Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.
#include<bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(vector<int> &arr) {
  int duplicate = -1, missing = -1;
  int max = arr.size();
  vector<int> hash(max + 1, 0);
  for(int i = 0; i < max; i++) {
    hash[arr[i]]++;
  }
  for(int i = 1; i < hash.size(); i++) {
    if(hash[i] > 1) {
      duplicate = i;
    }
    if(hash[i] == 0) {
      missing = i;
    }
  }
  return {duplicate, missing};
}

int main() {
  vector<int> nums = {2, 2};
  vector<int> res= findTwoElement(nums);
  for(auto it : res)  {
    cout << it << " ";
  }
  return 0;
}