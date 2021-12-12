#include <iostream>
using namespace std;

int main()
{
    int alpha[26] = {0};
    string name = "finding";

    for (int i = 0; i < name.length(); i++)
    {
        alpha[name[i] - 97] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > 1)
        {
            cout << (char)(i + 97) << " ";
            cout << alpha[i];
            cout << endl;
        }
    }

    return 0;
}
// if both are mixed the we have to increase the size of the hash table its time complexity is O(n);