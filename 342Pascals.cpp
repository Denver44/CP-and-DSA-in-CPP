#include <iostream>
#include <vector>
using namespace std;
// In this vector is acting as array.
//  we resize the vector as the first row of pascal has 1 one elment so we resieze it to 1.
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> final(numRows);
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (i == j || j == 0)
                {
                    final[i].resize(i + 1);
                    final[i][j] = 1;
                }
                else
                {
                    final[i][j] = final[i - 1][j - 1] + final[i - 1][j];
                }
            }
        }

        return final;
    }
};

int main()
{
    // Using array we have do it.
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
            else if (i == j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}