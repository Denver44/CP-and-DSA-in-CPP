#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void helper(char input[], int &output)
{
    if (input[0] == '\0')
        return;
    output = (output * 10 + (input[0] - 48));
    helper(++input, output);
}

int stringToNumber(char input[])
{
    int output = 0;
    helper(input, output);
    return output;
}

int main()
{
    char a[100];
    char b[1000][100];
    cin >> a;
    int k;
    cin >> k;
    int size = allStrings(a, k, b);
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << endl;
    }
}
