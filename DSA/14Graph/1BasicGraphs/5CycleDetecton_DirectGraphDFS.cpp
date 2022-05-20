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
    map<int, vector<Edge>> adj; // adjaceny list.
    void addEdge(int src, int dest, int wt, bool direct = false)
    {
        if (direct)
        {
            Edge e1(src, dest, wt);
            adj[src].push_back(e1);
        }
        else
        {
            Edge e1(src, dest, wt);
            adj[src].push_back(e1);
            Edge e2(dest, src, wt);
            adj[dest].push_back(e2);
        }
    }
    int totalVertex()
    {
        return adj.size();
    }
    int totalEdges()
    {
        int count = 0;
        for (auto i : adj)
            count += i.second.size();
        return count;
    }

    void Display()
    {

        for (auto i : adj)
        {
            cout << i.first << " -> "
                 << "{";
            for (auto itr : i.second)
                cout << itr.nbr << " = " << itr.weight << ", ";
            cout << "\b\b}" << endl;
        }
    }
};

bool iscyclic(map<int, vector<Edge>> adj, int curr, vector<int> &visited)
{

    if (visited[curr] == 2) // Someone also is Processing the Same vertex So Cycle is Detected Here.
        return true;
    visited[curr] = 2; // Mark as Processing

    for (Edge e : adj[curr])
    {
        if (visited[e.nbr] != 1) // If your not Fully Processed then Welocme
        {
            if (iscyclic(adj, e.nbr, visited)) // if it cyclic it will retun true;
                return true;
        }
    }
    visited[curr] = 1; // Fully processed
    return false;
}
int main()
{
    Graph g1;
    g1.addEdge(0, 1, 10, true);
    g1.addEdge(1, 2, 10, true);
    g1.addEdge(2, 3, 10, true);
    g1.addEdge(3, 4, 10, true);
    g1.addEdge(5, 6, 10, true);
    g1.addEdge(6, 7, 10, true);
    g1.addEdge(7, 5, 10, true);
    g1.Display();

    vector<int> visited(g1.totalVertex(), 0);
    for (int i = 0; i < g1.totalVertex(); i++)
    {
        if (visited[i] == 0)
        {
            if (iscyclic(g1.adj, i, visited))
            {
                cout << "true";
                return 0;
            }
        }
    }

    cout << "false";
    return 0;
}
