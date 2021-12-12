#include <bits/stdc++.h>
using namespace std;

void findLargestUniqueSubstring(char input[], char output[])
{

    int len = strlen(input);
    map<char, int> helper;
    string maxlen = "", ans = "";
    for (int i = 0; i < len - 1; i++)
    {
        helper.clear();
        ans = "";
        ans += input[i];
        helper[input[i]] = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (helper.count(input[j]) == 0)
            {
                helper[input[j]] = 1;
                ans.push_back(input[j]);
            }
            else
                break;
        }
        if (ans.size() > maxlen.size())
        {
            maxlen = ans;
        }
    }
    int k = 0;
    for (; k < maxlen.size(); k++)
    {
        output[k] = maxlen[k];
    }
    output[k] = '\0'; // for termianting other wise we will get garbage value as the output size is already decalred in the question for 1000.
}
