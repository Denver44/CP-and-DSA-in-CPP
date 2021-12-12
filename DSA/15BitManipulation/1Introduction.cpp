#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, m;
    cin >> n >> i >> j >> k >> m;

    int onmask = (1 << i);
    int offmask = ~(1 << j);
    int toogle = (1 << k);
    int check = (1 << m);

    cout << (n | onmask) << endl;
    cout << (n & offmask) << endl;
    cout << (n ^ toogle) << endl;
    cout << ((n & check) == 0 ? "false" : "true") << endl;
    return 0;
}