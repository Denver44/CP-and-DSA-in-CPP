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
	int a, b, c;
	cin >> a >> b >> c;

	if (a == (b + c)) {
		log("YES")
	}
	else if (b == (a + c)) {
		log("YES")
	} else if (c == (a + b)) {
		log("YES")
	} else {
		log("NO")
	}

}


int main()
{
	file_i_o();
	int t = 5, i = 0;
	cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}


