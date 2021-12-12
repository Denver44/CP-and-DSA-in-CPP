#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(map<int, vector<pair<int, int>>> &adj, vector<bool> &visited, int src, int dest, int K, int &Fare, int totcost)
    {
        if (K < -1)
        {
            return;
        }
        if (src == dest)
        {
            Fare = min(Fare, totcost);
            return;
        }
        visited[src] = true;
        for (auto e : adj[src])
        {
            if (visited[e.first] == false && (totcost + e.second <= Fare))
            {
                dfs(adj, visited, e.first, dest, K - 1, Fare, totcost + e.second);
            }
        }
        visited[src] = false;
    }

    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int K)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        map<int, vector<pair<int, int>>> adj;
        for (int i = 0; i < flights.size(); i++)
        {
            adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        vector<bool> visited(n + 1, false);
        int Fare = INT32_MAX;
        dfs(adj, visited, src, dst, K, Fare, 0);

        return (Fare == INT32_MAX) ? -1 : Fare;
    }
};