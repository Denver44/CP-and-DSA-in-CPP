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

// Here we have Given two array 1 & 2 and Both are Sorted in Increasing Order.
// Here m+n = t
// We have Merge the Array without taking Extra Space in O(1) Space Complexity and plus Time Complexity is O(n+m)log(m+n) == O(t)log(t)

// So here we know that arr1 last element is Highest and arr2 first elemnt is lowest
// so we swap last and first and decrement and increment there position by 1.

class Solution {
public:
	void merge(int arr1[], int arr2[], int n, int m) {
		int i = 0, j = 0, k = n - 1;
		while (i <= k && j < m)
		{
			if (arr1[i] < arr2[j])
				i++;
			else {
				// Note if this condition statisfy means there is smaller elemnt in arr2 and the last elemnt of arr1 is too big so thats we swap it as the size is never going to chnage.
				swap(arr1[k--], arr2[j++]);
			}
		}
		sort(arr2, arr2 + m);
		sort(arr1, arr1 + n);
	}
};


void solve()
{

	int n, m, i;
	cin >> n >> m;
	int arr1[n], arr2[m];
	for (i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	for (i = 0; i < m; i++) {
		cin >> arr2[i];
	}
	Solution ob;
	ob.merge(arr1, arr2, n, m);
	for (i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}
	for (i = 0; i < m; i++) {
		cout << arr2[i] << " ";
	}
	cout << "\n";
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


/*
2
4 5
1 3 5 7
0 2 6 8 9
10 10
7 9 9 10 11 11 13 14 17 19
1 1 4 5 8 11 13 16 19 19
*/