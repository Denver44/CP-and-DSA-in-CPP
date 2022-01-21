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
// Flood Fill Question
// We have to Go on Four Direction and Change the color of pixel to new color if it sr and sc has same color.
class Solution {
public:

	void helper(vector<vector<int>>& image, vector<vector<int>>& ans , vector<vector<bool>> &visited , int sr , int sc , int newColor , int oldColor)
	{

		if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || visited[sr][sc] == true || image[sr][sc] != oldColor)
			return;

		visited[sr][sc] = true;
		ans[sr][sc] = newColor;
		helper(image, ans , visited ,  sr - 1,  sc ,  newColor ,  image[sr][sc]);
		helper(image, ans , visited ,  sr + 1,  sc ,  newColor ,  image[sr][sc]);
		helper(image, ans , visited ,  sr ,  sc - 1,  newColor ,  image[sr][sc]);
		helper(image, ans , visited ,  sr ,  sc + 1,  newColor ,  image[sr][sc]);
		visited[sr][sc] = false;



	}
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

		vector<vector<int>> ans(image.size() , vector<int>(image[0].size() , 0));
		for (int i = 0; i < ans.size() ; i++)
		{
			for (int j = 0; j < ans[0].size() ; j++) {
				ans[i][j] = image[i][j];
			}
		}

		vector<vector<bool>> visited (image.size() , vector<bool>(image[0].size() , false));
		ans[sr][sc] = image[sr][sc];
		helper(image, ans , visited, sr, sc, newColor , image[sr][sc]);

		return ans;
	}
};





void solve()
{

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



