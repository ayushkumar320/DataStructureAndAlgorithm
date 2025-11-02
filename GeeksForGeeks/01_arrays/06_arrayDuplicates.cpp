// Given an array arr[] of size n, containing elements from the range 1 to n, and each element appears at most twice, return an array of all the integers that appears twice.
// Again hashing approach

#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
  vector<int> elements;
  map<int, int> hashtable;
  for(int i = 0; i < arr.size(); i++) {
    hashtable[arr[i]]++;
  }
  for(auto it : hashtable) {
    if(it.second > 1) {
      elements.push_back(it.first);
    }
  }
  return elements;
}

int main() {
  vector<int> arr = {2, 3, 1, 2, 3};
  vector<int> dup = findDuplicates(arr);
  for (auto it : dup) {
    cout << it << " ";
  }
  return 0;
}