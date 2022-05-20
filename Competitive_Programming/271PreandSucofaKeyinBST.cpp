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

// Here we have to find Predecessor and Successor for key.
// So for a key if it left is persent then it pre will be left side right most value.
// same for a key if right side is present then succ will be right side left most value.

// if key is bigger than root value then its pre will be root->val
// same vice versa here  now succ will be root->val;



void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
	if (root == NULL) return;

	if (root->key == key)
	{
		if (root->left) {
			Node *temp = root->left;
			while (temp->right)
				temp = temp->right;
			pre = temp;
		}

		if (root->right) {
			Node *temp = root->right;
			while (temp->left)
				temp = temp->left;
			suc = temp;
		}
		return;
	}

	if (root->key > key) {
		suc = root;
		findPreSuc(root->left, pre,  suc, key);
	}

	else  {
		pre = root;
		findPreSuc(root->right, pre,  suc, key);
	}
}

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
