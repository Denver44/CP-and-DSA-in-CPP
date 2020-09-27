#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string name;
        int hash[26] = {0};
        int hash2[26] = {0};
        cin >> name;
        int mid = name.length() / 2;
        if (name.length() % 2 != 0)
        {
            mid = mid + 1;
            for (int i = 0; i < mid - 1; i++)
            {
                hash[int(name[i]) - 97]++;
            }

            for (int i = mid; i < name.length(); i++)
            {
                hash2[int(name[i]) - 97]++;
            }
        }
        else
        {
            for (int i = 0; i < mid; i++)
            {
                hash[int(name[i]) - 97]++;
            }

            for (int i = mid; i < name.length(); i++)
            {
                hash2[int(name[i]) - 97]++;
            }
        }

        int count = 0;

        for (int i = 0; i < 26; i++)
        {

            if (hash[i] == hash2[i])
            {
                count++;
            }
        }

        if (count == 26)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}