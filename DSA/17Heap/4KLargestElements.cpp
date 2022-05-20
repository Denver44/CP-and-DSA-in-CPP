#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// Always make min-heap when we sked for largest
// so the lowest element will be on top.
// so as we got better than top we will replace it with top.
// thats why we use min heap.
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
    for (int i = 0; i < n; i++)
    {

        if (pq.empty())
        {
            pq.push(arr[i]);
        }
        else if (pq.size() < k)
        {
            pq.push(arr[i]);
        }
        else if (pq.top() < arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}