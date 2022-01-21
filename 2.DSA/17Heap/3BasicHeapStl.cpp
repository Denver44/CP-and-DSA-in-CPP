#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// priority_queue supports a constructor that requires two extra arguments to make it min - heap.
// The third parameter, ‘Comparison Type’ can either be a function or factor(aka function object) that must have bool as return -type and must have 2 arguments.
int main()
{
    priority_queue<int, vector<int>, greater<int>> asec;
    vector<int> arr{55, 88, 44, 1, 6, 7, 33, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        asec.push(arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        cout << asec.top() << endl;
        asec.pop();
    }
    cout << endl;
    priority_queue<int, vector<int>, less<int>> desc;
    for (int i = 0; i < arr.size(); i++)
    {
        desc.push(arr[i]); // O(logn)
    }
    for (int i = 0; i < 8; i++)
    {
        cout << desc.top() << endl; // O(1)
        desc.pop();
    }

    return 0;
}