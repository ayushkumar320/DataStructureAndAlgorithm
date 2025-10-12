// Here we will see how to increase size of a dynamic array in C++ that is stored in heap memory
#include <iostream>
using namespace std;

int main()
{
  int oldSize = 5;
  int newSize = 10;
  int *p = new int[oldSize];
  // Assigning values to the array
  for (int i = 0; i < oldSize; i++)
  {
    p[i] = i + 1;
  }
  cout << "Size of Original Array: " << (oldSize * sizeof(int)) << " bytes (" << oldSize << " elements)" << endl;

  // To increase the size, we follow the following steps
  // 1. Create a new pointer with the new required size
  // 2. Copy the elements from the old array to the new array
  // 3. Delete the old array to free up memory
  // 4. Point the old pointer to the new array
  // 5. Set the new pointer to NULL to avoid dangling pointer

  // Step 1:
  int *q = new int[newSize];

  // Step 2:
  for (int i = 0; i < oldSize; i++)
  {
    q[i] = p[i];
  }

  // Step 3:
  delete[] p;

  // Step 4:
  p = q;

  // Step 5:
  q = NULL;

  p[5] = 6;
  p[6] = 7;
  cout << "Size of New Array: " << (newSize * sizeof(int)) << " bytes (" << newSize << " elements)" << endl;
  cout << "Elements of New Array: ";
  for (int i = 0; i < newSize; i++) {
    cout << p[i] << " ";
  }
  return 0;
}