#include<bits/stdc++.h>
using namespace std;

// Head Recursion - All the statements are executed after the recursive call
// We can not convert head recursion to loop
void fun(int n) {
  if(n > 0) {
    fun(n-1);
    cout << n << " ";
  }
}

int main() {
  int n;
  cin >> n;
  fun(n);
  return 0;
}