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
	int deliveryFee, CouponFee, a1, a2, a3, b1, b2, b3;
	int withcoupon = INT32_MAX, withcoupondelivery2 = INT32_MAX, withcoupondelivery1 = INT32_MAX;
	cin >> deliveryFee >> CouponFee;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	int firstDaySum = a1 + a2 + a3;
	int SecondDaySum = b1 + b2 + b3;

	int withdeliverycharge = firstDaySum + SecondDaySum + (2 * deliveryFee);
	if (firstDaySum >= 150 && SecondDaySum >= 150)
	{
		withcoupon = firstDaySum + SecondDaySum + CouponFee;
	} else if (firstDaySum >= 150 && SecondDaySum < 150)
	{
		withcoupondelivery2 = firstDaySum + SecondDaySum + CouponFee + deliveryFee;
	} else if (firstDaySum < 150 && SecondDaySum >= 150)
	{
		withcoupondelivery1 = firstDaySum + SecondDaySum + CouponFee + deliveryFee;
	}

	int ans = (min(withdeliverycharge, min(withcoupon, min(withcoupondelivery1, withcoupondelivery2))));

	if (ans == withdeliverycharge)
	{
		log("NO");
	}
	else {
		log("YES");
	}

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
