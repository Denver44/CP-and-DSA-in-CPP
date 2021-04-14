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

class Solution {
public:
	vector<int> preorder;
	void helper (Node *root)
	{
		if (root == NULL)
			return;
		preorder.push_back(root->data);
		helper (root->left);
		helper (root->right);
	}

	Node* helper2(Node *root, int x ) {

		if (root == NULL) {
			Node* temp = new  Node(x);
			return temp;
		}
		if (root->data > x) {
			root->left = helper2(root->left, x );
		} else {
			root->right = helper2(root->right, x );
		}
		return root;
	}
	Node* bstFromPreorder() {
		Node* root = NULL;
		for (auto x : preorder)
			root =	helper2(root, x);
		return root;
	}
	Node *binaryTreeToBST (Node *root)
	{
		helper(root);
		Node *newroot = bstFromPreorder();
		return newroot;
	}
};

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
