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
    void addEdgeUndirected(int src, int dest, int wt, bool direct = false)
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

int main()
{
    Graph g1;
    g1.addEdgeUndirected(0, 1, 10);
    g1.addEdgeUndirected(1, 2, 10);
    g1.addEdgeUndirected(2, 3, 10);
    g1.addEdgeUndirected(0, 3, 10);
    g1.addEdgeUndirected(3, 4, 10);
    g1.addEdgeUndirected(4, 5, 10);
    g1.addEdgeUndirected(5, 6, 10);
    g1.addEdgeUndirected(4, 6, 10);

    g1.Display();

    vector<bool> visited(7, false);
    int src = 3;
    Pair p(src, to_string(src) + "");
    queue<Pair> q;
    q.push(p);
    visited[src] = true;
    while (!q.empty())
    {
        Pair remv = q.front();
        q.pop();
        cout << remv.vertex << "@" + remv.psf << endl;
        for (Edge e : g1.adj[remv.vertex])
        {
            if (visited[e.nbr] == false)
            {
                visited[e.nbr] = true; // This actually saves space and time both at the time of its neigboiurs we marked it as true so no other can mark unecesaary whicg will create a extra waste in queue.
                Pair p(e.nbr, remv.psf + to_string(e.nbr));
                q.push(p);
            }
        }
    }

    return 0;
}
