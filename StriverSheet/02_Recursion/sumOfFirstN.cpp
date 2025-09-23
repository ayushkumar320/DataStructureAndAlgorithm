#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
  if (n == 0) return 0;
  return sum(n-1) + n;
}

int main() {
  int res = sum(100);
  cout << res;
  return 0;
}