#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void RotateOnVector()
{
    vector<int> v = {10, 20, 30, 40, 50, 60};

    rotate(v.begin(), v.begin() + 2, v.end()); // Rotating the vector by 3rd position  Here mid iterator will be iterator pointing to 3rd element: begin() + 2
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

void RotateOnArray()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

    // Rotating the array by 3rd position Here mid iterator will be iterator pointing to 3rd element: arr + 2
    rotate(arr, arr + 2, arr + 6);

    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}

int main()
{
    RotateOnVector();
    RotateOnArray();
    return 0;
}