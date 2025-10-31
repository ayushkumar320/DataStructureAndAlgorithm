#include<bits/stdc++.h>
using namespace std;

// Set stores in sorted order and contains only unique elements
// Time complexity analysis: O(log n) for insert, erase, and find operations
int main() {
  set<int> st;
  st.insert(5);        // Inserts element 5
  st.emplace(3);      // Similar to insert but faster in some cases
  st.insert(7);
  st.insert(1);
  cout << "Elements in the set: ";
  for (auto i : st) {
    cout << i << " ";  // Elements will be printed in sorted order: 1 3 5 7
  }
  cout << endl;
  
  // Iterators

  auto it = st.find(3); // Finds the element 3 and points to it (a kind of pointer)
  auto it2 = st.find(10); // Element not found, points to st.end()

  st.erase(5); // Removes element 5 and maintains the sorted order
  // Or
  st.erase(it); // Removes the element pointed by iterator it

  int cnt = st.count(7); // Returns 1 if element 7 is present, else returns 0
  

  return 0;
}

void explainMultiSet() {
  // Everything is same as set
  // Only stores suplicate elements also

  multiset<int> ms;
  ms.insert(5);
  ms.insert(5);
  ms.insert(5);

  ms.erase(5); // Removes all occurrences of 5

  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  int cnt = ms.count(1); // cnt will be 3

  // Only a single one erased
  ms.erase(ms.find(1)); // Now cnt will be 2
}


void explainUSet() {
  // Unordered set stores elements in random order
  // Average time complexity analysis: O(1) for insert, erase, and find operations
  // Worst case time complexity: O(n)
  // Worst case happens very rarely due to hash collisions

  unordered_set<int> ust;
  ust.insert(5);
  ust.insert(3);
  ust.insert(7);
  ust.insert(1);

  cout << "Elements in the unordered set: ";
  for (auto i : ust) {
    cout << i << " "; // Elements may be printed in any order
  }
  cout << endl;
}