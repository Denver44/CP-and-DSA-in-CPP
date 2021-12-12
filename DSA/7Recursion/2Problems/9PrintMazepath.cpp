#include <bits/stdc++.h>
using namespace std;

void print(int row, int col, int drow, int dcol, string ans)
{
    if (row == drow && col == dcol)
    {
        cout << ans << endl;
        return;
    }
    if (col < dcol)
    {
        print(row, col + 1, drow, dcol, ans + "H");
    }
    if (row < drow)
    {
        print(row + 1, col, drow, dcol, ans + "V");
    }
}

int main()
{
    print(1, 1, 3, 3, "");

    return 0;
}