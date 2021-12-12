// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int l;
//     int t;
//     int w, h;
//     cin >> l;
//     cin >> t;
//     while (t--)
//     {
//         cin >> w >> h;

//         if ((w == h) && (h == l))
//         {
//             cout << "ACCEPTED" << endl;
//         }

//         if (w < l || h < l)
//         {
//             cout << "UPLOAD ANOTHER" << endl;
//         }

//         else if (w > l || h > l)
//         {
//             cout << "CROP IT" << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

int main()

{

    int L, N, W, H;

    cin >> L;

    cin >> N;

    for (int i = 0; i < N; i++)

    {

        cin >> W >> H;

        if (W > L && H > L)

        {

            cout << "CROP IT" << endl;
        }

        if (W > L && H < L)

        {

            cout << "UPLOAD ANOTHER" << endl;
        }

        if (W < L && H > L)

        {

            cout << "UPLOAD ANOTHER" << endl;
        }

        if (W == H)

        {

            cout << "ACCEPTED" << endl;
        }

        if (W > L && H == L)

        {

            cout << "CROP IT" << endl;
        }

        if (W == L && H > L)

        {

            cout << "CROP IT" << endl;
        }
    }

    return 0;
}