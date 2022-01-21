#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // this header file for Policy Based
#include <ext/pb_ds/tree_policy.hpp>     // tree policy
using namespace __gnu_pbds;              // policy based namespace
using namespace std;                     // standard Namespace
#define ll long long int
//             Key type ll, map as set there for null , Comaprator function,type of data strcuture as normal is used Red black tree, to update node.
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// In this we have to fimd Inversion Count.
// a[i] > a[j]
// but i <j.
// then such pair is called Inversion Pair.
// eg  we have given an array 2 5 3 4 7
// here two pair is possoble  5 3 and 5 4 here a[i] > a[j] but i < j.
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        pbds arr;
        int n, a;
        cin >> n;
        ll inversion_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (i == 0)
            {
                arr.insert(a);
                continue;
            }
            inversion_count += (arr.size() - arr.order_of_key(a));
            arr.insert(a);
        }
        cout << inversion_count << endl;
    }

    // Order of key gives the total number which are striclty less than u.
    // so if we subtarct the with arr.size() then we can get number graeter than mre.

    return 0;
}
