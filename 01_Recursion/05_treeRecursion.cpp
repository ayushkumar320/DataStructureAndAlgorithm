// If a function call itself more than once, it is called tree recursion
#include<bits/stdc++.h>
using namespace std;

void fun(int n) {
  if (n < 1) return;
  cout << n << " ";
  fun(n-1);
  fun(n-1);
}


int main() {
  fun(3);
  return 0;
}