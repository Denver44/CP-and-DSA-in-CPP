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

class Solution
{
public:

	void helper(Node *root, int K, priority_queue<int> &pq)
	{
		if (root == NULL || pq.size() >= K)
			return;
		helper(root->left, K, pq);
		if (pq.size() >= K)
			return;
		pq.push(root->data);
		helper(root->right, K, pq);
	}
	int KthSmallestElement(Node *root, int K)
	{
		priority_queue<int> pq;
		helper(root, K, pq);
		if (pq.empty() || pq.size() < K)
			return -1;
		return pq.top();
	}

};

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
