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


bool isRegularBacket(string s, int len)
{

	stack<char> st;
	for (int i = 0; i < len; ++i)
	{
		if (st.empty()) {
			st.push(s[i]);
		} else if (st.top() == '(' && s[i] == ')') {
			st.pop();
		}
		else
		{
			st.push(s[i]);
		}
	}

	if (st.size() == 0)
		return true;
	else return false;
}

void solve()
{
	string s1, s2;
	cin >> s1;
	s2 = s1;
	int len = s1.size();

	if (s1[0] == s1[len - 1])
	{
		log("NO");
		return;
	}
	int a = 0 , b = 0 , c = 0;
	char openChar = s1[0], closeChar = s1[len - 1],  X = '-';

	for (int i = 0; i < len; ++i)
	{
		if (s1[i] !=  openChar && s1[i] != closeChar )
		{
			X = s1[i];
			break;
		}
	}

	for (int i = 0; i < len; ++i)
	{
		if (s1[i] ==  openChar ) {
			s1[i] = '(';
			s2[i] = '(';
		} else if (s1[i] ==  closeChar ) {
			s1[i] = ')';
			s2[i] = ')';
		}
		else if (s1[i] ==  X ) {
			s1[i] = '(';
			s2[i] = ')';
		}
	}
	if (isRegularBacket(s1, len))
	{
		log("YES");
	} else if (isRegularBacket(s2, len))
	{
		log("YES");
	} else
	{
		log("NO");
	}


}
int main()
{
	file_i_o();
	int t = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		solve();
	}
	return 0;
}
