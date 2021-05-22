#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// In this order doesnt mater
// we have to group the element in one type of anagram and return it..

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mymap;
        int n = strs.size();
        string temp;

        for (int i = 0; i < n; i++)
        {
            temp = strs[i];
            sort(strs[i].begin(), strs[i].end()); 
            mymap[strs[i]].push_back(temp);
        }

        vector<vector<string>> result;

        for (auto itr = mymap.begin(); itr != mymap.end(); itr++)
        {
            result.push_back(itr->second);
        }

        return result;
    }
};

int main()
{
    unordered_map<string, vector<int>> mydict;
    mydict["durgesh"].push_back(4);
    mydict["durgesh"].push_back(4);
    mydict["durgesh"].push_back(1999);
    mydict["vishal"].push_back(2000);
    mydict["priya"].push_back(1993);

    for (auto i = mydict.begin(); i != mydict.end(); i++)
    {
        int x = i->second.size();
        for (int j = 0; j < x; j++)
        {
            cout << i->second[j] << endl;
        }
    }

    return 0;
}