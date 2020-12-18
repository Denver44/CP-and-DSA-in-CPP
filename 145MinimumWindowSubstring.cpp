#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

class Solution
{
public:
    string minWindow(string s, string t)
    {
        fast();
        if (s.empty() || t.empty())
            return "";

        unordered_map<char, int> map2;
        for (int i = 0; i < t.size(); i++)
        {
            map2[t[i]]++;
        }
        
        int dmct = t.size();
        int i = 0, j = 0;
        int mct = 0;
        string ans = "";
        unordered_map<char, int> map1;

        while (true)
        {
            bool flag1 = false, flag2 = false;
            while (i < s.size() && mct != dmct)
            {

                map1[s[i]]++;
                if (map2.count(s[i]) == 1 && map1[s[i]] <= map2[s[i]])
                    mct++;
                i++;
                flag1 = true;
            }

            while (j < i && mct == dmct)
            {
                string pans = s.substr(j, i - j);

                if (ans.size() == 0 || pans.size() < ans.size())
                    ans = pans;
                if (map1[s[j]] == 1)
                    map1.erase(s[j]);
                else
                    map1[s[j]]--;

                if (map2.count(s[j]) == 1 && map1[s[j]] < map2[s[j]])
                    --mct;
                j++;
                flag2 = true;
            }
            if (flag1 == false && flag2 == false)
                break;
        }
        return ans;
    }
};
