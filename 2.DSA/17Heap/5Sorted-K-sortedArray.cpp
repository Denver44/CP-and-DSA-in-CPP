#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int k;
    cin >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i <= k; i++)
    {
        pq.push(arr[i]); // Here we make a window of k
    }
    for (int i = k + 1; i < n; i++)
    {
        cout << pq.top() << endl; // print top
        pq.pop();                 // remove one from window
        pq.push(arr[i]);          // add one to window
    }
    while (pq.size() > 0)
    {
        cout << pq.top() << endl; // if pq is still not empty print all the rest element.
        pq.pop();
    }

    return 0;
}