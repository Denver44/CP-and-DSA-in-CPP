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

// Time and Space Complexity is O(N); N is lenght of string
string reverseStringRecursive(string str)
{
  if (str[0] == '\0')
    return "";
  return reverseStringRecursive(str.substr(1)) + str[0];
}

void reverseString2(string &str, int start, int end)
{
  if (start > end)
    return;
  swap(str[start], str[end]);
  reverseString2(str, ++start, --end);
}

// Time Complexity is O(n) and Space complexity is O(1)
void reverseString1(string &str, int start, int end)
{
  while (start < end)
    swap(str[start++], str[end--]);
}


void solve()
{
  string s1 = "ABCDE";
  log(s1);
  log(reverseStringRecursive(s1));
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

