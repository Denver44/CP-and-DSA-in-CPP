#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;

vector<vector<int>> output;

int min_cost(int **input, int sr, int sc, int dr, int dc)
{
    if (sr > dr || sc > dc)
        return INT32_MAX;
    if (sr == dr && sc == dc)
        return input[dr][dc];
    if (output[sr][sc] != -1)
        return output[sr][sc];

    output[sr][sc] = input[sr][sc] + min(min_cost(input, sr, sc + 1, dr, dc), min((min_cost(input, sr + 1, sc, dr, dc)), (min_cost(input, sr + 1, sc + 1, dr, dc))));
    return output[sr][sc];
}

void solve()
{
    int **input = new int *[3];
    input[0] = new int[3];
    input[1] = new int[3];
    input[2] = new int[3];
    input[0][0] = 1;
    input[0][1] = 1;
    input[0][2] = 1;
    input[1][0] = 10;
    input[1][1] = 15;
    input[1][2] = 1;
    input[2][0] = 11;
    input[2][1] = 18;
    input[2][2] = 8;
    output.assign(3, vector<int>(3, -1));

    cout << min_cost(input, 0, 0, 2, 2);
    delete[] input[0];
    delete[] input[1];
    delete[] input[2];
    delete[] input;
    cout << endl;
    int i, j;
    loop(i, 0, 3)
    {
        loop(j, 0, 3)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
