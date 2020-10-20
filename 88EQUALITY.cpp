#include <iostream>
#include <map>
using namespace std;

// Simple String Basic Implemantation.
// Here we need to find the subsequence in which the frequency of all the charcters are same and also there are present in the k alos.
// so we have find the frequency of the string
//  then we have taken the min of the frequency
//  and then multply it of the k
// if k is grater than the map size that means the string doesnt conatin all alpahbets that time we return 0.
int main()
{

    int len, k;
    string s;
    cin >> len >> k;
    cin >> s;
    map<char, int> m1;
    for (int i = 0; i < len; i++)
    {
        m1[s[i]] += 1;
    }
    int min_value = INT32_MAX;
    for (auto i : m1)
    {
        int lowest = i.second;
        min_value = min(lowest, min_value);
        cout << i.first << " " << i.second << endl;
    }
    if (m1.size() == k)
    {

        cout << min_value * k << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}