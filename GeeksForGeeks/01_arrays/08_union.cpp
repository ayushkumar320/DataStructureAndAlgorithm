// You are given two arrays a[] and b[], return the Union of both the arrays in any order.
#include<bits/stdc++.h>
using namespace std;
vector<int> findUnion(vector<int>& a, vector<int>& b) {
  vector<int> res;
  set<int> unique;
  for(int i = 0; i < a.size(); i++) {
    unique.insert(a[i]);
  }
  for(int i = 0; i < b.size(); i++) {
    unique.insert(b[i]);
  }
  for(auto it : unique) {
    res.push_back(it);
  }
  return res;
}

int main() {
  vector<int> a = {1,2,3,1,2,3};
  vector<int> b = {3, 4, 3, 4, 3};
  vector<int> res = findUnion(a, b);
  for(auto it : res) {
    cout << it << " ";
  }
  return 0;
}