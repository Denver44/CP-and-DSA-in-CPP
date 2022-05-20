#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void accumulateOnVector()
{
    vector<int> v = {10, 20, 30};
    int int_res = 0;
    cout << accumulate(v.begin(), v.end(), int_res) << endl; // Sum of all values of vector with int_res
    int_res = 100;
    cout << accumulate(v.begin(), v.end(), int_res) << endl; // Calculating sum of all values again with int_res
}

void accumulateWithMinusOnVector()
{
    vector<int> v = {10, 20, 30};
    int int_res = 100;
    cout << accumulate(v.begin(), v.end(), int_res, minus<int>()) << endl; // Subtracting all values of vector by int_res
}

// User-defined comparator function
int myFun(int x, int y)
{
    return x * y;
}

void accumulateWithUserDeinedComparatorOnVector()
{
    vector<int> v = {10, 20, 30};
    int int_res = 1;
    cout << accumulate(v.begin(), v.end(), int_res, myFun) << endl; // Calculating product with int_res
}

int main()
{
    accumulateOnVector();
    accumulateWithMinusOnVector();
    accumulateWithUserDeinedComparatorOnVector();
    return 0;
}