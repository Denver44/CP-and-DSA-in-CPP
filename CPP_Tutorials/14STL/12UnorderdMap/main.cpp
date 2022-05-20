#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

/*
1. Time Complexity O(1)
2. Internally it uses hashing.
3. Key will not be Sorted.
*/

void basicOfUnorderedMap()
{
    unordered_map<string, int> HashMap;
    HashMap.insert(make_pair("INDIA", 135));
    HashMap.insert(make_pair("CHINA", 141));
    HashMap.insert(make_pair("USA", 28));
    HashMap["CANADA"] = 3;

    for (const auto &i : HashMap) // to iterate over Map.
        cout << i.first << " " << i.second << " ";
    cout << endl;

    cout << HashMap["USSR"] << endl; // Not to use this way to find any keys value, if the key is not present then it will create a new key and assign a value 0 to it.
    HashMap["USA"] = 30;             // For updating.
}

void unOrderdMapFunctions()
{
    unordered_map<string, int> ourmap;
    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    // find or access
    cout << ourmap["abc"] << endl;
    cout << ourmap.at("abc") << endl;

    // cout << ourmap.at("ghi") << endl;
    cout << "size : " << ourmap.size() << endl;
    cout << ourmap["ghi"] << endl;
    cout << ourmap["ghi"] << endl;
    cout << "size : " << ourmap.size() << endl;

    // check Presense
    if (ourmap.count("ghi") > 0)
        cout << "ghi is present" << endl;

    // erase
    ourmap.erase("ghi");
    cout << "size : " << ourmap.size() << endl;
    if (ourmap.count("ghi") > 0)
        cout << "ghi is present" << endl;
}

int main()
{
    basicOfUnorderedMap();
    unOrderdMapFunctions();
    return 0;
}
