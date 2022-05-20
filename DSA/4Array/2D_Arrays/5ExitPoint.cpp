
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> array(n, vector<int>(m));

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[0].size(); j++)
        {
            cin >> array[i][j];
        }
    }

    int dir = 0;
    int i = 0;
    int j = 0;
    while (true)
    {
        dir = (dir + array[i][j]) % 4;
        if (dir == 0) // east
        {
            j++;
        }
        else if (dir == 1) // south
        {
            i++;
        }
        else if (dir == 2) // west
        {

            j--;
        }
        else if (dir == 3) // north
        {
            i--;
        }

        if (i < 0)
        {
            i++;
            break;
        }
        else if (j < 0)
        {
            j++;
            break;
        }
        else if (i == array.size())
        {
            i--;
            break;
        }
        else if (j == array[0].size())
        {
            j--;
            break;
        }
    }
    cout << i << endl;
    cout << j << endl;
    return 0;
}