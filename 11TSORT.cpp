#include <bits/stdc++.h> // no need of adding this library as we added the bits/stdc++.h in this library all the library are added.

using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}