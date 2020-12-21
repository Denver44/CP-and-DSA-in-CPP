#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;

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
	ull n;
	cin >> n;
	while (true)
	{
		ull a = n;
		bool flag1 = false;
		while (a)
		{

			ull rem = (a % 10);
			if (rem == 0)
			{
				a = a / 10;
				continue;
			}
			if (n % rem != 0)
			{
				flag1 = true;
				break;
			}
			else
				a /= 10;
		}
		if (flag1)
		{
			n++;
			a = n;
		}
		else
		{
			cout << n << endl;
			break;
		}
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