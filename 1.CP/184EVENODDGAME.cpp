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
// Here we as Alice always Moves first so if there is not even number who is Highest in the array he will pick the odd number which is highest int array so bob it dint get that point.
// So using this startergy we sort the array first and Alice picks first if ist even then add to ans else no one get points So wheb Bob Chance Come it will subtract that number from global ans.
// If the GLobal Answer is Zero it means it is Tie.
// If its Negative means Bobs Wins
// If its Positive means Alice win

void solve()
{

	ll n, ans = 0;
	cin >> n;
	vector<ll> arr(n);
	for (auto &i : arr)
		cin >> i;
	sort(arr.rbegin(), arr.rend());
	for (int i = 0; i < arr.size(); ++i)
	{
		if (i % 2 == 0)
		{
			if (arr[i] % 2 == 0)
				ans += arr[i];
		}
		else
		{	if (arr[i] % 2 == 1)
				ans -= arr[i];
		}
	}
	if (ans > 0)
	{
		log("Alice");
	}
	else if (ans < 0)
	{
		log("Bob");
	}
	else
	{
		log("Tie");
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


