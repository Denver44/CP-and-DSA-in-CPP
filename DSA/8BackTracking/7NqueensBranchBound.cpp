

#include <bits/stdc++.h>
using namespace std;

vector<bool> dia;
vector<bool> col;
vector<bool> revdia;

void printer(vector<vector<bool>> &chess)
{
    for (int i = 0; i < chess.size(); ++i)
    {
        for (int j = 0; j < chess[0].size(); ++j)
        {
            if (chess[i][j] == true)
                cout << "1 ";
            else
                cout << "0 ";
        }
    }
    cout << endl;
}

void helper(int row, int n, vector<vector<bool>> &chess)
{
    if (row == n)
    {
        printer(chess);
        return;
    }

    for (int j = 0; j < n; ++j)
    {
        if (col[j] == false && dia[row + j] == false && revdia[row - j + n - 1] == false)
        {
            col[j] = true;
            dia[row + j] = true;
            revdia[row - j + n - 1] = true;
            chess[row][j] = true;
            helper(row + 1, n, chess);
            col[j] = false;
            dia[row + j] = false;
            revdia[row - j + n - 1] = false;
            chess[row][j] = false;
        }
    }
}
// As we putting the one queen for entire one row
// So we have to just decide the column only.
void placeNQueens(int n)
{

    vector<vector<bool>> chess(n, vector<bool>(n, false));
    col.assign(n, false);
    dia.assign(2 * n - 1, false);
    revdia.assign(2 * n - 1, false);
    helper(0, n, chess);
}
void solve()
{
    placeNQueens(5);
}

int main()
{
    solve();
    return 0;
}
