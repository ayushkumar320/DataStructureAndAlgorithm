// Here we will see how we can declare static and dynamic arrays in C++
#include<iostream>
using namespace std;

// Static arrays - Stored in stack memory
// Dynamic arrays - Stored in heap memory, and its size can be changed during runtime

int main() {
  // Static array declaration
  int staticArr[5] = {1, 2, 3, 4, 5};
  cout << "Static Array Elements: ";
  for(int i = 0; i < 5; i++) {
    cout << staticArr[i] << " ";
  }
  cout << endl;

  // Dynamic array declaration
  int size;
  cout << "Enter size of dynamic array: ";
  cin >> size;

  // Allocating memory for dynamic array
  // here pointer is used to store the base address of the array and is acting like array name
  int* dynamicArr = new int[size];

  cout << "Enter the elements of dynamic array\n";
  // Initializing dynamic array 
  for(int i = 0; i < size; i++) {
    cin >> dynamicArr[i];
  }

  cout << "Dynamic Array Elements: ";
  for(int i = 0; i < size; i++) {
    cout << dynamicArr[i] << " ";
  }
  cout << endl;

  // Deallocating memory
  delete[] dynamicArr;

  return 0;
}