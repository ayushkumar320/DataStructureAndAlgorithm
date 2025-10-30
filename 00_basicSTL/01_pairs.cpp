// Pairs

#include<bits/stdc++.h>
using namespace std;


int main() {
  // Simple pair - It lies inside utility library
  pair <int, int> p = {1, 3};
  
  cout << p.first << " " << p.second << endl;


  // Creating a pair of int and pair
  // We can go more nested and create a lot of complex pairs
  pair <int, pair<int, int>> p2 = {1, {2, 3}};
  cout << p2.second.first << endl;


  // We can also store an array of pairs like
  pair <int, int> arr[] = { {1, 2}, {2, 3}, {4, 5} };
  cout << arr[1].first << endl;

  return 0;
}