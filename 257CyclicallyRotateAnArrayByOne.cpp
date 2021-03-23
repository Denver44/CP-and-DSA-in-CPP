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
// This is good But always use reverse function to rotate the array
// Time Complexity is O(N);
// Space Complexity is O(1)
void rotate(int arr[], int n)
{
  int lastStored = arr[0]; // 1

  for (int i = 1; i < n; i++)
  {
    int newStoredValue = arr[i];
    arr[i] = lastStored;
    lastStored = newStoredValue;
  }
  arr[0] = lastStored;
}

void solve()
{
  int a[] = {1, 2, 3, 4, 5};
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  rotate(a, n);
  cout << endl;
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