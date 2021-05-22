#include <iostream>
#include <vector>
using namespace std;
// int stoi(const string &str, [size_t * idx], [int base]);
class Solution
{
public:
    vector<string> backtrack(int n)
    {
        if (n == 1)
        {
            vector<string> bcase;
            bcase.push_back("0");
            bcase.push_back("1");
            return bcase;
        }

        vector<string> rres = backtrack(n - 1);
        vector<string> myres;
        for (int i = 0; i < rres.size(); i++)
        {
            string str = rres[i];
            str = "0" + str;
            myres.push_back(str);
        }
        for (int i = rres.size() - 1; i >= 0; i--)
        {
            string str = rres[i];
            str = "1" + str;
            myres.push_back(str);
        }
        return myres;
    }
    vector<int> grayCode(int n)
    {
        vector<int> res;
        if (n == 0)
        {
            res.push_back(0);
            return res;
        }
        vector<string> v1 = backtrack(n);
        for (int i = 0; i < v1.size(); i++)
        {
            res.push_back(stoi(v1[i], 0, 2));
        }
        return res;
    }
};