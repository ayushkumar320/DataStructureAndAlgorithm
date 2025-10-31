// Stack follows LIFO (Last In First Out) principle
#include <bits/stdc++.h>
using namespace std;

// There are only 3 main functions in stack:
// 1. push() / emplace() - To add an element to the top of the stack
// 2. pop() - To remove the top element from the stack
// 3. top() - To access the top element of the stack
// All the above operations are done in O(1) time complexity.

int main() {
  stack<int> st; // Default constructor - creates an empty stack

  st.push(1);        // Pushes element onto the stack
  st.emplace(2);     // Similar to push but faster in some cases

  cout << "Top element: " << st.top() << endl; // Accessing the top element

  st.pop();          // Removes the top element

  cout << "Top element after pop: " << st.top() << endl;

  cout << "Size of stack: " << st.size() << endl; // Size of the stack

  cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl; // Check if stack is empty

  return 0;
}