#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int a_pointer = 0;
        int b_pointer = 0;
        int res = 0;
        unordered_set<char> s1;

        while (b_pointer < s.length())
        {
            if (s1.find(s[b_pointer]) == s1.end())
            {
                s1.insert(s[b_pointer]);
                res = max(int(s1.size()), res);
                b_pointer++;
            }
            else
            {
                s1.erase(s[a_pointer]);
                a_pointer++;
            }
        }
        for (auto i : s1)
        {
            cout << i << endl;
        }

        return res;
    }
};
int main()
{

    return 0;
}

// s1 set  i = 0  j=0                     set :-  a,b,c
// a<-i=0
// b<-i=1
// c <-j=2 <i=2
// a<-j=3
// b<-j=4
// c
// b
// b