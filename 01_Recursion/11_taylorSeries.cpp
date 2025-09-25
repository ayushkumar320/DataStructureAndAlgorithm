// Using recursion

#include<bits/stdc++.h>
using namespace std;

double taylorSeries(int x, int n) {
  static double p = 1, f = 1;
  double r;
  // Base condition
  if(n == 0) return 1;
  else {
    r = taylorSeries(x, n-1);
    p = p * x;
    f = f * n;
    return r + p/f;
  }
}

// Using Horner's Rule
double hornerTaylor(int x, int n) {
  double s = 1;
  for (; n > 0; n--) {
    s = 1 + (((double)x / n) * s);
  }
  return s;
}

int main() {
  // double res = taylorSeries(5, 30);
  double res = hornerTaylor(5, 30);
  cout << res;
  return 0;
}