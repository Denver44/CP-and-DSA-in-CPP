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

void solve()
{

	int destX, destY;
	cin >> destX >> destY;

	string s;
	cin >> s;
	int R = 0, U = 0, L = 0, D = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == 'R' )
			R++;
		else if (s[i]  == 'L')
			L++;
		else if (s[i] == 'U')
			U++;
		else
			D++;
	}


	if (destX >= 0 && destY >= 0) {

		if (R >= abs(destX) && U >= abs(destY)) {
			log("YES");
		}
		else
		{
			log("NO");
		}

	}
	else if (destX >= 0 && destY <= 0) {

		if (R >= abs(destX) && D >= abs(destY)) {
			log("YES");
		}
		else
		{
			log("NO");
		}

	}
	else if (destX <= 0 && destY >= 0) {

		if (L >= abs(destX) && U >= abs(destY)) {
			log("YES");
		}
		else
		{
			log("NO");
		}

	}
	else  {

		if (L >= abs(destX) && D >= abs(destY)) {
			log("YES");
		}
		else
		{
			log("NO");
		}

	}


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
