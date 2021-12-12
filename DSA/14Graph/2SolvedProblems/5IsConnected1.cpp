#include <bits/stdc++.h>
using namespace std;

//  same As Previous Question if our Graph is Connected then we can get only one component.
class Edge
{
public:
    int src; // source row
    int nbr; // Neighbour row
    int wt;  // weight

    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

void drawTreeandGenerateCompnent(vector<vector<Edge>> graph, int src, vector<int> &comp, vector<bool> &visited)
{
    visited[src] = true;
    comp.push_back(src);

    for (Edge e : graph[src])
    {
        if (visited[e.nbr] == false)
        {
            drawTreeandGenerateCompnent(graph, e.nbr, comp, visited);
        }
    }
}

int main()
{
    int vtces;
    cin >> vtces;
    vector<vector<Edge>> graph(vtces);

    int edges;
    cin >> edges;
    for (int i = 0; i < edges; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        Edge edge1(v1, v2, wt);
        graph[v1].push_back(edge1);
        Edge edge2(v2, v1, wt);
        graph[v2].push_back(edge2);
    }

    vector<bool> visited(vtces, false);

    vector<vector<int>> final;
    for (int i = 0; i < vtces; i++)
    {
        if (visited[i] == false)
        {
            vector<int> comp;
            drawTreeandGenerateCompnent(graph, i, comp, visited);
            final.push_back(comp);
        }
    }

    (final.size() == 1) ? cout << "true" : cout << "false"; // this is main.

    return 0;
}
