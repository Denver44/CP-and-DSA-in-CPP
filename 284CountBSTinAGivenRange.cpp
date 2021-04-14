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

void helper(Node *root, int l, int h , int &c)
{
	if (!root) return;
	if (root->data >= l && root->data <= h) c++;
	if (l < root->data)
		helper(root->left, l, h , c);
	if (h > root->data)
		helper(root->right, l, h , c);
}

int getCount(Node *root, int l, int h)
{
	int count = 0;
	helper(root,  l, h , count);
	return count;
}

void solve() {}
int main()
{
	file_i_o();
	int t = 1;
	for (int i = 0; i < t; i++)
	{
		solve();
	}
	return 0;
}
