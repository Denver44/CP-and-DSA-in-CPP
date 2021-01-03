#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define v vector<int>
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


class Solution {
public:
	bool isValid(string s) {
		if (s[0] == ')' || s[0] == ']' || s[0] == '}') // if at start only there is closed Bracket then it is obvious it will be false.
			return false;

		int SIZE = s.size();
		stack<char> st;
		for (int i = 0; i < SIZE; ++i)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
				st.push(s[i]);
			else if (s[i] == ')' && !st.empty())
			{
				if (st.top() == '(')
					st.pop();
				else
					return false;
			}
			else if (s[i] == ']' && !st.empty())
			{
				if (st.top() == '[')
					st.pop();
				else
					return false;
			}
			else if (s[i] == '}' && !st.empty())
			{
				if (st.top() == '{')
					st.pop();
				else
					return false;
			}
			else // if '] || } || ) ' and the stack is empty so this is also false.
				return false;
		}

		return (st.size() == 0) ? true : false;
	}
};


void solve()
{

}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}
