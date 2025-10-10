#include<bits/stdc++.h>
using namespace std;

// Global array to store the values
vector<int> F(20, -1);

int fibb(int n) {
  if(n < 2) {
    F[n] = n;
    return n;
  } else {
    if (F[n] == -1) {
      F[n] = fibb(n-1) + fibb(n-2);
    }
    return F[n];
  }
}

int fib(int n) {
  if (n < 2) {
    F[n] = n;
    return F[n];
  } else {
    if (F[n-2] == -1) {
      F[n-2] = fib(n-2);
    } if (F[n-1] == -1) {
      F[n-1] = fib(n-1);
    }
    return F[n-1] + F[n-2];
  }
}

int main() {
  int res = fib(10);
  cout << res;
  return 0;
}