#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
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

// Simple Baisc Question we just need to observe the string.
// if a string is like 10100 and here k is given 2 that means the numbers of zero between two consecutive 1 mus be at most 2.
// We can do right circular to the string to make the string valid
// so first we find the total number of zero present between two one and also total number of zero from start and end till they get first '1'  and vice-versa.
// if the total number of zero between consective one is more than k
// of the total number of ero from start + end.
// so if we got any cnt of number of zeros more than k for more than 1 time we cannot make a valid string then
void solve()
{
	vector<int> v;
	int temp = 0, count0 = 0, i = 0, n, k;
	string s;
	cin >> n >> k >> s;
	while (s[i] != '1') {
		i++;
		temp++;
	}
	for (i++;  i < n; ++i)
	{
		if (s[i] == '0')
			count0++;
		else
		{
			v.push_back(count0);
			count0 = 0;
		}
	}
	temp += count0;
	v.push_back(temp);
	int cnt = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] > k) {
			cnt++;
		}
		if (cnt > 1)
		{
			log("NO");
			return;
		}

	}
	log("YES");
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