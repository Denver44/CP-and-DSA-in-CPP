#include <bits/stdc++.h>
using namespace std;
// DeadLock Detetcion In this we have to jsut check that the graph is Cyclic or Not.
// The Graph is Directed.
// So here we have use the Dfs Approach Only
// Using a Visited array and values 1 and  2 we detect that Deadlock Detetction.
// Here 1 is Fully processed and 2 Means Processing stages
class Solution
{
public:
    bool isCyclic(vector<vector<int>> &graph, int src, vector<int> &visited)
    {

        if (visited[src] == 2)
            return true;
        visited[src] = 2; // PROCESSING

        for (auto e : graph[src])
            if (visited[e] != 1) // NOT VISITED & PROCESSING ARE WELCOME.
                if (isCyclic(graph, e, visited))
                    return true;

        visited[src] = 1; // FULLY PROCESSED
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {

        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        vector<vector<int>> graph(numCourses);
        for (auto edge : prerequisites)
            graph[edge[1]].push_back(edge[0]);

        vector<int> visited(numCourses, 0);
        for (int i = 0; i < numCourses; i++)
            if (visited[i] == 0)
                if (isCyclic(graph, i, visited))
                    return false;

        return true;
    }
};
