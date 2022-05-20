#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    unordered_map<string, int> HashMap;

    HashMap.insert(make_pair("INDIA", 135));
    HashMap.insert(make_pair("CHINA", 141));
    HashMap.insert(make_pair("USA", 35));
    HashMap.insert(make_pair("UK", 6));
    HashMap.insert(make_pair("CANADA", 3));

    for (auto i : HashMap)
    {
        cout << i.first << " " << i.second << " ";
    }
    cout << endl;
    cout << HashMap.at("USA") << endl;
    HashMap["USA"] = 30;
    for (auto i : HashMap)
    {
        cout << i.first << " " << i.second << " ";
    }
    cout << endl;
    cout << HashMap.at("USA") << endl;
    if (HashMap.find("INDIA") == HashMap.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << HashMap.at("INDIA"); // Use At opertaor only.
    }
   
    

    return 0;
}