#include <iostream>
using namespace std;

// Eg  For 2
// same will be rr gg bb
// diff will be rg rb gr gb bg br
// total = same + diff.
int main()
{
    int n;
    cin >> n;
    int k; // nof color.
    cin >> k;
    long same = k * 1; // either we can make rr bb gg so it will be k*1.
    long diff = k * (k - 1); // here lets say we have 3 color so first used then we to use opposte to reach so that it main ij so (k-2).
    long total = same + diff;
    for (int i = 3; i <= n; i++)
    {
        same = diff * 1;
        diff = total * (k - 1);
        total = same + diff;
    }
    cout << total << endl;

    return 0;
}
