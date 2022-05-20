#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Point // A point in 2D space has x and y coordinates
{
    int x, y;
};

bool myCmp(Point p1, Point p2) // Compares two points according to x coordinates
{
    return (p1.x < p2.x);
}

void ownComparatorSorting()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sort the points in increasing order of x coordinates
    sort(arr, arr + n, myCmp);
    for (auto i : arr)
        cout << i.x << " " << i.y << endl;
}

void printer(auto a, int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

void SortArray()
{
    int decArr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10};
    sort(decArr, decArr + 10);
    printer(decArr, 10);
    int incArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(incArr, incArr + 10, greater<int>());
    printer(incArr, 10);
}

void SortVector()
{
    vector<int> v1;
    v1.push_back(9);
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(56);
    v1.push_back(78);
    sort(v1.begin(), v1.end());
    printer(v1, v1.size());
}
int main()
{
    SortArray();
    SortVector();
    ownComparatorSorting();
    return 0;
}
