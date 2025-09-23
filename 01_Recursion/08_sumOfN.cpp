// There are three ways to do
// 1. Direct Formula - O(1)
// 2. Recursion - O(n) and O(n) space
// 3. Loop - O(n) and O(1) space

#include<bits/stdc++.h>
using namespace std;

int sumRec(int n) {
  if (n == 0) return 0;
  return sumRec(n-1) + n;
}

int sumLoop(int n) {
  int sum = 0;
  for(int i = 0; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int sumDir(int n) {
  return n * (n + 1) / 2;
}

int main() {
  int n = 100;
  cout << sumRec(n) << "\n";
  cout << sumLoop(n) << "\n";
  cout << sumDir(n) << "\n";
  return 0;
}