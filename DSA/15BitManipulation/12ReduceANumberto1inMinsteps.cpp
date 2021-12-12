// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     while (n != 1)
//     {
//         if (n % 2 == 0)
//         {
//             n = n / 2;
//         }
//         else if (n == 3) // base case
//         {
//             n = n - 1;
//         }
//         else if ((n & 3) == 1)
//         {
//             n = n - 1;
//         }
//         else if ((n & 3) == 3)
//         {
//             n = n + 1;
//         }
//         count++;
//     }
//     cout << count << endl;

//     return 0;
// }
// ------------------------2nd way---------------------
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long count = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else if (n == 3) // base case
        {
            n = n - 1;
        }
        else if (n % 4 == 1)
        {
            n = n - 1;
        }
        else if (n % 4 == 3)
        {
            n = n + 1;
        }
        count++;
    }
    cout << count << endl;

    return 0;
}
