#include<bits/stdc++.h>
using namespace std;

// Time Complexity is O(n)
// Space Complexity is O(n) due to recursive stack space
int fact(int n) {
  if (n == 0) return 1;
  return n * fact(n - 1);
}


int main() {
  int result = fact(5);
  cout << result << endl;
  return 0;
}