
#include <iostream>
using namespace std;
void display(int arr[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool isvalid(int board[9][9], int x, int y, int val)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[x][i] == val)
        {
            return false;
        }
        if (board[i][y] == val)
        {
            return false;
        }
    }

    int row = x / 3 * 3;
    int col = y / 3 * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i + row][j + col] == val)
            {
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(int board[9][9], int row, int col)
{

    if (col == 9)
    {
        row = row + 1;
        col = 0;
    }
    if (row == 9)
    {
        display(board);
        return true;
    }
    bool flag = false;

    if (board[row][col] == 0)
    {
        for (int po = 1; po <= 9; po++)
        {
            if (isvalid(board, row, col, po) && flag == false)
            {
                board[row][col] = po;
                flag = solveSudoku(board, row, col + 1);
                board[row][col] = 0;
            }
        }
    }
    else
        flag = solveSudoku(board, row, col + 1);

    return flag;
}

int main()
{

    int board[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9},
    };
    // int board[9][9] = {
    //     {9, 3, 0, 0, 2, 0, 7, 5, 0},
    //     {6, 0, 0, 0, 5, 0, 0, 4, 0},
    //     {0, 2, 0, 4, 0, 0, 0, 1, 0},
    //     {2, 0, 8, 0, 0, 0, 0, 0, 0},
    //     {0, 7, 0, 5, 0, 9, 0, 6, 0},
    //     {0, 0, 0, 0, 0, 0, 4, 0, 1},
    //     {0, 1, 0, 0, 0, 5, 0, 8, 0},
    //     {0, 9, 0, 0, 7, 0, 0, 0, 4},
    //     {0, 8, 2, 0, 4, 0, 0, 0, 6}};
    bool flag = solveSudoku(board, 0, 0);
    cout << endl;
    if (flag)
        display(board);
    else
        cout << "Not a Valid Sudoku" << endl;

    return 0;
}

