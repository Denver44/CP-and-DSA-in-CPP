#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;



class Solution
{
public:
	bool isvalid(vector<vector<char>> &board, int x, int y, char ch)
	{
		for (int i = 0; i < board.size(); i++)
		{
			if (board[x][i] == ch)
				return false;
			if (board[i][y] == ch)
				return false;
		}
		int row = x / 3 * 3;
		int col = y / 3 * 3;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				if (board[i + row][j + col] == ch)
					return false;
		return true;
	}
	bool helper(vector<vector<char>> &board, int row, int col)
	{

		if (col == board[0].size())
			return helper(board, row + 1, 0);

		if (row == board.size())
			return true;

		if (board[row][col] != '.')
			return helper(board, row, col + 1);

		for (char val = '1'; val <= '9'; val++)
		{
			if (isvalid(board, row, col, val))
			{
				board[row][col] = val;
				if (helper(board, row, col + 1))
					return true;
			}
			board[row][col] = '.';
		}
		return false;
	}
	void solveSudoku(vector<vector<char>> &board)
	{
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
		helper(board, 0, 0);
	}
};

int main()
{

	return 0;
}


