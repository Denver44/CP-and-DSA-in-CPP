#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m1;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        m1[str] = i;
    }

    int np;
    cin >> np;
    int *people = new int[np];
    for (int i = 0; i < np; i++)
    {
        int personalskills;
        cin >> personalskills;
        for (int j = 0; j < personalskills; j++)
        {
            string skill;
            cin >> skill;
            int snum = m1[skill];
            people[i] = people[i] | (1 << snum);
        }
    }

    

    return 0;
}