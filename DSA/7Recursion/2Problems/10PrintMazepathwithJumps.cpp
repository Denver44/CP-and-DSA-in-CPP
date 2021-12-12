#include <bits/stdc++.h>
using namespace std;

void print(int row, int col, int drow, int dcol, string ans)
{
    if (row == drow && col == dcol)
    {
        cout << ans << " ";
        return;
    }
    for (int i = 1; i <= dcol - col; i++)
    {
        string no = to_string(i);
        print(row, col + i, drow, dcol, ans + "h" + no);
    }
    for (int i = 1; i <= drow - row; i++)
    {
        string no = to_string(i);
        print(row + i, col, drow, dcol, ans + "v" + no);
    }

    for (int i = 1; i <= drow - row && i <= dcol - col; i++)
    {
        string no = to_string(i);
        print(row + i, col + i, drow, dcol, ans + "d" + no);
    }
}

int main()
{
    print(1, 1, 3, 3, "");

    return 0;
}
