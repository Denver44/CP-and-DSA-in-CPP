#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define loop(i,a,b) for(ll i = a; i < b; i++)
#define looprev(i,a,b) for(ll i = a-1; i >=b; i--)
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

// Time Complexity is O(N^2) using DYnbamic programming but we can Solve this using O(N).

class Solution {
public:
  int minJumps2(int arr[], int n) {

    if (arr[0] == 0)
      return -1;
    int reachable = 0, steps;
    for (int i = 0; i < n; ++i)
    {
      if (reachable < i)
        return -1;
      int newreachable = max(reachable , nums[i] + i);
      if (newreachable != reachable) {
        steps++;
        reachable = newreachable;
      }
    }

    return steps;

  }
}

void solve()
{

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

