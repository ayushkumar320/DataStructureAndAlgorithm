#include<iostream>
using namespace std;

// Without static

int fun(int n) {
  if (n > 0) {
    return fun(n-1) + n;
  }
  return 0;
}

// With Static
int fun2(int n) {
  static int x = 0;
  if (n > 0) {
    x++;
    return fun2(n-1) + x;
  }
  return 0;
}


int main() {
  int a = 5;
  cout << fun(a) << " ";
  cout << endl;
  cout << fun2(a) << " ";
  return 0;
}