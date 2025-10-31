#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> dq;
  dq.push_back(1);        // Pushes element at the back
  dq.emplace_back(2);     // Similar to push_back but faster in some cases
  dq.push_front(0);       // Pushes element at the front
  dq.emplace_front(-1);   // Similar to push_front but faster in some cases

  dq.pop_back();        // Removes last element
  dq.pop_front();       // Removes first element

  cout << "Front element: " << dq.front() << endl; // First element
  cout << "Back element: " << dq.back() << endl;   // Last element

  // Rest are same as vector
  return 0;
}