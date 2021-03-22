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


// Time Complexity is O(N);
pp getMinMax(int *arr, int i, int n) // RECURSIVE
{
  if (i == n)
  {
    return {arr[i], arr[i]};
  }

  pp newpair = getMinMax(arr, i + 1, n);

  return {max(newpair.first, arr[i]), min(newpair.second, arr[i])};
}

pp getMinMax2(int *arr, int i, int n) // ITERATIVE
{
  if (i == 1)
  {
    return {arr[i], arr[i]};
  }
  else if (n == 2)
  {
    return {max(arr[0], arr[1]), min(arr[0], arr[1])};
  }
  else
  {

    pp newpair = {INT_MIN, INT_MAX};

    for (int i = 0; i < n; i++)
    {
      newpair.first = max(newpair.first, arr[i]);
      newpair.second = min(newpair.second, arr[i]);
    }

    return newpair;
  }
}

void solve()
{
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  pp ans = getMinMax(arr, 0, n - 1);
  pp ans2 = getMinMax2(arr, 0, n);

  cout << "MAX " << ans.first << " MIN " << ans.second << endl;
  cout << "MAX " << ans2.first << " MIN " << ans2.second << endl;
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

