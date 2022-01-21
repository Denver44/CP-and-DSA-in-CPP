#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, nbr, wt;
    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

bool haspath(vector<vector<Edge>> graph, int src, int dest, vector<bool> visited)
{

    if (src == dest)
        return true;
    visited[src] = true;
    for (Edge edge : graph[src])
    {
        if (visited[edge.nbr] == false)
        {
            bool hasNbrPath = haspath(graph, edge.nbr, dest, visited);
            if (hasNbrPath == true)
                return true;
        }
    }
    return false;
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

    int src, dest;
    cin >> src >> dest;

    vector<bool> visited(vtces, false); //  help so that we dont go to same place where we visited before.
    bool path = haspath(graph, src, dest, visited);
    cout << ((path == 1) ? "true" : "false");

    return 0;
}
