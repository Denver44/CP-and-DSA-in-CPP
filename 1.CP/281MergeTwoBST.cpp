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
	void filltheArray(Node *root, vector<int> & arr1) {
		if (!root)
			return;
		filltheArray(root->left, arr1);
		arr1.push_back(root->data);
		filltheArray(root->right, arr1);

	}
	vector<int> merge(Node *root1, Node *root2)
	{
		vector<int> arr1, arr2, arr3;
		filltheArray(root1, arr1);
		filltheArray(root2, arr2);
		int i , j, size1 = arr1.size(), size2 = arr2.size();
		while (i < size1 && j < size2) {

			if (arr1[i] <= arr2[j]) {
				arr3.push_back(arr1[i++]);
			} else {
				arr3.push_back(arr2[j++]);
			}

		}
		while (i < size1) {
			arr3.push_back(arr1[i++]);
		}
		while (j < size2) {
			arr3.push_back(arr2[j++]);
		}
		return arr3;
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
