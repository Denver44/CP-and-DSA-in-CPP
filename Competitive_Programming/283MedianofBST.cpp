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



// If number of nodes are even: then median = (N/2 th node + (N/2)+1 th node)/2
// If number of nodes are odd : then median = (N+1)/2th node.


void helper(Node* root, vector<int> &v)
{
	if (!root)
		return;
	helper(root->left, v);
	v.push_back(root->data);
	helper(root->right, v);
}

float findMedian(struct Node *root)
{
	vector<int> v1;
	helper(root, v1);
	int n = v1.size();
	if (n % 2 == 0)
		return (v1[n / 2] + v1[(n / 2) - 1]) / 2.0 ;
	else
		return v1[n / 2] ;
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


// ------------
void countHelper(Node* root, int &count)
{
	if (!root)
		return ;
	countHelper(root->left, count);
	count++;
	countHelper(root->right, count);
}
void helper(Node* root, Node *prev, int &count, float &ans)
{
	if (!root)
		return ;
	helper(root->left, root , count, ans);
	count--;
	if (count == 0) {
		cout << root->data << " " << prev->data << endl;
		ans =  (root->data + prev->data ) / 2.0;
	}
	helper(root->right, root , count, ans);
}
void helper2(Node* root, int& count, float &ans)
{
	if (!root)
		return ;
	helper2(root->left, count, ans);
	count--;
	if (count == 0)
		ans =  root->data;
	helper2(root->right, count, ans);
}


float findMedian(struct Node *root)
{
	int n = 0;
	countHelper(root, n);
	float ans = 0;
	if (n % 2 == 0) {
		int half = n / 2 + 1;
		helper(root, NULL, half , ans);
	}
	else {
		int half = n / 2 + 1;
		helper2(root, half , ans);
	}
	return ans;
}