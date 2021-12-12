#include <iostream>
using namespace std;

void wavePrint(int **arr, int nRows, int mCols)
{

    for (int i = 0; i < mCols; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < nRows; j++)
            {

                cout << arr[j][i] << " ";
                00 10 20 30 40
            }
        }

        else
        {
            for (int j = nRows - 1; j >= 0; j--)
            {

                cout << arr[j][i] << " "; // as indexing is 0 based .
                                          //41 31 21 11 10
            }
        }
    }
}