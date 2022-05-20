
#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    int vertex;
    int weight;
    Pair(int v, int wtsf)
    {
        this->vertex = v;
        this->weight = wtsf;
    }
};
class mycompartor
{
public:
    int operator()(const Pair &a1, const Pair &a2)
    {
        return a1.weight > a2.weight;
    }
};

class Solution
{
public:
    void Dijkstra(unordered_map<int, vector<pair<int, int>>> &adj, vector<int> &dist, int src, int N)
    {
        vector<bool> visited(N + 1, false);
        priority_queue<Pair, vector<Pair>, mycompartor> pq;
        Pair p(src, 0);
        dist[src] = 0;
        pq.push(p);
        while (!pq.empty())
        {
            Pair rm = pq.top();
            pq.pop();
            if (visited[rm.vertex] == true)
                continue;
            visited[rm.vertex] = true;

            for (auto i : adj[rm.vertex])
            {
                if (visited[i.first] == false && rm.weight + i.second < dist[i.first])
                {
                    dist[i.first] = rm.weight + i.second;
                    Pair sp(i.first, rm.weight + i.second);
                    pq.push(sp);
                }
            }
        }
    }

    int networkDelayTime(vector<vector<int>> &times, int N, int K)
    {

        unordered_map<int, vector<pair<int, int>>> adj;
        for (int i = 0; i < times.size(); i++)
        {
            adj[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        vector<int> dist(N + 1, INT32_MAX);

        Dijkstra(adj, dist, K, N);
        int maxtime = INT_MIN;

        for (int i = 1; i <= N; i++)
        {
            cout << dist[i] << endl;
            maxtime = max(maxtime, dist[i]);
        }

        return (maxtime == INT32_MAX) ? -1 : maxtime;
    }
};