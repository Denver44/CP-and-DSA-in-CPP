#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void basicOfMultiMap()
{
    multimap<int, int> mp;

    mp.insert({10, 20});
    mp.insert({5, 50});
    mp.insert({10, 25});

    for (auto x : mp)
        cout << x.first << " " << x.second << endl;

    return 0;
}

void multiMapFunctions()
{
    multimap<int, int> mp;

    mp.insert({10, 20});
    mp.insert({5, 50});
    mp.insert({10, 25});
    mp.insert({2, 30});
    mp.insert({1, 40});
    mp.insert({3, 60});
    mp.insert({1, 20});
    mp.insert({5, 50});

    cout << "Count of the key 10: " << mp.count(10);
    mp.erase(10); // Erase the key 10
    cout << "\nCount of the key 10: " << mp.count(10);

    // Stores the range of key 1
    auto it = mp.equal_range(1);

    cout << "The multimap elements of key 1 is : \n";
    cout << "KEY\tELEMENT\n";

    // Prints all the elements of key 1
    for (auto itr = it.first; itr != it.second; ++itr)
        cout << itr->first << '\t' << itr->second << '\n';
}

void lowerAndUpperBoundInMultiMap()
{

    multimap<int, int> mp; // initialize container

    // insert elements in random order
    mp.insert({2, 30});
    mp.insert({1, 40});
    mp.insert({2, 60});
    mp.insert({2, 20});
    mp.insert({1, 50});
    mp.insert({4, 50});

    // when 2 is present
    auto itl = mp.lower_bound(2);
    cout << "The lower bound of key 2 is ";
    cout << (*itl).first << " " << (*itl).second << endl;

    // when 3 is not present
    itl = mp.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*itl).first << " " << (*itl).second << endl;

    // when 5 exceeds
    itl = mp.lower_bound(5);
    cout << "The lower bound of key 3 is ";
    cout << (*itl).first << " " << (*itl).second << endl;

    // when 2 is present
    auto itr = mp.upper_bound(2);
    cout << "The upper bound of key 2 is ";
    cout << (*itr).first << " " << (*itr).second << endl;

    // when 3 is not present
    itr = mp.upper_bound(3);
    cout << "The upper bound of key 3 is ";
    cout << (*itr).first << " " << (*itr).second << endl;

    // when 5 is exceeds the maximum key
    itr = mp.upper_bound(5);
    cout << "The upper bound of key 5 is ";
    cout << (*itr).first << " " << (*itr).second;
}

int main()
{
    basicOfMultiMap();
    multiMapFunctions();
    lowerAndUpperBoundInMultiMap();
    return 0;
}