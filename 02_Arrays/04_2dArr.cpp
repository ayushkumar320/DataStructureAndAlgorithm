// 2D arrays are arrays which store data in rows and column form

#include<iostream>
using namespace std;

int main() {
  
  // We can store 2D arrays in 3 ways:
  // 1. Everything in stack memory (static memory allocation)
  // 2. Array of pointers (partly static and partly dynamic memory allocation)
  // 3. Double pointer (completely dynamic memory allocation)

  // 1. Everything in stack memory (static memory allocation)
  int arr[3][4] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  
  // 2. Array of pointers (partly static and partly dynamic memory allocation)
  int* A[3]; // Array of 3 integer pointers
  A[0] = new int[4]; // First row
  A[1] = new int[4]; // Second row
  A[2] = new int[4]; // Third row
  // Assigning values to the array of pointers
  A[1][2] = 15;

  // 3. Double pointer (completely dynamic memory allocation)
  int** P; 
  P = new int* [3] ; // Array of 3 integer pointers, here we use * because each pointer is of type int*
  P[0] = new int[4]; // First row
  P[1] = new int[4]; // Second row
  P[2] = new int[4]; // Third row
  return 0;
}