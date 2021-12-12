// It is also Helpful to detetc that There is  a Cycle or not.
// Using Indegree and Outdegree.

#include <bits/stdc++.h>
using namespace std;

class Solution
{

    bool KhansAlgo(vector<vector<int>> &adj, int n, vector<int> &indegree, vector<int> &ans)
    {
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0) //  We push all the vertex whose Indegree is Zero.
                q.push(i);
        }
        int count = 0;
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            for (auto a : adj[curr])
            {
                indegree[a]--;
                if (indegree[a] == 0)
                {
                    q.push(a);
                }
            }

            ans.push_back(curr);
            count += 1;
        }

        if (count != n)
        {
            return false; // This Means it is Cyclic .
        }
        return true;
    }

public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> adj(numCourses + 1); // Our Adjaency List.
        vector<int> indegree(numCourses + 1,0);    // This is Indegree Array
        for (int i = 0; i < prerequisites.size(); i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++; // if we have go 0 to 1 then push +1 for 1.
        }

        vector<int> ans;
        if (KhansAlgo(adj, numCourses, indegree, ans)) // if its is cycle so topolgcal sort is not possible.
            return ans;

        vector<int> empty;
        return empty;
    }
};
