#include <iostream>
#include <queue>
using namespace std;

void showMaxheap(priority_queue<int> pq)
{

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

void maxHeap()
{
    priority_queue<int> maxHeap;
    maxHeap.push(7);
    maxHeap.push(-3);
    maxHeap.push(10);
    maxHeap.push(8);

    cout << maxHeap.size() << " ";
    cout << maxHeap.top() << " ";

    showMaxheap(maxHeap);

    while (maxHeap.empty() == false)
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
}

void showMinheap(priority_queue<int, vector<int>, greater<int>> pq)
{

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}
void minHeap()
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(7);
    minHeap.push(-3);
    minHeap.push(10);
    minHeap.push(8);
    cout << minHeap.size() << " ";
    cout << minHeap.top() << " ";

    showMinheap(minHeap);

    while (minHeap.empty() == false)
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
}

int main()
{
    maxHeap();
    minHeap();
}
