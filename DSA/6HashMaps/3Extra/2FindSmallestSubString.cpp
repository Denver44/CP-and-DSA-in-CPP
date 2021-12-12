#include <bits/stdc++.h>
using namespace std;

char *findMinSubstringContainingString(char *large, char *small)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int llen = strlen(large), slen = strlen(small);
    unordered_map<char, int> map2, map1;
    for (int i = 0; i < slen; i++)
        map2[small[i]]++;

    int dcmt = slen;
    int mct = 0;
    string ans = "";
    int i = 0, j = 0;
    bool flag1, flag2;
    while (true)
    {
        flag1 = flag2 = false;

        while (i < llen && mct != dcmt)
        {
            map1[large[i]]++;
            if (map2.count(large[i]) == 1 && map1[large[i]] <= map2[large[i]])
                mct++;
            i++;
            flag1 = true;
        }
        while (j < i && mct == dcmt)
        {
            string pans = "";
            for (int k = j; k < i; k++)
                pans += large[k];

            if (ans.size() == 0 || pans.size() < ans.size())
                ans = pans;
            if (map1[large[j]] == 1)
                map1.erase(large[j]);
            else
                map1[large[j]]--;
            if (map2.count(large[j]) == 1 && map1[large[j]] < map2[large[j]])
                mct--;
            j++;
            flag2 = true;
        }
        if (flag1 == flag2 == false)
            break;
    }
    char *answer = new char[ans.size()];
    int l = 0;
    for (; l < ans.size(); l++)
    {
        answer[l] = ans[l];
    }
    answer[l] = '\0';

    return answer;
}
