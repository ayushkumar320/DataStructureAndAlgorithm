#include<bits/stdc++.h>
using namespace std;

vector<int> getMinMax(vector<int> &arr) {
  vector<int> ans;
  int minNum = INT_MAX;
  int maxNum = INT_MIN;
  for(int i = 0; i < arr.size(); i++) {
    if (arr[i] > maxNum) {
      maxNum = arr[i];
    } 
    if (arr[i] < minNum) {
      minNum = arr[i];
    }
  }
  return ans;
}