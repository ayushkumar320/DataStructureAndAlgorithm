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

void Append(struct Array *arr, int x) {
  if(arr->length < arr->size) {
    arr->A[arr->length++] = x;
  }
}

void Insert(struct Array *arr, int index, int x) {
  if(index >=0 && index <= arr->length && arr->length < arr->size) {
    for(int i = arr->length; i > index; i--) {
      arr->A[i] = arr->A[i - 1];
    }
    arr->A[index] = x;
    arr->length++;
  }
}

void Delete(struct Array *arr, int index) {
  if(index >=0 && index < arr->length) {
    for(int i = index; i < arr->length - 1; i++) {
      arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
  }
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
  Append(&arr1, 10);
  cout << "Elements in array after appending 10\n";
  Display(arr1);

  Insert(&arr1, 2, 15);
  cout << "Elements in array after inserting 15 at index 2\n";
  Display(arr1);

  Delete(&arr1, 3);
  cout << "Elements in array after deleting element at index 3\n";
  Display(arr1);
  delete[] arr1.A;

  return 0;
}