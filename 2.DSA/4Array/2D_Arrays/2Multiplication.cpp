#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n1, m1, n2, m2;
    cin >> n1 >> m1;
    int **array1, **array2, **array3;
    array1 = new int *[n1];
    for (int i = 0; i < n1; i++)
    {
        array1[i] = new int[m1];
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> array1[i][j];
        }
    }
    cin >> n2 >> m2;
    array2 = new int *[n2];
    for (int i = 0; i < n2; i++)
    {
        array2[i] = new int[m2];
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> array2[i][j];
        }
    }

    if (m1 != n2)
    {
        cout << "Invalid input" << endl;
        return;
    }

    array3 = new int *[n1]; // the row will be as 1 st array has row

    for (int i = 0; i < n1; i++)
    {
        array3[i] = new int[m2]; // col is that the second array col has
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {

            for (int k = 0; k < m1; k++) // it always run fro the m1 or n2 as both are smae.
            {
                array3[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {

            cout << array3[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    solve();
    return 0;
}
