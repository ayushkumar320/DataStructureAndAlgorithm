// First container - Vector
// Vector is a modified dynamic array which helps us to create an array with ability to make its size modifiable
// Vectors solve the problem of arrays being static in size 

#include<bits/stdc++.h>
using namespace std;

int main() {
  // Declaring a vector 
  vector <int> v;  // Default constructor - creates an empty vector

  v.push_back(1); // Pushes element at the back
  
  // Similar to push back but faster in some cases because emplace_back would construct the object immediately in the vector, while push_back, would first construct an anonymous object and then would copy it to the vector. For more see this question.
  
  v.emplace_back(2); 
  
  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(3, 4); // No need to use {} with emplace

  // Defining a vector of size n with all values initialized to 0
  vector<int> v2(5); // Creates a vector of size 5 with all elements as 0

  vector<int> v3(5, 10); // Creates a vector of size 5 with all elements as 10
  // Copying a vector
  vector<int> v4(v3); // Creates a vector v4 which is a copy of v3



  // Iterators in vectors

  vector<int> v5 = {10, 20, 30, 40, 50};

  vector<int>::iterator it = v5.begin(); // Points to first element (it is a pointer type)
  cout << *(it) << endl; // Dereferencing the iterator to get the value

  it++; // Moving to next element
  cout << *(it) << endl;

  // Other iterators
  vector<int>::iterator it2 = v5.end(); // Points to one position after the last element
  it2--; // Move to last element
  cout << *(it2) << endl;

  // rbegin and rend - Reverse iterators
  vector<int>::reverse_iterator it3 = v5.rbegin(); // Points to last element
  cout << *(it3) << endl;
  it3++; // Move to second last element
  cout << *(it3) << endl;
  vector<int>::reverse_iterator it4 = v5.rend(); // Points to one position before first element
  it4--; // Move to first element
  cout << *(it4) << endl;

  // Back and front
  cout << v5.front() << endl; // First element
  cout << v5.back() << endl;  // Last element
  
  
  // Printing all elements of vector using iterators
  for(vector<int>::iterator i = v5.begin(); i != v5.end(); i++) {
    cout << *(i) << " ";  
  }
  cout << endl;

  // Shortcut using auto keyword
  for(auto i = v5.begin(); i != v5.end(); i++) {
    cout << *(i) << " ";  
  }
  cout << endl;
  
  // Another shortcut using for each loop
  for(auto it : v5) {
    cout << it << " ";
  }
  cout << endl;


  // Deletion in vectors
  v5.pop_back(); // Removes last element
  cout << "After pop back: ";
  for(auto it : v5) {
    cout << it << " ";
  }
  cout << endl;

  // Erase - We can erase a single element or a range of elements
  // Erase takes a iterator as input (pointer to the element to be deleted)
  v5.erase(v5.begin() + 1); // Erases element at index 1
  cout << "After erase at index 1: ";
  for(auto it : v5) {
    cout << it << " ";
  }
  cout << endl;
  
  // We have to give the range as [first, last)
  v5.erase(v5.begin(), v5.begin() + 2); // Erases elements from index 0 to 1 (2 not included)
  cout << "After erase from index 0 to 1: ";
  for(auto it : v5) {
    cout << it << " ";
  }
  cout << endl;

  // Insert function

  vector<int>v6(2, 100);
  v6.insert(v6.begin(), 300); // Inserts 300 at the beginning
  v6.insert(v6.begin() + 1, 2, 10); // Inserts two 10s at index 1
  cout << "After inserts: ";
  for(auto it : v6) {
    cout << it << " ";
  }
  cout << endl;

  // Other functions
  cout << "Size of v6: " << v6.size() << endl; // Size of vector
  cout << "Capacity of v6: " << v6.capacity() << endl; // Capacity of vector
  cout << "Is v6 empty? " << v6.empty() << endl; // Check if vector is empty
  v6.clear(); // Clears the vector
  cout << "Size of v6 after clear: " << v6.size() << endl;

  return 0;
}