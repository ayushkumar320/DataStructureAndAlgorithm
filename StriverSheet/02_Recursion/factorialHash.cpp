// We can use concept of hashing to store values

#include<bits/stdc++.h>
using namespace std;

int fact(int n, vector<int> &hash) {
  if(n == 0) return 1;
  if(hash[n]) return hash[n];
  hash[n] = fact(n-1, hash) * n;
}

int main() {
  int n = 7;
  vector<int> hash(n+1, 0);
  cout << fact(n, hash);
  return 0;
}