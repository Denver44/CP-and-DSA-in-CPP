#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

class Solution
{
public:
    bool KhansAlgo(vector<vector<int>> &graph, vector<int> &inDegree, int numCourses, vector<int> &ans)
    {
        int count = 0;
        queue<int> q;
        for (int i = 0; i < inDegree.size(); i++)
        {
            if (inDegree[i] == 0)
                q.push(i);
        }

        while (!q.empty())
        {
            int v = q.front();
            q.pop();

            for (auto e : graph[v])
            {
                --inDegree[e];
                if (inDegree[e] == 0)
                    q.push(e);
            }
            ans.push_back(v);
            count++;
        }
        return (count == numCourses) ? true : false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> graph(numCourses);
        vector<int> inDegree(numCourses, 0);
        for (auto edge : prerequisites)
        {
            int v1 = edge[1], v2 = edge[0];
            graph[v1].push_back(v2);
            inDegree[v2]++;
        }
        vector<int> ans, empty;
        bool flag = false;
        flag = KhansAlgo(graph, inDegree, numCourses, ans);

        return (flag == false) ? empty : ans;
    }
};
