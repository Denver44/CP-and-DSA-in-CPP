#include <bits/stdc++.h>
using namespace std;
// Subsequence or subset is same it has Two choice either it will come or not.
vector<string> subsequence(string s1)
{
    if (s1.empty())
    {
        vector<string> v1;
        v1.push_back(""); // return and empty string.
        return v1;
    }

    char ch = s1[0];                         // Take the first Character
    s1 = s1.substr(1);                       // then take substring removing the firstelement
    vector<string> output = subsequence(s1); // call funtion recursively.
    vector<string> output2;                  // in this current result will be saved.
    
    for (auto i : output) // First Choice I WILL NOT COME
    {
        output2.push_back(i);
    }
    for (auto i : output) //Second Chance I WILL COME
    {
        output2.push_back(ch + i);
    }
    return output2; // this result will be return.
}
int main()
{

    string s1 = "abc";
    vector<string> res;
    res = subsequence(s1);

    for (auto i : res)
    {
        cout << i << endl;
    }

    return 0;
}
