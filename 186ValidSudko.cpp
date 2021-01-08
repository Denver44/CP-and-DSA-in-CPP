#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;

// LeetCode Problem 36.Valid Sudko.
// In this we dont have to tell that sudko is valid or not.
// We need only to check that any number it is nit repaeting in its row and col and 3*3 box Only.

class Solution {
public:
	bool isValid(vector<vector<char>>& board, int cordX, int cordY, char val)
	{
		for (int i = 0; i < 9; i++)
			if (board[cordX][i] == val || board[i][cordY] == val)
				return false;

		int topleftx = 3 * (cordX / 3), toplefty = 3 * (cordY / 3);

		for (int i = topleftx; i < topleftx + 3; i++)
			for (int j = toplefty; j < toplefty + 3; j++)
				if (board[i][j] == val)
					return false;

		return true;
	}
	bool isValidSudoku(vector<vector<char>>& board) {

		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);

		for (int i = 0 ; i < 9; i++)
		{
			for (int j = 0; j < 9 ; j++)
			{
				if (board[i][j] != '.')
				{
					char ch = board[i][j];
					board[i][j] = '.';
					if (isValid(board, i, j, ch) == false)
						return  false;
					board[i][j] = ch;
				}
			}
		}


		return  true;
	}
};

