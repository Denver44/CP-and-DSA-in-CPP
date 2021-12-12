#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v1;
    int oldterm = 0;
    int newterm = 1;
    int newestterm;
    int i = 2;
    while (i <= 17)
    {
        newestterm = oldterm + newterm;
        v1.push_back(newestterm);
        oldterm = newterm;
        newterm = newestterm;
        i++;
    }
    int flag = 0;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < v1.size(); j++)
        {
            if (i == v1[j])
            {
                cout << "O";
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "o";
        }
        flag = 0;
    }

    return 0;
}