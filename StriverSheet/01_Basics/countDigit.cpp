#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int digits = 0;
  while(n) {
    n = n/10;
    digits++;
  }
  cout << digits;
  return 0;
}