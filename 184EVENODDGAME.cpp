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
	cin >> n;
	int sumeven = 0, sumodd = 0;
	vector<ll> arr(n);
	for (auto &i : arr)
	{
		cin >> i;
	}
	sort(arr.rbegin(), arr.rend());
	int player = 1;
	for (int i = 0; i < arr.size(); ++i)
	{
		// log(player)
		if (player)
		{
			if (arr[i] % 2 == 0)
				sumeven += arr[i];
		}
		else
		{	if (arr[i] % 2 == 1)
				sumodd += arr[i];
		}
		player ^= 1;
	}
	log(sumeven)
	log(sumodd)

	if (sumeven > sumodd)
	{
		log("Alice");
	}
	else if (sumeven < sumodd)
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




// void solve()
// {

// 	int n;
// 	cin >> n;
// 	int counteven = 0, countodd = 0;
// 	int sumeven = 0, sumodd = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int b; cin >> b;
// 		if (b % 2 == 0)
// 		{	counteven++;
// 			sumeven += b;
// 		}
// 		else {
// 			countodd++;
// 			sumodd += b;
// 		}
// 	}
// 	if (counteven == 0 && countodd >= 2)
// 	{
// 		log("Bob");
// 	}
// 	else if (( counteven < countodd) && (countodd - counteven) >= 2  && sumeven < sumodd)
// 	{
// 		log("Bob");
// 	}
// 	else if ( counteven == countodd && sumeven <= sumodd  )
// 	{
// 		log("Tie");
// 	}
// 	else if ( (counteven < countodd) && (sumeven < sumodd) && ((countodd - counteven ) == 1) )
// 	{
// 		log("Tie");
// 	}
// 	else if (countodd == 0 && counteven >= 1)
// 	{
// 		log("Alice")
// 	}
// 	else
// 	{
// 		log("Alice");
// 	}

// }