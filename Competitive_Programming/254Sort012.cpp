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

// Here weh have to sort an array Which have values 0 1 and 2 without using Sorting we have to sort this O(N) time and in O(1)
// We have used pivot technique which we used in quick sort.
void sort012(int arr[], int n)
{
  int i = 0, j = 0, k = n - 1;
  while (i <= k)
  {
    if (arr[i] == 1)
      i++;
    else if (arr[i] == 2)
      swap(arr[i], arr[k--]);
    else
      swap(arr[i++], arr[j++]);
  }
}
void solve()
{
  int a[] = {2, 0, 1, 0, 1, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0};
  int n = 18;
  sort012(a, n);
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

