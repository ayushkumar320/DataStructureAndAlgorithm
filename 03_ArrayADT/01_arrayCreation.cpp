#include<iostream>
using namespace std;

struct Array {
  int * A;
  int size;
  int length;
};

// Display function to print elements of the array

void Display(struct Array arr) {
  cout << "Elements are: ";
  for(int i = 0; i < arr.length; i++) {
    cout << arr.A[i] << " ";
  }
  cout << endl;
}


int main() {
  // Creating an array of size 10
  // 1. Static Array in Stack Memory
  int arr[10];

  // 2. Dynamic Array in Heap Memory
  int * ar;
  ar = new int[10];
  
  // Using Struct to create an Array ADT
  struct Array arr1;
  cout << "Enter the size of an array: ";
  cin >> arr1.size;

  arr1.A = new int[arr1.size];
  arr1.length = 0;

  // Inserting elements into the array
  int n;
  cout << "Enter number of elements you want to insert: ";
  cin >> n;
  cout << "Enter the elements: ";
  for(int i = 0; i < n; i++) {
    cin >> arr1.A[i];
    arr1.length++;
  }

  cout << "Elements in array are\n";
  Display(arr1);

  return 0;
}