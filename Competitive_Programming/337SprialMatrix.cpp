#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> res;
        if (matrix.size() == 0)
        {
            return res;
        }

        int row = matrix.size();
        int col = matrix[0].size();

        int size = row * col;

        int toprow = 0;
        int bottomrow = row - 1;
        int leftcol = 0;
        int rightcol = col - 1;

        while (toprow <= bottomrow && leftcol <= rightcol)
        {
            for (int i = leftcol; i <= rightcol; i++) //0 1-2-3
            {
                res.push_back(matrix[toprow][i]);
            }
            toprow++;

            for (int i = toprow; i <= bottomrow; i++) // 3 2-1
            {
                res.push_back(matrix[i][rightcol]);
            }
            rightcol--;
            if (size == res.size())
            {
                // as when col size is greater than row size we have to check it this conditon
                // otherwise one element will be get addedd extra. becuse of below loop.
                break;
            }

            for (int i = rightcol; i >= leftcol; i--) // 3 // 2-1
            {
                res.push_back(matrix[bottomrow][i]);
            }
            bottomrow--;
            for (int i = bottomrow; i >= toprow; i--) // 2 1
            {
                res.push_back(matrix[i][leftcol]);
            }
            leftcol++;
        }

        return res;
    }
};
int main()
{

    return 0;
}