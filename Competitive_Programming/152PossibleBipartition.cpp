#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
class Solution
{
public:
	bool isBipartite(unordered_map<int, vector<int>> graph, int src, vector<int> &color)
	{
		queue<int> q;
		q.push(src);
		color[src] = 1;

		while (!q.empty())
		{
			int curr = q.front();
			q.pop();

			for (int e : graph[curr])
			{
				if (color[e] == color[curr]) // If anyne of his neighbours has same color then return true.
					return false;

				if (color[e] == -1)
				{
					color[e] = (1 - color[curr]);
					q.push(e);
				}
			}
		}
		return true;
	}
	bool possibleBipartition(int N, vector<vector<int>> &dislikes)
	{
		ios::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);

		unordered_map<int, vector<int>> graph;
		for (int i = 0; i < dislikes.size(); i++)
		{
			graph[dislikes[i][0]].push_back(dislikes[i][1]);
			graph[dislikes[i][1]].push_back(dislikes[i][0]);
		}

		vector<int> color(N + 1, -1);
		for (int i = 1; i <= N; i++)
		{
			if (color[i] == -1)
			{
				bool Bipartite = isBipartite(graph, i, color);
				if (Bipartite == false)
				{
					return false;
				}
			}
		}
		return true;
	}
};
