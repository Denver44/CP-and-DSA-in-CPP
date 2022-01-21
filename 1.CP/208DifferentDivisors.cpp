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
// Easy Question Only thing is important any number is formed from 2 to ...
// is 2^a * 3^b * 5^c .... using this we solve this problem
// Here we find two smallest prime number and return the product of them.

// ---- MAIN CONSTRAINT difference between any two divisors of a is at least d.
// So we have choosen a Two smallest prime it will have exactly 4 divisor 1 and iteslf and other two are smallet prime number

vector<bool> prime(1000000, true);
void solve()
{

	ll d;
	cin >> d;
	int b, c;
	int i = 1 + d;
	while (prime[i] == false)
	{
		i++;
	}
	b = i;

	i = b + d;
	while (prime[i] == false)
	{
		i++;
	}
	c = i;
	log(b * c);
}

int main()
{
	file_i_o();
	for (int i = 2; i * i <= 1000000; ++i)
	{
		if (prime[i] == true)
		{
			for (int j = i * i; j <= 1000000; j += i)
			{
				prime[j] = false;
			}
		}

	}
	prime[0] = false;
	prime[1] = false;

	int t = 1, i = 0;
	cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}

