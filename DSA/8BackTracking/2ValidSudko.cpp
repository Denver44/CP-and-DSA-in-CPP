#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
bool isValid(int board[][9], int cordX, int cordY, int val)
{
    // First we check the value which we are going to put int puzzle it is not already present in the row or col.
    for (int i = 0; i < 9; i++)
        if (board[cordX][i] == val || board[i][cordY] == val)
            return false;

    // After this we check int 3*3.
    int topleftx = 3 * (cordX / 3), toplefty = 3 * (cordY / 3);
    for (int i = topleftx; i < topleftx + 3; i++)
        for (int j = toplefty; j < toplefty + 3; j++)
            if (board[i][j] == val)
                return false;

    return true;
}

// Version 1
bool helper(int board[][9], int srcX, int srcY)
{

    if (srcX == 9) // Means We have crossed our Destination
        return true;

    if (srcY == 9) // If we reach the max col then simply row +1;
        return helper(board, srcX + 1, 0);

    if (board[srcX][srcY] != 0) // if there is not zero then go to next col
        return helper(board, srcX, srcY + 1);

    else
    {
        for (int k = 1; k <= 9; k++)
        {
            if (isValid(board, srcX, srcY, k))
            {
                board[srcX][srcY] = k;
                if (helper(board, srcX, srcY + 1))
                    return true;
                board[srcX][srcY] = 0;
            }
        }
    }
    return false;
}

// Version 2 this is not a good way.
bool helper(int board[][9], int srcX, int srcY)
{

    if (srcY == 9)
    {
        srcX += 1;
        srcY = 0;
    }
    if (srcX == 9)
    {
        return true;
    }
    bool flag = false;
    if (board[srcX][srcY] == 0)
    {
        for (int k = 1; k <= 9; k++)
        {
            if (isValid(board, srcX, srcY, k))
            {
                board[srcX][srcY] = k;
                flag = helper(board, srcX, srcY + 1);
                if (flag == false)
                    board[srcX][srcY] = 0;
            }
        }
    }
    else
        flag = helper(board, srcX, srcY + 1);
    return flag;
}

bool sudokuSolver(int board[][9])
{
    return helper(board, 0, 0);
}
