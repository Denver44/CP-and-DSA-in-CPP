#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// – O(n) calls to MAX-HEAPIFY,  – Each of which takes O(log n) – Complexity: O(n log n).
// Here the Time Complexity is O(Nlogk);

// Here we have N elements and building a heap of Size k so to heapify it take log(k) so total Complexity is O(Nlogk)
int kthSmallest(int arr[], int l, int r, int k)
{
  priority_queue<int> pq;
  for (int i = l; i <= r; i++)
  {
    pq.push(arr[i]);
    if (pq.size() > k)
      pq.pop();
  }
  return pq.top();
}

int main()
{

  int t = 1;
  for (int i = 0; i < t; i++)
  {
    solve();
  }
  return 0;
}
