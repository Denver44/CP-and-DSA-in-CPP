#include <bits/stdc++.h>
using namespace std;

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

void printAllPaths(vector<vector<Edge>> graph, int src, int dest, vector<bool> visited, string psf)
{

    if (src == dest)
    {
        cout << psf << endl;
        return;
    }

    visited[src] = true;
    for (Edge edge : graph[src])
    {
        if (visited[edge.nbr] == false)
        {
            printAllPaths(graph, edge.nbr, dest, visited, psf + to_string(edge.nbr));
        }
    }

    visited[src] = false;
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

    vector<bool> visited(vtces, false);
    printAllPaths(graph, src, dest, visited, to_string(src) + "");

    return 0;
}
