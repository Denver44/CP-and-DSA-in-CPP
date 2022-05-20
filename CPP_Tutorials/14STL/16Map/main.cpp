#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

void basicOfMap()
{
    map<int, int> m;     // empty map container
    m.insert({10, 100}); // Insert elements using insert() function
    m.insert({30, 300});

    m[20] = 200; // Inserting using "[]" operator
    m[40];       // If you don't provide any value with key it will insert defaut value 0.

    // Traverseing map
    cout << "The map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    m[40] = 400; // We can also update the value of an existing  key-value pair using "[]" operator which is not possible with insert() function

    // Traverseing map
    cout << "\nThe map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
}

void mapFunctions()
{

    map<int, int> mp;

    mp.insert({2, 30});
    mp.insert({1, 40});
    mp.insert({3, 20});
    mp.insert({4, 50});

    // Check if the element 3 exists  in the map or not
    if (mp.find(3) != mp.end())
        cout << "3 Found!\n\n";
    else
        cout << "3 Not Found!\n";

    // Using find() function to print elements starting from a given key
    cout << "The elements from position 3 in map are : \n";
    cout << "KEY\tELEMENT\n";

    // find() function finds the position at which 3 is
    for (auto itr = mp.find(3); itr != mp.end(); itr++)
        cout << itr->first
             << '\t' << itr->second << '\n';

    // Using count to check if the key 4 exists
    if (mp.count(4) != 0)
        cout << "\n4 Found!\n";
    else
        cout << "\n4 Not Found!\n";

    // Initial size of map
    cout << "Initial size of map: " << mp.size() << "\n";

    // function to erase given position
    auto it = mp.find(2);

    // Passing iterator pointing to key 2
    // to erase it
    mp.erase(it);

    cout << "Size after erasing one element: " << mp.size() << "\n";

    // Passing key directly to erase element
    mp.erase(5);

    cout << "Size after erasing second element: " << mp.size() << "\n";

    // Erasing complete range
    mp.erase(mp.begin(), mp.end());

    cout << "Final Size: " << mp.size() << "\n";
}

void upperAndLowerBound()
{

    map<int, int> mp;
    mp.insert({2, 30});
    mp.insert({1, 10});
    mp.insert({5, 50});
    mp.insert({4, 40});

    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    // when 2 is present
    auto itl = mp.lower_bound(2);
    cout << "The lower bound of key 2 is ";
    cout << (*itl).first << " " << (*itl).second << endl;

    // when 3 is not present
    // points to next greater after 3
    itl = mp.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*itl).first << " " << (*itl).second;

    // when 6 exceeds
    itl = mp.lower_bound(6);
    cout << "\nThe lower bound of key 6 is ";
    cout << (*itl).first << " " << (*itl).second;

    // when 11 is present
    auto itr = mp.upper_bound(11);
    cout << "The upper bound of key 11 is ";
    cout << (*itr).first << " " << (*itr).second << endl;

    // when 13 is not present
    itr = mp.upper_bound(13);
    cout << "The upper bound of key 13 is ";
    cout << (*itr).first << " " << (*itr).second << endl;

    // when 17 is exceeds the maximum key, so size
    // of mp is returned as key and value as 0.
    itr = mp.upper_bound(17);
    cout << "The upper bound of key 17 is ";
    cout << (*itr).first << " " << (*itr).second;
}

int main()
{
    basicOfMap();
    mapFunctions();
    upperAndLowerBound();

    return 0;
}
