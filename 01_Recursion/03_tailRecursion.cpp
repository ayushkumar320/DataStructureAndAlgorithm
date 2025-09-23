#include<bits/stdc++.h>
using namespace std;

// Tail Recursion
void fun(int n) {
  if (n > 0) {
    cout << n << " ";
    fun(n-1); // Tail Recursion
  }
}

// Tail recursion can be converted to loops
void loopFun(int n) {
  while (n > 0) {
    cout << n << " ";
    n--;
  }
}

// Here the time complexity of both the functions in O(n) but the space complexity of Loop is O(1) as no extra space is used but in tail recursion the space complexity is O(n) due to function call stack.

// NOTE - If we need to use tail recursion, we should always prefer loops over tail recursion as loops are more space efficient. But it is not always possible to convert tail recursion to loops.

int main() {
  int n = 5;
  fun(n);
  cout << endl;
  loopFun(n);
  return 0;
}