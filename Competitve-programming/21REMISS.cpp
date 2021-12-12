#include <iostream>
using namespace std;

int main()
{
    // One is sleeping at that 19 come
    // when anither one is sleeping then 17 come
    // so total will be 36
    int t;
    cin >> t;
    int a, b, min_value;
    while (t--)
    {
        cin >> a >> b;
        min_value = max(a, b);

        cout << min_value << " " << a + b << endl;
    }
    return 0;
}