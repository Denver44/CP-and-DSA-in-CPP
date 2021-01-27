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
// Here we have have given n we have to check weather the n has odd divisor or not if it has then return true.
// so if number is power is of 2 thats means it will be never have odd divisor.
// and here we have to check the at leats one divisor so divisor arr prime number only and all prime numbers are odd except 2 is even prime number so if number is power of 2 then it will never have odd divisor else every one will have at least one odd divisor.

void solve()
{
	ull n;
	cin >> n;
	if ( (n & (n - 1)) == 0) {
		log("NO");
	}
	else {
		log("YES");
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

