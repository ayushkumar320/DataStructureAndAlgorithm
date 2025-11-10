#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high) {
  int left = low;
  int right = high;
  while(low < mid && right < high) {
    
  }
}


void mergeSort(vector<int> &nums, int low, int high) {
  if(low >= high) return;
  int mid = (low + high) / 2;
  mergeSort(nums, low, mid);
  mergeSort(nums, mid+1, high);
  merge(nums, low, mid, high);
}


int main() {
  return 0;
}