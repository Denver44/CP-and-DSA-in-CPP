#include <bits/stdc++.h>
using namespace std;
#define log(a) cout<<(a)<<endl;
#define ll long long;
#define ull unsigned long long;
#define v vector<ll>
#define loop(i,a,b) for(int i = a; i <=b; i++)
#define looprev(i,a,b) for(int i = a; i >=b; i--)


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

// In this problem we have to arrange the sequence in  such way that we get max answer,
// The sequence must be right first index should be first to ist second index elemnt ans same fo all this.
// Same for the Blue Sequence.
// if sum is negative then return 0.
void solve()
{
	int nr; cin >> nr;
	vector<int> red(nr);
	int sum1 = 0; int max1 = 0;
	for (int i = 0 ; i < red.size(); i++)
	{
		cin >> red[i];
		sum1 += red[i];
		max1 = max(max1, sum1);
	}
	int nb; cin >> nb;
	vector<int> blue(nb);
	int sum2 = 0; int max2 = 0;
	for (int i = 0 ; i < blue.size(); i++)
	{
		cin >> blue[i];
		sum2 += blue[i];
		max2 = max(max2, sum2);
	}
	log(max1 + max2)

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

