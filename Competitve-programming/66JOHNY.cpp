#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v1;
        v1.clear();
        int lenght = 0;
        cin >> lenght;

        int x = 0;
        for (int i = 0; i < lenght; i++)
        {
            cin >> x;
            v1.push_back(x);
        }
        int y;
        cin >> y;
        y = y - 1;
        int jhony = v1[y];

        sort(v1.begin(), v1.end());
        for (int i = 0; i < lenght; i++)
        {
            if (v1[i] == jhony)
            {
                cout << i + 1 << endl;
            }
        }
    }

    return 0;
}
// for (int i = 0; i < lenght; i++)
// {

//     cout << v1[i] << endl;
// }