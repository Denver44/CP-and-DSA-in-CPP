#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define log(a) cout<<(a)<<endl;
#define v vector<int>
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
	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
		int count  = 0;
		unordered_map<int, int> map1;
		int size1 = A.size() , size2 = B.size(), size3 = C.size(), size4 = D.size();

		for (int i = 0; i < size1; i++)
		{
			for (int j = 0; j < size2 ; j++)
				map1[A[i] + B[j]]++;
		}

		for (int i = 0; i < size3; i++)
		{
			for (int j = 0; j < size4; j++)
				if (map1.count(- (C[i] + D[j])) > 0)
					count += map1[-(C[i] + D[j])];
		}

		return count;
	}
};

void solve()

{
	Solution s1;

}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	// cin >> t;
	loop (i, 0, t)
	solve();
	return 0;
}



