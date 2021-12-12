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

	int n;
	string a;
	cin >> n >> a;
	string b = "1";
	char lastanswer, currentchar;
	int i = 1;
	lastanswer = (a[0] == '0') ? '1' : '2';
	// log(lastanswer)
	while (i < n)
	{
		currentchar = a[i];

		// cout << lastanswer << " " << currentchar << " " << i << endl;

		if (lastanswer == '1' && currentchar == '0')
		{
			b += "0";
			lastanswer = '0'; // Thik
		}
		else if (lastanswer == '0' && currentchar == '1')
		{
			b += "1";
			lastanswer = '2'; // thik
		}
		else if (lastanswer == '2' && currentchar == '0')
		{
			b += "1"; // Thik
			lastanswer = '1';
		}
		else if (lastanswer == '1' && currentchar == '1')
		{
			b += "1";
			lastanswer = '2'; //THik
		}
		else if (lastanswer == '2' && currentchar == '1')
		{
			b += "0";
			lastanswer = '1'; //thik
		}
		else if (lastanswer == '0' && currentchar == '0')
		{
			b += "1";
			lastanswer = '1'; // thik
		}
		i++;

	}

	log(b);

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



