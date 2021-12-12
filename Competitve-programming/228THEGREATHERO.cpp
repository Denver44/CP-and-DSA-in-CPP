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
	ll heroPower, heroHealth, nMonster;
	cin >> heroPower >> heroHealth >> nMonster;
	vector<ll> monsterPower, monsterHealth;

	ll highest = -1, pos = -1;
	for (int i = 0; i < nMonster; ++i)
	{
		int a; cin >> a;
		monsterPower.push_back(a);
		if ( a > highest) {
			highest = a;
			pos = i;
		}
	}
	for (int i = 0; i < nMonster; ++i)
	{
		int a; cin >> a;
		monsterHealth.push_back(a);
	}
	int i = 0;
	while (i < nMonster && heroHealth >= 1)
	{
		if (pos == i) {
			i++;
			continue;
		}
		ll rounds = ceil(monsterHealth[i] / (double)heroPower);
		heroHealth -= ( rounds * monsterPower[i]);
		i++;
	}

	if (heroHealth  < 1) {
		log("NO")
		return;
	}

	ll roundmon = ceil(monsterHealth[pos] / (double)heroPower);
	ll roundhero = ceil(heroHealth / (double)monsterPower[pos]);


	if (roundmon > roundhero) {
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