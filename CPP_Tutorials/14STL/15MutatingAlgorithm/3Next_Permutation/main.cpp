#include <bits/stdc++.h>
using namespace std;
/*
 Next permutation returns a boolena variable means if its next permutation exist it will return true else false.

 1 2 3 Next permutation is 1 3 2 and it will be true as 1 2 3 next permutation exist but not for 3 2 1

*/

void printNextPermutation()
{

    vector<int> v = {1, 2, 5, 4, 3};      // The sample Vector
    next_permutation(v.begin(), v.end()); // Performing next_permutation operation
    for (int x : v)                       // Displaying the sequence
        cout << x << " ";
}
void printAllNextPermutationOfAArray()
{

    // m123 then 132 then 213 then 231 like this lexicographical order.
    vector<int> arr{1, 2, 3};
    do
    {
        for (auto i : arr)
            cout << i << " ";
        cout << endl;
    } while (next_permutation(arr.begin(), arr.end()));
}
int main()
{
    printAllNextPermutationOfAArray();
    printNextPermutation();

    return 0;
}