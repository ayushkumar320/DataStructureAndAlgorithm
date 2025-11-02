// Given an array arr, rotate the array by one position in clockwise direction.

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr) {
  int n = arr.size();
  int x = arr[n-1];
  for(int i = n-1; i >= 0; i--) {
    arr[i] = arr[i-1];
  }
  arr[0] = x;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  rotate(arr);
  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}