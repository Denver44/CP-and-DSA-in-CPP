
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Point
{
public:
    int x;
    int y;
    Point(int i, int j)
    {
        x = i;
        y = j;
    }
};

// User defined comparator function to compare according to the X-coordinate only
bool myCmp(Point &p1, Point &p2)
{
    return (p1.x < p2.x);
}

void maxAndMinOnVector()
{
    vector<int> v = {10, 5, 30, 40, 90, 8};
    auto it1 = max_element(v.begin(), v.end());                         // returns iterator to max_element
    auto it2 = min_element(v.begin(), v.end());                         // returns iterator to min_element
    cout << "Max Element: " << *it1 << "Min Element: " << *it2 << endl; // Print the max and min values
}
void maxAndMinOnArr()
{
    int arr[] = {5, 6, 20, 90, 4, 8};
    cout << "Max Element: " << *max_element(arr, arr + 6) << endl;
    cout << "Min Element: " << *min_element(arr, arr + 6);
}

void maxAndMinOnUserDefinedData()
{
    vector<Point> v = {{5, 4}, {2, 300}, {90, 10}}; // Declaring vector of Points

    auto it = max_element(v.begin(), v.end(), myCmp);

    cout << "Point with max X-coordinate: "
         << "(" << (*it).x << ", " << (*it).y << ")" << endl;

    it = min_element(v.begin(), v.end(), myCmp);

    cout << "Point with min X-coordinate: "
         << "(" << (*it).x << ", " << (*it).y << ")" << endl;
}

int main()
{
    maxAndMinOnVector();
    maxAndMinOnArr();
    maxAndMinOnUserDefinedData();
    return 0;
}
