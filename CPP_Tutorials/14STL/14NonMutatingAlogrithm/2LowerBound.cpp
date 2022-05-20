#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
LOWER BOUND
It will return the index of exactly the same value or just greater than it.
*/

void basicsOfLowerBound()
{
    int a[] = {1, 4, 5, 6, 9, 19};
    int size = sizeof(a) / sizeof(a[0]);

    int index = lower_bound(a, a + size, 4) - a;  // this -a actually help us to get the index position as we got iterator so subtracting with start ptr we get index
    int index2 = lower_bound(a, a + size, 7) - a; // as no 7 so it will give next immediate upper number than 7 so it give index 9 that is 4.
    int *index3 = lower_bound(a, a + size, 109);
    int index4 = lower_bound(a, a + size, 0) - a;

    cout << "Total Size Of tha array is " << size << endl;
    cout << a[index] << endl;
    cout << a[index2] << endl;
    cout << a[index4] << endl;

    if (index3 == (a + size))
        cout << "Not Found" << endl;
    else
        cout << *index3 << endl;

    vector<int> arr = {1, 2, 3, 4};
    auto itr = lower_bound(arr.begin(), arr.end(), 1);
    if (itr == arr.end())
        cout << "Not Found" << endl;
    else
        cout << *itr << endl;
}

void practiceQuestionOnLoweBound()
{
    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Total Size Of tha array is " << size << endl;

    int index = lower_bound(a, a + size, 9) - a;
    if (index != size && a[index] == 9)
        cout << index << endl;
    else
        cout << -1 << endl;

    index = lower_bound(a, a + size, 6) - a;
    if (index != size && a[index] == 6)
        cout << index << endl;
    else
        cout << -1 << endl;

    index = lower_bound(a, a + size, 12) - a;
    if (index != size && a[index] == 12)
        cout << index << endl;
    else
        cout << -1 << endl;
}

int main()
{
    basicsOfLowerBound();
    practiceQuestionOnLoweBound();
    return 0;
}
