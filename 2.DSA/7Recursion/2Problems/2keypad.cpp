#include <bits/stdc++.h>
using namespace std;

vector<string> keypad(string combination)
{
    map<char, string> phone;
    phone['2'] = "abc";
    phone['3'] = "def";
    phone['4'] = "ghi";
    phone['5'] = "jkl";
    phone['6'] = "mno";
    phone['7'] = "pqrs";
    phone['8'] = "tuv";
    phone['9'] = "wxyz";

    if (combination.empty())
    {
        vector<string> out;
        out.push_back("");
        return out;
    }

    char ch = combination[0];
    combination = combination.substr(1);
    vector<string> result = keypad(combination);
    vector<string> result2;
    string letter = phone[ch];
    for (int i = 0; i < letter.length(); i++)
    {
        for (int j = 0; j < result.size(); j++)
        {
            result2.push_back(letter[i] + result[j]);
        }
    }
    return result2;
}

int main()
{
    vector<string> res;
    res = keypad("456");
    for (auto i : res)
    {
        cout << i << endl;
    }

    return 0;
}