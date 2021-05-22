#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{ // TIME COMPLEXITY IS O(n*n)  but space complexity is O(1)
public:
    void rotate(vector<vector<int>> &matrix)
    {

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {

                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main()
{

    return 0;
}