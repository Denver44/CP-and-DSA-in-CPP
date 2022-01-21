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
// In this Question we have given n and k.
// We have to return a Permuation p.
// We have to create a Sequence of b which is lexiographically maximum but the Number of Inversion must be less than a.
// The Inversion means i <j but a[i] > a[j]
// So we cannot take out the permautaion and sort in dec odere to get Lexicogrphically maximum B it will have more inversion thn a.


void solve()
{
	int n, k, i = 1, count = 0;
	cin >> n >> k;
	vector<int> a, p;
	for (; i <= k; ++i)
	{
		a.push_back(i);
		count++;
	}
	i = k - 1;
	while (count < n)
	{
		a.push_back(i--);
		count++;
	}

	if ( n == k) { // then the permuattaion will be same as n.
		loop(i, 0, a.size())
		{
			cout << a[i] << " ";
		}
		cout << endl;
		return;
	}
	else
	{
		// The permation from 1 to k get reverse from end from position last index - (n-k+1)
		int x = n - k + 1;
		loop(i, 0, k)
		{
			p.push_back(i + 1);
		}
		auto i = p.end() - x;
		reverse(i, p.end());
	}
	loop(i, 0, p.size())
	{
		cout << p[i] << " ";
	}
	cout << endl;
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

