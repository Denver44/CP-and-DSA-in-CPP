#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        set<string> myset;      // we need a set in which we will store the wordlist so that when we do brutefroce apprach to find new string we doesnt get the same string back.
        bool isPresent = false; // this flag actually help to check the endWord is persent or not in Wordlist.

        for (auto word : wordList)
        {
            if (endWord.compare(word) == 0)
            {
                isPresent = true;
            }
            myset.insert(word);
        }

        if (isPresent == false)
        {
            return 0;
        }

        queue<string> q;
        q.push(beginWord);
        int depth = 0;

        while (!q.empty())
        {

            depth += 1;
            int lsize = q.size();
            while (lsize--)
            {
                string curr = q.front();
                q.pop();

                for (int i = 0; i < curr.size(); i++)
                {
                    string temp = curr;

                    for (char c = 'a'; c <= 'z'; c++)
                    {
                        temp[i] = c;
                        if (temp == endWord)
                        {
                            return depth + 1;
                        }
                        else if (temp == beginWord)
                        {
                            continue;
                        }
                        else if (myset.find(temp) != myset.end())
                        {
                            q.push(temp);
                            myset.erase(temp);
                        }
                    }
                }
            }
        }

        return 0;
    }
};
