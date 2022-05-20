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
	TreeNode* helper(TreeNode *root, int x ) {

		if (root == NULL) {
			TreeNode* temp = new  TreeNode(x);
			return temp;
		}

		if (root->val > x) {
			root->left = helper(root->left, x );
		} else {
			root->right = helper(root->right, x );
		}
		return root;
	}
	TreeNode* bstFromPreorder(vector<int>& preorder) {

		TreeNode* root = NULL;
		for (auto x : preorder)
			root =	helper(root, x);
		return root;
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
