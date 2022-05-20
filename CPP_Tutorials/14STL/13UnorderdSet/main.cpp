#include <bits/stdc++.h>
using namespace std;

/*
1. Time Complexity O(1)
2. Internally it uses hashing.
*/

void basicOfUnorderedSet()
{
    unordered_set<int> keySet;
    keySet.insert(1);
    keySet.insert(12);
    keySet.insert(13);
    keySet.insert(12);
    keySet.insert(15);
    keySet.insert(13);
    keySet.insert(1);

    for (const auto &i : keySet) // to iterate over Map.
        cout << i << " ";
    cout << endl;
    cout << "Size : " << keySet.size() << endl;

    if (keySet.count(12))
        cout << "Key Found" << endl;
    else
        cout << "Key Not Found" << endl;

    keySet.erase(15);
    keySet.clear();
}

int main()
{
    basicOfUnorderedSet();
    return 0;
}
