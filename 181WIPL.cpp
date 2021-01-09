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
void helper1(int h, vector<int> & arr)
{

	int index = 0, fTower = 0, count  = 0;
	while (fTower < h  && index < arr.size() )
	{
		int t = -1;
		fTower += arr[index];
		if (fTower >= h ) {
			index++;
			break;
		}
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
	}

	int sTower = 0;
	while ( sTower < h && index < arr.size() )
	{
		int t = -1;
		sTower += arr[index];
		if ( sTower >= h ) {
			index++;
			break;
		}
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
	}
	log(index);
}

bool helper(int target, vector<int> & arr)
{
	vector<vector<bool>>dp (arr.size() + 1, vector<bool>(target + 1, false));
	for (int i = 0; i < dp.size(); ++i)
		dp[i][0] = true;

	int n = arr.size();
	for (int i = 1; i <= n ; ++i)
	{
		for (int j = 1; j <= target; ++j)
		{
			if (j >= arr[i - 1])
			{
				dp[i][j] = (dp[i - 1][j] || dp[i - 1][j - arr[i - 1]]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return dp[n][target];
}

void solve()
{
	int n, h;
	cin >> n >> h;
	vector<int> arr(n);
	for (auto &i : arr)
		cin >> i;
	int sum = accumulate(arr.begin(), arr.end() , 0);
	sort(arr.rbegin(), arr.rend());
	if (sum < (h * 2))
	{	log(-1)
		return;
	}
	else if ( arr[0] > h)
	{
		helper1( h, arr);
		return;

	}
	else
	{
		int index = 0;
		int sum = 0;
		vector<int> arr1;
		while (index < n && sum < (h * 2))
		{
			arr1.push_back(arr[index]);
			sum += arr[index++];
		}
		// log(sum);
		bool flag1 = helper(h , arr1);
		while (index < n)
		{
			if (flag1 == true) {
				log(index);
				return;
			}
			else if (flag1 == false)
			{
				// log("Hello")
				arr1.push_back(arr[index++]);
				int i;
				loop( i, 0, arr1.size())
				log(arr1[i]);
				flag1 = helper(h , arr1);
			}

		}
		if (flag1 == false) {
			log(-1);
		}
		else {
			log(index);
		}
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

