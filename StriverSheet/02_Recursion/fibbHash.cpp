#include<bits/stdc++.h>
using namespace std;

int fibb(int n, vector<int> &hash) {
  if (n < 2) return n;
  if (hash[n]) return hash[n];
  hash[n] = fibb(n - 1, hash) + fibb(n - 2, hash);
  return hash[n];
}

int main() {
  int n = 8;
  vector<int> hash (n+1, 0);
  cout << fibb(n, hash);
  return 0;
}