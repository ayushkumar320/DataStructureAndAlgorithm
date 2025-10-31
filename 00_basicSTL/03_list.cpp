#include<bits/stdc++.h>
using namespace std;

int main() {
  // Declaring a list
  list<int> l; // Default constructor - creates an empty list

  l.push_back(1); // Pushes element at the back
  l.emplace_back(2); // Similar to push_back but faster in some cases

  l.push_front(0); // Pushes element at the front
  l.emplace_front(-1); // Similar to push_front but faster in some cases

  // Defining a list of size n with all values initialized to 0
  list<int> l2(5); // Creates a list of size 5 with all elements as 0

  list<int> l3(5, 10); // Creates a list of size 5 with all elements as 10

  // Copying a list
  list<int> l4(l3); // Creates a list l4 which is a copy of l3

  // Iterators in lists
  list<int> l5 = {10, 20, 30, 40, 50};

  list<int>::iterator it = l5.begin(); // Points to first element (it is a pointer type)
  cout << *(it) << endl; // Dereferencing the iterator to get the value

  it++; // Moving to next element
  cout << *(it) << endl;

  // Other iterators
  list<int>::iterator it2 = l5.end(); // Points to one position after the last element
  it2--; // Move to last element
  cout << *(it2) << endl;

  // rbegin and rend - Reverse iterators
  list<int>::reverse_iterator it3 = l5.rbegin(); // Points to last element
  cout << *(it3) << endl;
  it3++; // Move to second last element
  cout << *(it3) << endl;
  list<int>::reverse_iterator it4 = l5.rend(); // Points to one position before first element
  it4--; // Move to first element
  cout << *(it4) << endl;

  // Back and front
  cout << l5.front() << endl; // First element
  cout << l5.back() << endl;  // Last element

  // Printing all elements of list using iterators
  for(list<int>::iterator i = l5.begin(); i != l5.end(); i++) {
    cout << *(i) << " ";  
  }
  cout << endl;

  // All other functions are similar to vectors but with some differences
  l5.pop_back(); // Removes last element
  cout << "After pop back: ";
  for(list<int>::iterator i = l5.begin(); i != l5.end(); i++) {
    cout << *(i) << " ";  
  }
  cout << endl;
  l5.pop_front(); // Removes first element
  cout << "After pop front: ";
  for(list<int>::iterator i = l5.begin(); i != l5.end(); i++) {
    cout << *(i) << " ";  
  }
  cout << endl;
  l5.erase(++l5.begin()); // Erases second element
  cout << "After erase: ";
  for(list<int>::iterator i = l5.begin(); i != l5.end(); i++) {
    cout << *(i) << " ";  
  }
  cout << endl;
  return 0;
}