#include<iostream>
#include<vector>
using namespace std;


// Factorial way

long long factorial(int n, vector<long long> &memo) {
  if(n == 0 || n == 1) {
    memo[n] = 1;
  }
  if (memo[n] != -1) {
    return memo[n];
  }
  memo[n] = n * factorial(n - 1, memo);
  return memo[n];
}
long long C(int n, int r) {
  vector<long long> memo(n + 1, -1);
  if (r > n) return 0;
  if (r == 0 || r == n) return 1;
  return factorial(n, memo) / (factorial(r, memo) * factorial(n - r, memo));
}


// Pascal's Triangle way
long long cPascal(int n, int r) {
  if (r > n) return 0;
  if (r == 0 || r == n) return 1;
  return cPascal(n - 1, r - 1) + cPascal(n - 1, r);
}

int main() {
  int n = 4, r = 2;
  long long res = C(n, r);
  long long pascal = cPascal(n, r);
  cout << pascal << endl;
  cout << res << endl;
  return 0;
}