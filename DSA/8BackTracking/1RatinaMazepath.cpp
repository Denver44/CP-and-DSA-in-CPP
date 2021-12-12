#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;

const int MAX = 4;

void helper(int n, int m[MAX][MAX], int i, int j, int desti, int destj, vector<vector<bool>> &visited, vector<string> &ans, string psf)
{
    if (i == desti && j == destj)
    {
        visited[i][j] = true;
        cout << psf << endl;
        for (int x = 0; x < visited.size(); x++)
        {
            for (int y = 0; y < visited.size(); y++)
            {
                cout << visited[x][y] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    if (i < 0 || j < 0 || i >= n || j >= n || m[i][j] == 0 || visited[i][j] == true)
        return;
    visited[i][j] = true;
    helper(n, m, i + 1, j, desti, destj, visited, ans, psf + 'D');
    helper(n, m, i, j - 1, desti, destj, visited, ans, psf + 'L');
    helper(n, m, i, j + 1, desti, destj, visited, ans, psf + 'R');
    helper(n, m, i - 1, j, desti, destj, visited, ans, psf + 'U');
    visited[i][j] = false; // Backtrack
}

void findPath(int m[MAX][MAX], int n)
{

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<string> ans;
    helper(n, m, 0, 0, n - 1, n - 1, visited, ans, "");
    return;
}

void solve()
{
    int n = 4;
    int arr[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    findPath(arr, n);
}

int main()
{
    solve();
    return 0;
}
