#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define loop(i,a,b) for(ll i = a; i < b; i++)
#define looprev(i,a,b) for(ll i = a-1; i >=b; i--)
#define pp pair<int,int>
void file_i_o()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

// As we have to maintain the order and Time and Space Complexity should be O(1).
void segregateElements(int arr[], int n)
{
  queue<int> q1, q2;
  for (int i = 0; i < n; i++) // O(N)
  {
    if (arr[i] < 0)
      q2.push(arr[i]); // O(N/2)
    else
      q1.push(arr[i]); // O(N/2)
  }
  int i = 0; //O(N)
  while (!q1.empty())
  {
    int a = q1.front();
    arr[i++] = a;
    q1.pop();
  }
  while (!q2.empty())
  {
    int a = q2.front();
    arr[i++] = a;
    q2.pop();
  }
}

void segregateElements2(int arr[], int n)
{
  int arr1[n];
  int j = 0;
  for (int i = 0; i < n; i++) // O(N)
  {
    if (arr[i] >= 0)
      arr1[j++] = arr[i];
  }
  for (int i = 0; i < n; i++) // O(N)
  {
    if (arr[i] < 0)
      arr1[j++] = arr[i];
  }

  memcpy(arr, arr1, sizeof(arr1));
}

void solve()
{
  int a[] = {1, -1, 3, 2, -7, -5, 11, 6};
  int n = 8;
  segregateElements2(a, n);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
int main()
{
  file_i_o();
  int t = 1;
  for (int i = 0; i < t; i++)
  {
    solve();
  }
  return 0;
}