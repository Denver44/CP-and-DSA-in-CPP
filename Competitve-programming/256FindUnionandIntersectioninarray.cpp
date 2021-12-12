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
// using the map :-  Time complexity is O(N) because map doesnt contain duplicates key.
int doUnion(int a[], int n, int b[], int m)
{
  unordered_map<int, int> m1;
  for (int i = 0; i < n; i++)
  {
    m1[a[i]] = 1;
  }
  for (int i = 0; i < m; i++)
  {
    m1[b[i]] = 1;
  }
  return m1.size();
}

int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
  unordered_map<int, int> m1;
  int size = 0;
  for (int i = 0; i < n; i++)
  {
    m1[a[i]] = 1;
  }
  for (int i = 0; i < m; i++)
  {
    if (m1.count(b[i]) > 0)
    {
      size++;
      m1.erase(b[i]);
    }
  }
  return size;
}
void solve()
{
  int a[] = {1, 2, 3, 3, 3};
  int b[] = {1, 2, 3};
  int n = 5, m = 3;
  cout << doUnion(a, n, b, m) << endl;
  cout << NumberofElementsInIntersection(a, b, n, m);
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