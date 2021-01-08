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
	int n, h;
	cin >> n >> h;
	vector<int> arr(n);
	for (auto &i : arr)
		cin >> i;
	int sum = accumulate(arr.begin(), arr.end() , 0);
	if (sum < (h * 2))
	{	log(-1)
		return;
	}
	else if (sum == (h * 2))
	{
		log(n)
		return;
	}
	else
	{
		int index = 0;
		sort(arr.rbegin(), arr.rend()); // Sorted in Descending Order.
		int fTower = 0;
		int count  = 0;
		while (fTower < h  && index < arr.size() )
		{
			int t = -1;
			fTower += arr[index];
			// log(fTower);
			if (fTower >= h )
			{index++; break;}
			int j = index + 1;
			while (arr[j] >= (h - fTower)  && j < arr.size())
			{
				t = 1;
				j++;
			}
			if (t == 1)
			{	swap(arr[index + 1], arr[--j]);
				fTower += arr[index + 1];
			}
			else
				fTower += arr[index + 1];
			index += 2;
			// log(fTower);

		}
		// int i;
		// loop(i, 0, arr.size())
		// cout << arr[i] << " ";
		// cout << endl;
		int sTower = 0;
		// log("-------------------")
		while ( sTower < h && index < arr.size() )
		{
			int t = -1;
			sTower += arr[index];
			// log(sTower);

			if ( sTower >= h )
			{index++; break;}
			int j = index + 1;
			while (arr[j] >= (h - sTower) && j < arr.size())
			{
				t = 1;
				j++;
			}
			if (t == 1)
			{	swap(arr[index + 1], arr[--j]);
				sTower += arr[index + 1];
			}
			else
			{sTower += arr[index + 1];}

			index += 2;
			// log(sTower);

		}
		log(index);

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

