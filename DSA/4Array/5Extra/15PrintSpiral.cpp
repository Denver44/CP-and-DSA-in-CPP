#include <iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
{
    if (nRows == 1 || nCols == 1)
    {
        for (int i = 0; i < nRows; i++)
        {
            for (int j = 0; j < nCols; j++)
            {
                cout << input[i][j] << " ";
            }
        }
        return;
    }

    int limit = nRows * nCols;
    int left = 0;
    int right = nCols - 1;
    int top = 0;
    int bottom = nRows - 1;
    while (limit)
    {

        for (int i = left; i <= right; i++)
        {
            cout << input[top][i] << " ";
            limit--;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << input[i][right] << " ";
            limit--;
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            cout << input[bottom][i] << " ";
            limit--;
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << input[i][left] << " ";
            limit--;
        }
        left++;
    }
}
