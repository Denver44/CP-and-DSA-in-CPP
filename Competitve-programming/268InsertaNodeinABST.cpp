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

// Time Complexity: O(Height of the BST).
// Auxiliary Space: O(1).

// Here if we get the key already in the BST the dont modify.
// If it is not present then create a node and attach to perfect place.
// As here it is BST is given we have to go left if key is smaller than root value else go to right.

class Node {
	int data;
	Node *left;
	Node *right;
public:
	Node(int val) {
		data = val;
		left = right = NULL;
	}
};


Node* insert(Node* root, int Key)
{
	if (root == NULL) {
		Node *temp = new Node(Key);
		return temp;
	}
	if (root->data == Key)
		return root;

	if (root->data > Key)
		root->left =  insert(root->left, Key);
	else
		root->right = insert(root->right, Key);

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
