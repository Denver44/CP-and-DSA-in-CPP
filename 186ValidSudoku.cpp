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
	bool isValid(vector<vector<char>>& board , int cordX, int cordY , char X)
	{
		for (int i = 0; i < 9; i++)
			if (board[cordX][i] == X || board[i][cordY] == X )
				return false;

		int topleftx = 3 * (cordX / 3) , toplefty = 3 * (cordY / 3) ;

		for (int i = topleftx; i < topleftx + 3; i++)
			for (int j = toplefty; j < toplefty + 3 ; j++)
				if (board[i][j] == X)
					return false;

		return true;
	}

	bool helper(vector<vector<char>>& board, int srcX , int srcY)
	{


		if (srcY == 9)
		{
			srcX = srcX + 1;
			srcY = 0;
		}
		if (srcX == 9)
		{
			return true;
		}

		bool flag = false;
		if (board[srcX][srcY] == '.')
		{
			for (char k = '1'; k <= '9' ; k++)
			{
				if (isValid(board, srcX, srcY, k) && flag == false)
				{
					board[srcX][srcY] =  k;
					flag = helper( board,  srcX ,  srcY + 1);
					board[srcX][srcY] = '.';
				}
			}
		}
		else
			flag = helper( board,  srcX ,  srcY + 1);
		return flag;
	}

	bool isValidSudoku(vector<vector<char>>& board) {
		return  helper( board , 0, 0);
	}
};
void solve()
{
	Solution s1;
	vector<vector<char>> arr =  [ {"5", "3", ".", ".", "7", ".", ".", ".", "."}, {"6", ".", ".", "1", "9", "5", ".", ".", "."}, {".", "9", "8", ".", ".", ".", ".", "6", "."}, {"8", ".", ".", ".", "6", ".", ".", ".", "3"}, {"4", ".", ".", "8", ".", "3", ".", ".", "1"}, {"7", ".", ".", ".", "2", ".", ".", ".", "6"}, {".", "6", ".", ".", ".", ".", "2", "8", "."}, {".", ".", ".", "4", "1", "9", ".", ".", "5"}, {".", ".", ".", ".", "8", ".", ".", "7", "9"}];
	log(s1.isValidSudoku(arr));

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


