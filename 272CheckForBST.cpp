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

// simple as we know for a BST it left side all value must be less than root->data and right side should be all greater than root->data.

class Solution
{
public:

	bool helper(Node* root, int max , int min)
	{
		if (root == NULL)
			return true;

		if (root->data < min || root->data > max)
			return false;

		bool isLeftOk = helper( root->left, root->data - 1 , min );
		bool isRightOk =  helper( root->right, max , root->data + 1 );
		return   (isLeftOk && isRightOk);
	}


	bool isBST(Node* root)
	{

		return helper( root, INT_MAX , INT_MIN) ;
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
