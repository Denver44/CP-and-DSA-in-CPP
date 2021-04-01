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

// Here the Time Complexity will be O(N) because we are visiting on every node and putting it next to temp.
node *temp = NULL;
void helper(struct node* p)
{
	if (p) {
		helper(p->right);
		p->next = temp;
		temp = p;
		helper(p->left);
	}
}
void populateNext(struct node* p)
{
	helper(p);
	temp = NULL;
}
void solve() {}


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
