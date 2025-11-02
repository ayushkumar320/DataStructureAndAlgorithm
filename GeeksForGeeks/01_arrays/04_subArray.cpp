// Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

#include<bits/stdc++.h>
using namespace std;
// Check if b is a subset of a or not

// This does not checks for frequency, it only checks for presence which is ideally wrong
/*
bool isSubset(vector<int> &a, vector<int> &b) {
  // We can use concept of hashing and then compare
  unordered_map<int, int> hashtable;
  for(int i = 0; i < a.size(); i++) {
    hashtable[a[i]]++;
  }
  for(int i = 0; i < b.size(); i++) {
    if(hashtable.find(b[i]) == hashtable.end()) {
      return false;
    }
  }
  return true;
}
*/

bool isSubsetFreq(vector<int> &a, vector<int> &b) {
  unordered_map<int, int> hashtable;
  for(int i = 0; i < a.size(); i++) {
    hashtable[a[i]]++;
  }
  for(int i = 0; i < b.size(); i++) {
    if(hashtable[b[i]] > 0) {
      // Reducing frequency whenever we compare with b so that it starts getting exhausted
      hashtable[b[i]]--;
    } else {
      return false;
    }
  }
  return true;
}


int main() {
  vector<int> a = {11, 7, 1, 13, 21, 3, 3};
  vector<int> b = {11, 3, 7, 1, 7};
  // bool isSub = isSubset(a, b);
  // cout << (isSub ? "true" : "false");

  bool isSub = isSubsetFreq(a, b);
  cout << (isSub ? "true" : "false");
  return 0;
}