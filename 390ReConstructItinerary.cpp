#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findItinerary(vector<vector<string>> &tickets)
    {
        // Here the number of vertex is not givern so we dont make visited array.
        // So we use a stack for traversal
        // Multiset help us to get the data in Lexico.
        // and reversing the ans we get our answer.
        // It will always a single Compnent as it is said in question it will have a valid path to destination.
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<string> ans;
        unordered_map<string, multiset<string>> adj;
        int n = tickets.size();
        for (int i = 0; i < n; i++)
        {
            adj[tickets[i][0]].insert(tickets[i][1]);
        }

        stack<string> mystack;
        mystack.push("JFK");
        while (!mystack.empty())
        {
            string src = mystack.top();

            if (adj[src].size() == 0)
            {
                ans.push_back(src);
                mystack.pop();
            }
            else
            {
                auto dst = adj[src].begin();
                mystack.push(*dst);
                adj[src].erase(dst);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};