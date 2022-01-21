#include <iostream>
#include <bitset>
using namespace std;
// here we have to print the right most set bit in binary
int main()
{
    int n;
    cin >> n;
    cout << bitset<sizeof(int)>(n & -n).to_string();

    return 0;
}