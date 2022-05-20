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

void helper (Node *root, vector<Node *> &Inorder)
{
	if (root == NULL)
		return;
	helper (root->left, Inorder);
	Inorder.push_back(root);
	helper (root->right, Inorder);
}

Node* helper2(vector<Node *> &Inorder , int left, int right ) {

	if (left > right) {
		return NULL;
	}
	int mid = (left + right) / 2;
	Node* root = Inorder[mid];
	root->left = helper2(Inorder, left, mid - 1 );
	root->right = helper2(Inorder, mid + 1, right );
	return root;
}
Node* bstFromPreorder(vector<Node *> &Inorder) {
	int n = Inorder.size();
	return  helper2( Inorder, 0, n - 1);
}
Node* buildBalancedTree(Node* root)
{
	vector<Node *> Inorder;
	helper(root, Inorder);
	return bstFromPreorder(Inorder);
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
