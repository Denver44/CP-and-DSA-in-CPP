#include <iostream>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s, pattern;
        cin >> s >> pattern;
        // s = "daehabshatorawy";
        // pattern = "badawy";
        int freq[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < pattern.length(); i++)
        {
            freq[pattern[i] - 'a']--;
        }

        string result = "";

        for (int i = 0; i < 26; i++)
        {
            if ('a' + i == pattern[0])
            {
                int z = 1;
                while (z < pattern.size() && pattern[0] == pattern[z])
                {
                    z++;
                }
                if (z >= pattern.size())
                {
                    result.insert(result.size(), pattern);
                    result.insert(result.size(), freq[i], 'a' + i);
                }
                else if (pattern[z] < pattern[0])
                {
                    result.insert(result.size(), pattern);
                    result.insert(result.size(), freq[i], 'a' + i);
                }
                else
                {

                    result.insert(result.size(), freq[i], 'a' + i);
                    result.insert(result.size(), pattern);
                }
            }
            else
            {

                result.insert(result.size(), freq[i], 'a' + i);
            }
        }
        cout << result << endl;
    }
    // Insert function first Position
    // Insert function number of charcater to insert Position
    // Insert function third charatcter

    // Inserts 2 characters from"ai"
    // at 3th index of str
    string name = "Durgesh";
    name.insert(3, 0, 'a');
    cout << name;

    return 0;
}
//  S1: apopqpzp
//  p: po // decreasing order
// LO: apppqz
// ans : a-po-ppppqz

//  S2: apopqpzp
// p: pq // increasing order.
// LO: aopppz
//  ans : aoppp-pq-z