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
// Here we have to display the Highest Number On the Panel
// For this the left most be 9 so everytime we stop the second panel at 8 and we will get our answer.

void solve()
{
	char arr[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	ll n;
	cin >> n;
	if (n == 1) {
		log(9)
	}
	else if (n == 2) {
		log(98)
	}
	else if (n == 3) {
		log(989)
	}
	else {
		string str = "989";
		int i = 2;
		while (i < n - 1)
		{
			int a = (8 + i) % 10; // As we have Only 10 characters so we loop through that the Charcter One by one dipslay it on panel.
			str += arr[a];
			i++;
		}
		log(str);
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



