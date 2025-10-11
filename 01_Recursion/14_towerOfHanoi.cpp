// Tower of Hanoi Problem
#include<bits/stdc++.h>
using namespace std;

void TOH(int n, int A, int B, int C) {
  if (n > 0) {
    TOH(n - 1, A, C, B);
    cout << "Move disk " << n << " from rod " << A << " to rod " << C << endl;
    TOH(n - 1, B, A, C);
  }
}

int main() {
  int n;
  cout << "Enter number of disks: ";
  cin >> n;
  TOH(n, 1, 2, 3); // A=1, B=2, C=3
  return 0;
}