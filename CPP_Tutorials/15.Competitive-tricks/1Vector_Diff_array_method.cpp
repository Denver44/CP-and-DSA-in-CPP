#include <iostream>
#include <vector>
using namespace std;

// vector diff array method.
// When we have to deal with Queries which Repeat Many times we have to use this Method.

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n, 0);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        arr[l]++; // Make that increase it One.

        if (r + 1 < n)
        {
            arr[r + 1]--; // Decrease it by 1 it next.
        }
    }

    for (int i = 1; i < n; i++) // Perfix Sum.
        arr[i] = arr[i] + arr[i - 1];

    for (auto e : arr)
        cout << e << " ";

    return 0;
}