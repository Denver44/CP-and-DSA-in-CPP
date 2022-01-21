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


// Here we find the node in O(h) complexity. and then delete it .

class Solution {
public:

	int find(TreeNode* root) {
		while (root->right) {
			root = root->right;
		}
		return root->val;
	}

	TreeNode* deleteNode(TreeNode* root, int key) {

		if (root == NULL)
			return NULL;

		if (root->val > key )
			root->left = deleteNode(root->left , key);

		else if (root->val < key )
			root->right = deleteNode(root->right , key);
		else
		{
			if ( root->left == NULL && root->right == NULL) {
				delete root;
				return NULL;
			}
			else if (root->left == NULL) {
				TreeNode* temp = root->right;
				root->right = NULL;
				delete root;
				return temp;
			}
			else if (root->right == NULL) {
				TreeNode* temp = root->left;
				root->left = NULL;
				delete root;
				return temp;
			} else {
				root->val = find(root->left);
				root->left = deleteNode(root->left, root->val);
				return root;
			}
		}
		return root;
	}
};

void solve()
{

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
