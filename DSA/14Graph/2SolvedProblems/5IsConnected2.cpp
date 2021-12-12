#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, nbr, weight;
    Edge(int src, int nbr, int weight)
    {
        this->src = src;
        this->nbr = nbr;
        this->weight = weight;
    }
};

class Graph
{
public:
    int v, e;
    map<int, vector<Edge>> adj;
    Graph(int v, int e)
    {
        this->v = v;
        this->e = e;
    }
    void addEdge(int src, int dest, int wt, bool direct = false)
    {
        if (direct)
        {
            Edge e1(src, dest, wt);
            adj[src].push_back(e1);
            return;
        }
        Edge e1(src, dest, wt);
        adj[src].push_back(e1);
        Edge e2(dest, src, wt);
        adj[dest].push_back(e2);
    }
};

void isConnected2(map<int, vector<Edge>> graph, int src, vector<bool> &visited)
{
    visited[src] = true;
    for (Edge e : graph[src])
    {
        if (visited[e.nbr] == false)
        {
            isConnected2(graph, e.nbr, visited);
        }
    }
}

int main()
{
    int vtces, edges;
    cin >> vtces >> edges;
    Graph g(vtces, edges);
    for (int i = 0; i < edges; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        g.addEdge(v1, v2, wt);
    }

    vector<bool> visited(vtces, false);
    isConnected2(g.adj, 1, visited);

    for (int i = 0; i < vtces; i++)
    {
        if (!visited[i])
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true" << endl;

    return 0;
}
