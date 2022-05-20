#include <iostream>
using namespace std;
// This question is solved using array
//  as we have to find a unique path
// eg
// 28 21 15 10 6 3 1
// 7  6  5  4  3 2 1
// 1  1  1  1  1 1 f
//  as we have to reach the f and we have to seletc a unique path
// we can go down or right side only.
//  as for last row we cant go further down so there is only one path go rights so last row is 1.
// as for the last col we can go only downwards so last col has value 1.
// so to achieve result we are going backwards
// now at place written two we can take 2 path either go to next col and then go down to reach f or eiter we first go down and then take right so thats why 2 path means arr[i][j] = arr[i][j+1] + arr[i+1][j]
// this algo is same for all row thats how we solve the problem.
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int arr[m][n];
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                arr[i][j] = 0;
            }
        }
        int x = m - 1;
        int y = n - 1;
        int i, j = 0;

        for (int i = x; i >= 0; i--)
        {

            for (int j = y; j >= 0; j--)
            {
                if (i == x)
                {
                    arr[i][j] = 1;
                }
                else if (j == y)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j] = arr[i + 1][j] + arr[i][j + 1];
                }
            }
        }

        return arr[0][0];
    }
};
int main()
{

    return 0;
}