#include <iostream>
#include <vector>
using namespace std;
// As we have to make im space Complexity of O(1)
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();    // rowsize
        int col = matrix[0].size(); // colsize
        int col0 = 1;               // this col0 =1 initally true if arr[0][0] == 0 then we will make it false then u can make that row and col zero.
        // Here we are making dummy col and row the first col and first row as dummy.

        for (int i = 0; i < row; i++)
        {
            if (matrix[i][0] == 0)
            {
                col0 = 0;
            }

            for (int j = 1; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }

        // for settimg the rest value zero we have traverse it from back.

        for (int i = row - 1; i >= 0; i--)
        {
            for (int j = col - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) // if the dummy head row or col is zero if anyone then make this also zero.
                {
                    matrix[i][j] = 0;
                }
            }
            if (col0 == 0)
            {
                matrix[i][0] = 0;
            }
        }
    }
};

int main()
{

    return 0;
}
// /*************************************** EXPLANTION ****************************************//

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[4][4] = {{1, 1, 1, 1},
//                      {1, 0, 1, 1},
//                      {1, 1, 0, 1},
//                      {0, 0, 0, 1}};

//     int col0 = 1; // as here arr[0][0] == 1;

//     for (int i = 0; i < 4; i++)
//     {
//         if (arr[i][0] == 0)
//         {
//             col0 = 0;
//         }
//         for (int j = 1; j < 4; j++)
//         {

//             if (arr[i][j] == 0)
//             {
//                 arr[i][0] = arr[0][j] = 0; // dummy head and col are making zero.
//             }
//         }
//     }
//     // We go in reverse for putting zeros. to the col and row which deserve to be zero.
//     for (int i = 3; i >= 0; i--)
//     {
//         for (int j = 3; j >= 1; j--) // as one col is dummy that why we go to upto 1 only.
//         {
//             if (arr[i][0] == 0 || arr[0][j] == 0) // if the dummy col or dummy row is zero then make it zero.
//             {
//                 arr[i][j] = 0;
//             }
//         }
//         if (col0 == 0)
//         {
//             arr[i][0] = 0;
//         }
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }