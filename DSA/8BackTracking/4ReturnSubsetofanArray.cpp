#include <bits/stdc++.h>
using namespace std;
// Here we are making a 2D array output.
// So the First Col of every row hs the Size of that Row.
// So if it is Emppty set then Output[0[0] = 0 and we return 1. // This is Our base case also.
// Here what we do the answer we get we add on more to it by putting the input[0] at the first.

int subset(int input[], int n, int output[][20])
{
    if (n == 0)
    {
        output[0][0] = 0;
        return 1;
    }
    int size = subset(input + 1, n - 1, output);

    for (int i = 0; i < size; i++)
    {
        int number_of_columns = output[i][0]; // because every first Col has the Size in it.
        output[size + i][0] = number_of_columns + 1;
        output[size + i][1] = input[0];
        for (int j = 0; j < number_of_columns; j++)
        {
            output[size + i][j + 2] = output[i][j + 1];
        }
    }
    return size * 2;
}

int main()
{
    int input[20], length, output[300][20];
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];
    int size = subset(input, length, output);

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= output[i][0]; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// ---
#include <bits/stdc++.h>
using namespace std;

void helper(int a[], int n, vector<vector<int>> &vs, vector<int> psf)
{
    if (n == 0)
    {
        vs.push_back(psf);
        return;
    }
    vector<int> inc_v(psf);
    inc_v.push_back(a[0]);
    helper(a + 1, n - 1, vs, psf);
    helper(a + 1, n - 1, vs, inc_v);
}
int subset(int input[], int n, int output[][20])
{
    vector<vector<int>> vs;
    vector<int> psf;
    helper(input, n, vs, psf);
    for (int i = 0; i < vs.size(); i++)
    {
        for (int j = 0; j < vs[i].size(); j++)
        {
            cout << vs[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
