#include<bits/stdc++.h>
using namespace std;

int main() {
  map<int, int>mpp;
  // Map is a container which stores data in key-value pairs
  map<int, pair<int, int>>mpp2;
  map<pair<int, int>, int>mpp3;

  // Key is always unique in map

  mpp[1] = 2;
  mpp2[1] = {2, 3};
  mpp3[{1, 2}] = 3;

  mpp.insert({3, 1});
  mpp.emplace(4, 1);

  for(auto i : mpp) {
    cout << i.first << " " << i.second << endl;
  }
  cout << mpp[1] << endl; // Outputs 2
  return 0;
}

void multiMapExample() {
  // MultiMap allows duplicate keys
  multimap<int, int>mmpp;
  mmpp.insert({1, 2});
  mmpp.insert({1, 3});
  mmpp.insert({2, 4});

  for(auto i : mmpp) {
    cout << i.first << " " << i.second << endl;
  }
}

void unorderedMapExample() {
  // Unordered map stores data in key-value pairs in random order
  // Average time complexity analysis: O(1) for insert, erase, and find operations
  // Worst case time complexity: O(n)
  // Worst case happens very rarely due to hash collisions

  unordered_map<int, int>ump;
  ump[1] = 2;
  ump.insert({3, 4});
  ump.emplace(5, 6);

  for(auto i : ump) {
    cout << i.first << " " << i.second << endl;
  }
}
// For better complexity we use unordered_map when order does not matter