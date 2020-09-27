#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int len[n + 1];
        int glov[n + 1];
        int back = 0;
        int front = 0;
        int hf, gf;

        for (int i = 1; i < n + 1; i++)
        {
            cin >> len[i];
        }

        for (int i = 1; i < n + 1; i++)
        {
            cin >> glov[i];
        }

        //front
        for (int i = 1; i < n + 1; i++)
        {
            if (len[i] <= glov[i])
            {
                front++;
            }
        }
        // back
        for (int i = 1; i < n + 1; i++)
        {
            if (len[i] <= glov[n + 1 - i])
            {
                back++;
            }
        }
        if (front == n && back == n)
        {
            cout << "both" << endl;
        }
        else if (front != n && back != n)
        {
            cout << "none" << endl;
        }
        else if (front == n && back != n)
        {
            cout << "front" << endl;
        }
        else if (front != n && back == n)
        {
            cout << "back" << endl;
        }
    }

    return 0;
}

//*********************************************//
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int finger;
//         cin >> finger;
//         int front = 0;
//         int back = 0;
//         int hf, gf;

//         vector<int> hand;
//         for (int i = 0; i < finger; i++)
//         {
//             cin >> hf;
//             hand.push_back(hf);
//         }
//         vector<int> glove;
//         for (int i = 0; i < finger; i++)
//         {
//             cin >> gf;
//             glove.push_back(gf);
//         }

//         if (glove == hand)
//         {
//             cout << "both" << endl;
//         }
//         for (int i = 0; i < finger; i++)
//         {
//             if (glove[i] >= hand[i])
//             {
//                 front++;
//             }
//         }
//         reverse(glove.begin(), glove.end());
//         for (int i = 0; i < finger; i++)
//         {
//             if (glove[i] >= hand[i])
//             {
//                 back++;
//             }
//         }

//         if (front != finger && back != finger)
//         {
//             cout << "none" << endl;
//         }
//         else if (front == finger && back != finger)
//         {
//             cout << "front" << endl;
//         }
//         else if (front != finger && back == finger)
//         {
//             cout << "back" << endl;
//         }
//     }

//     return 0;
// }
