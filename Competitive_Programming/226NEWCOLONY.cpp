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

// Here the N and T are 100 as upper limit so BBruteforce can be applied.

void solve()
{
	int nm, nb;
	cin >> nm >> nb;
	vector<int> arr(nm);
	for (auto &i : arr)
		cin >> i;

	int p = 0;
	while (p < nm && nb > 0 )
	{
		int stop = 0;
		for (int i = 0 ; i < nm - 1; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				arr[i]++;
				p = i ;
				nb--;
				stop = 1;
				break;
			}
		}
		if (stop)
		{
			continue;
		}
		else
		{
			log(-1)
			return;
		}
	}

	log(p + 1);

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

