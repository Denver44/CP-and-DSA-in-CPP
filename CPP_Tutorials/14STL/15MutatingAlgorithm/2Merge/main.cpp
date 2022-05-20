#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
Two sorted array is must
Third container size must at least it can fit the elements of container1 and container2
*/
void printer(auto arr, int size)
{
    for (int x = 0; x < size; x++)
        cout << arr[x] << " ";
    cout << endl;
}

void mergeAnArray()
{
    vector<int> v1 = {10, 20, 40}, v2 = {5, 15, 30};
    vector<int> v3(6);                                             // Output vector
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); // Performing merge operation
    printer(v3, v3.size());                                        // Displaying the v3
}

void mergeAnVector()
{

    int ar1[] = {10, 20, 30}, ar2[] = {5, 15, 40, 80};
    int ar3[7];                             // Output array
    merge(ar1, ar1 + 3, ar2, ar2 + 4, ar3); // Performing merge operation
    printer(ar3, 7);                        // Displaying the ar3
}

int main()
{
    mergeAnArray();
    mergeAnVector();
    return 0;
}
