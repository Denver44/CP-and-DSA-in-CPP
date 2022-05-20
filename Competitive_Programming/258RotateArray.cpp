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

// The Best Way to Rotate array is To reverse the array.
// Time complexity : O(N )
void rotate(int arr[], int n, int d)
{
  d = d % n;
  reverse(arr, arr + d);
  reverse(arr + d, arr + n);
  reverse(arr, arr + n);
}

void solve()
{
  int n, d;
  cin >> n >> d;
  int *a = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  rotate(a, n, d);
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