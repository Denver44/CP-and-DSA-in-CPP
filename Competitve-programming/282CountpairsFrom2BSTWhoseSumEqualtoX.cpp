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


void helper(Node* root, unordered_set<int> &s1)
{
	if (!root)
		return;
	helper(root->left, s1);
	s1.insert(root->data);
	helper(root->right, s1);
}


int countPairs(Node* root1, Node* root2, int x)
{
	unordered_set<int> s1, s2;
	helper(root1, s1);
	helper(root2, s2);
	int ans = 0;

	for (auto i : s1) {
		if (s2.find(x - i) != s1.end()) {
			ans++;
			s2.erase(x - i);
		}
	}
	return ans;
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
