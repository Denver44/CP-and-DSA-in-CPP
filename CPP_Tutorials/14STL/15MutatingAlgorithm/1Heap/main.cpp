#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void maxHeap()
{
    vector<int> v = {15, 6, 7, 12, 30}; // Creating a vector
    make_heap(v.begin(), v.end());      // Converting the vector into MAX_HEAP
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.front() << " ";
        pop_heap(v.begin(), v.end()); // They dont remove the element they just put the max element to the last to the vector. so vector size is not changed.
    }
    cout << endl;
}

void minHeap()
{
    vector<int> v = {15, 6, 7, 12, 30};            // Creating a vector
    make_heap(v.begin(), v.end(), greater<int>()); // Converting the vector into  MIN_HEAP
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.front() << " ";
        pop_heap(v.begin(), v.end(), greater<int>());
    }
    cout << endl;
}

void makePopAndPushHeap()
{

    vector<int> v = {15, 6, 7, 12, 30};            // Creating a vector
    make_heap(v.begin(), v.end(), greater<int>()); // Converting the vector into MIN_HEAP
    cout << v.front() << endl;                     // Printing the minimum element
    pop_heap(v.begin(), v.end(), greater<int>());  // Removing the min element from the heap
    cout << v.front() << endl;                     // Printing the min element in the remaining heap
    v[4] = 2;                                      // Overwriting the removed element by 2
    push_heap(v.begin(), v.end(), greater<int>()); // Pushing the element into the heap Moving the minimum element to the root
    cout << v.front() << endl;
}

void makeAndSortHeap()
{

    vector<int> v = {15, 6, 7, 12, 30}; // Creating a vector

    make_heap(v.begin(), v.end(), greater<int>()); // Converting the vector into MIN_HEAP
    for (int x : v)
        cout << x << " ";
    cout << endl;

    sort_heap(v.begin(), v.end(), greater<int>()); // Sorts the heap in decreasing order
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    maxHeap();
    minHeap();
    makePopAndPushHeap();
    makeAndSortHeap();
    return 0;
}