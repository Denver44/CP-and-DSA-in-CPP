#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

class Edge
{
public:
    int src;
    int nbr;
    int weight;

    Edge(int src, int nbr, int weight)
    {
        this->src = src;
        this->nbr = nbr;
        this->weight = weight;
    }
};

class Pair
{
public:
    int vertex;
    string psf;
    Pair(int v, string str)
    {
        this->vertex = v;
        this->psf = str;
    }
};

class Graph
{
public:
    map<int, vector<Edge>> adj;
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
    void DFT(map<int, vector<Edge>> adj, vector<bool> &visited, Pair p)
    {
        visited[p.vertex] = true;                     // Marks
        cout << p.vertex << " via " << p.psf << endl; // Work
        for (auto e : adj[p.vertex])
        {
            if (visited[e.nbr] == false) // VisitNeighbour
            {
                Pair np(e.nbr, p.psf + to_string(e.nbr));
                DFT(adj, visited, np);
            }
        }
    }
};
int main()
{
    Graph g1;
    g1.addEdge(0, 1, 10);
    g1.addEdge(0, 3, 10);
    g1.addEdge(1, 2, 10);
    g1.addEdge(2, 3, 10);
    g1.addEdge(3, 4, 10);
    g1.addEdge(4, 5, 10);
    g1.addEdge(5, 6, 10);
    g1.addEdge(5, 6, 10);

    g1.Display();
    vector<bool> visited(7, false);
    // Pair actually help us in two thing one src and another psf by passing invidiually both we pass both of them in a a pair.
    Pair p(0, to_string(0));
    g1.DFT(g1.adj, visited, p);

    return 0;
}
