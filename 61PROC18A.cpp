#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int km;
        int maxspeed;
        cin >> km;
        cin >> maxspeed;
        int arr[km];
        for (int i = 0; i < km; i++)
        {
            cin >> arr[i];
        }

        int max = 0;
        for (int i = 0; i <= km - maxspeed; i++)
        {
            int sum = 0;
            for (int j = i; j < i + maxspeed; j++)
            {
                sum = sum + arr[j];
            }
            if (sum > max)
            {
                max = sum;
            }
        }
        cout << max << endl;
    }

    return 0;
}