#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void binarySearchOnVector()
{
    vector<int> v = {10, 20, 30, 40, 50};
    if (binary_search(v.begin(), v.end(), 20))
        cout << "Found\n";
    else
        cout << "Not Found\n";
}

void binarySearchOnArray()
{
    int arr[] = {10, 20, 30, 40, 50};
    if (binary_search(arr, arr + 5, 20))
        cout << "Found\n";
    else
        cout << "Not Found\n";
}

// Structure for a Point
struct Point
{
    int x;
    int y;

    Point(int i, int j)
    {
        x = i;
        y = j;
    }
};

bool myCmpX(Point p1, Point p2)
{
    return p1.x < p2.x;
}
bool myCmpY(Point p1, Point p2)
{
    return p1.y < p2.y;
}

void binarySearchOnPoint()
{
    vector<Point> v = {{10, 5}, {2, 100}, {50, 90}};
    // Sorting the above set of points according to X-coordinate
    sort(v.begin(), v.end(), myCmpX);

    // Point to be searched
    Point p(2, 99); //  It will search of X as our myCmpX check X

    if (binary_search(v.begin(), v.end(), p, myCmpX))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    sort(v.begin(), v.end(), myCmpY);
    Point p2(2, 99); //  It will search of Y as our myCmpY check Y
    if (binary_search(v.begin(), v.end(), p2, myCmpY))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    Point p3(2, 90); //  It will search of Y as our myCmpY check Y
    if (binary_search(v.begin(), v.end(), p3, myCmpY))
        cout << "Found\n";
    else
        cout << "Not Found\n";
}

int main()
{
    binarySearchOnVector();
    binarySearchOnArray();
    binarySearchOnPoint();
    return 0;
}