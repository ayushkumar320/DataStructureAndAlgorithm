// Given an unsorted array arr[ ] having both negative and positive integers. The task is to place all negative elements at the end of the array without changing the order of positive elements and negative elements.
#include<bits/stdc++.h>
using namespace std;


// TC - O(n) and SC - O(n) 
void segregateElements(vector<int> &arr) {
  vector<int> negatives, positives;
  for(int i = 0; i < arr.size(); i++) {
    if (arr[i] < 0) {
      negatives.push_back(arr[i]);
    } else {
      positives.push_back(arr[i]);
    }
  }
  int k = 0, j = 0, i = 0;
  while(k < positives.size()) {
    arr[i++] = positives[k++];
  }
  while (j < negatives.size()) {
    arr[i++] = negatives[j++];
  }
}

int main() {
  vector<int> nums = {1, -1, 3, 2, -7, -5, 11, 6};
  segregateElements(nums);
  for(auto it : nums) {
    cout << it << " ";
  }
  return 0;
}