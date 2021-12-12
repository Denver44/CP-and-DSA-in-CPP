#include <bits/stdc++.h>

using namespace std;

void floodfill(int arr[8][8], int row, int col, int drow, int dcol, vector<vector<bool>> visited, string ans)
{
    if (row < 0 || col < 0 || row == drow || col == dcol || arr[row][col] == 1 || visited[row][col] == true)
    {
        return;
    }

    if (row == drow - 1 && col == dcol - 1)
    {
        cout << ans << endl;
    }

    visited[row][col] = true;
    floodfill(arr, row - 1, col, drow, dcol, visited, ans + "t");
    floodfill(arr, row, col - 1, drow, dcol, visited, ans + "l");
    floodfill(arr, row + 1, col, drow, dcol, visited, ans + "d");
    floodfill(arr, row, col + 1, drow, dcol, visited, ans + "r");
    visited[row][col] = false;
}

int main()
{
    int arr[8][8] = {{0, 1, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 1, 1, 1, 1, 0}, {0, 1, 0, 1, 0, 0, 0, 0}, {0, 1, 0, 1, 0, 1, 1, 1}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 1, 1, 1, 1, 0}, {0, 1, 0, 1, 1, 1, 1, 0}, {0, 1, 0, 0, 0, 0, 0, 0}};

    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<bool>> visited(8, vector<bool>(8, false));

    floodfill(arr, 0, 0, 8, 8, visited, "");

    return 0;
}
