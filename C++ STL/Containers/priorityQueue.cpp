#include <bits/stdc++.h>
using namespace std;

// A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue.
// In C++ STL, the top element is always the greatest by default. We can also change it to the smallest element at the top.

void explainPriorityQueue()
{
      priority_queue<int> pq;
      pq.push(1);
      pq.push(5);
      pq.push(10);
      pq.push(3); 
      cout<<pq.top();   //in priorityqueue greatest number is always maintained at top
                        //it is internally represented by trees
}


// How to create a min heap for the priority queue?
// priority_queue <int, vector<int>, greater<int>> gq;
// where,

// ‘int’ is the type of elements you want to store in the priority queue. In this case, it’s an integer. You can replace int with any other data type you need.

// ‘vector<int>’ is the type of internal container used to store these elements. std::priority_queue is not a container in itself but a container adopter. It wraps other containers. In this example, we’re using a vector, but you could choose a different container that supports front(), push_back(), and pop_back() methods.

// ‘greater<int>‘ is a custom comparison function. This determines how the elements are ordered within the priority queue. In this specific example, greater<int> sets up a min-heap. It means that the smallest element will be at the top of the queue.

// In the case of max heap, we didn’t have to specify them as the default values for these are already suitable for max heap.

//Time complexity : 
// Push,Pop - O(log n)
//Top - O(1)

int main()
{
   explainPriorityQueue();
return 0;
}