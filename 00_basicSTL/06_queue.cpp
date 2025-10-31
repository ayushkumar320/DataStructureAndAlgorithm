#include<bits/stdc++.h>
using namespace std;
void explainPQ();
// Queue follows FIFO (First In First Out) principle
// There are only 4 main functions in queue:
// 1. push() / emplace() - To add an element to the back of the queue
// 2. pop() - To remove the front element from the queue
// 3. front() - To access the front element of the queue
// 4. back() - To access the last element of the queue
// Time complexity for all the above operations is O(1) in regular queue.

int main() {
  queue<int> q;
  q.push(1);        // Pushes element to the back of the queue
  q.emplace(2);     // Similar to push but faster in some cases
  q.push(3);
  q.push(4);
  cout << "Front element: " << q.front() << endl; // Accessing the front element
  q.pop();          // Removes the front element
  cout << "Front element after pop: " << q.front() << endl;
  cout << "Back element: " << q.back() << endl;   // Accessing the last element
  cout << "Size of queue: " << q.size() << endl; // Size of the queue
  cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Check if queue is empty
  explainPQ();
  return 0;
}

// Priority Queue is a special type of queue where elements are ordered based on their priority

void explainPQ() {
  priority_queue<int> pq; // Max-Heap by default
  // The lexicographical order for strings is determined by the ASCII values of characters.
  pq.push(10);
  pq.push(5);
  pq.push(20);
  cout << "Top element in max-heap: " << pq.top() << endl;
  pq.pop();
  cout << "Top element after pop in max-heap: " << pq.top() << endl;

  // We can modify the priority queue to behave like a min-heap
  priority_queue<int, vector<int>, greater<int>> minHeap; // Min-Heap
  minHeap.push(10);
  minHeap.push(5);
  minHeap.push(20);
  cout << "Top element in min-heap: " << minHeap.top() << endl;
  minHeap.pop();
  cout << "Top element after pop in min-heap: " << minHeap.top() << endl;
}

// Time complexity analysis:
// All operations (push, pop, top) in both queue and priority_queue take O(log n) time in the case of priority_queue