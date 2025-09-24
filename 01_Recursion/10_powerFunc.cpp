#include<bits/stdc++.h>
using namespace std;

int pow(int, int);

int main() {
  int res = pow(2, 9);
  cout << res;
  return 0;
}


int pow(int m, int n) {
  // Without optimization
  if(n == 0) return 1;
  // return pow(m, n-1) * m;

  // With optimization
  if (n % 2 == 0) {
    return pow(m*m, n/2);
  } else {
    return m * pow (m*m, (n-1)/2);
  }
}