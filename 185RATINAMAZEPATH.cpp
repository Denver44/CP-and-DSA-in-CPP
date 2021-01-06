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
const int MAX = 5;

void helper(int n, int m[MAX][MAX] , int i , int j , int desti, int destj , vector<vector<bool>> &visited, vector<string> &ans, string psf)
{
	if (i < 0 || j < 0 || i >= n || j >= n  || m[i][j] == 0 || visited[i][j] == true)
		return;
	if (i == desti &&  j == destj)
	{
		ans.push_back(psf);
		return;
	}
	visited[i][j] = true;
	helper( n, m ,   i + 1,  j ,  desti,  destj , visited, ans,  psf + 'D');
	helper( n, m ,   i ,  j - 1,  desti,  destj , visited, ans, psf + 'L' );
	helper( n, m ,   i ,  j + 1 ,  desti,  destj , visited, ans,   psf + 'R');
	helper( n, m ,   i - 1 ,  j ,  desti,  destj , visited, ans,    psf + 'U');
	visited[i][j] = false; // Backtrack

}

vector<string> findPath(int m[MAX][MAX], int n) {

	vector<vector<bool>> visited(n, vector<bool>(n, false));
	vector<string> ans;
	helper(n, m, 0, 0, n - 1, n - 1, visited, ans, "");
	return ans;
}

void solve()
{
	// int n = 4;
	// int arr[4][4] =  {{1, 0, 1 , 0}, {1, 1, 0, 0}, { 1 , 1, 0, 0}, {1, 0, 0, 1}};


	int n = 5;
	int arr[5][5] =  {{1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}};
	vector<string> ans = findPath(arr, n);
	if (ans.size() == 0)
	{log(-1);}
	else
		for (auto i : ans)
			log(i);
}

int main()
{
	file_i_o();
	int t = 1, i = 0;
	loop (i, 0, t)
	solve();
	return 0;
}


