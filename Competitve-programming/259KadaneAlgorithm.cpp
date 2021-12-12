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
// here using Dynamic programming Question is Solved
// Time complexity : O(N)
// Space complexity : O(1)
int maxSubarraySum(int arr[], int n)
{

  int maxSum = arr[0];
  int currSum = arr[0];

  for (int i = 1; i < n; i++)
  {
    currSum += arr[i];
    if (currSum < arr[i])
      currSum = arr[i];

    maxSum = max(maxSum, currSum);
  }

  return maxSum;
}
void solve()
{
  int n;
  cin >> n;
  int *a = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << maxSubarraySum(a, n) << endl;
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