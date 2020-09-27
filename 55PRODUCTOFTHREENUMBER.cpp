#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<long long> arr;
    long long n;
    long long N;
    int counter;
    while (t--)
    {

        counter = 0;
        cin >> n;
        N = n;
        N = sqrt(n);

        for (int i = 2; i <= N; i++)
        {

            if (n % i == 0)
            {
                counter++;
                n = n / i;
                arr.push_back(i);
            }
            if (counter == 2)
            {
                arr.push_back(n);
                break;
            }
        }

        if (counter < 2)
        {
            cout << "NO" << endl;
        }
        else if (arr[0] == arr[2] || arr[1] == arr[2])
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
        }

        arr.clear();
    }

    return 0;
}