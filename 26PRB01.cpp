#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num;
    int res;
    int flag = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        for (int i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                flag++;
            }
        }
        if (flag == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        flag = 0;
    }

    return 0;
}