#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
//---------------------------Using Graph Colorimg method we check that the graph is Bipartite or Not.-----------------------------
// Bipartie means we have to make a set ot two in which the vertex of set1 go towrad the another set2.
// Every Non-Cyclic Graph Its is Bipartite.
// If Cycle and Even Size Then Also Bipartite We have done using our own Values.
// IF cycle and Odd lenght then it is Not bipaertite.
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

bool isBipartie(map<int, vector<Edge>> graph, vector<int> &color, int src)
{
    queue<int> q;
    q.push(src);
    color[src] = 1;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (Edge e : graph[curr])
        {
            if (color[e.nbr] == color[curr])
                return false;

            if (color[e.nbr] == -1)
            {
                color[e.nbr] = 1 - color[curr];
                q.push(e.nbr);
            }
        }
    }
    return true;
}

int main()
{
    Graph g1;
    g1.addEdge(1, 2, 10);
    g1.addEdge(1, 6, 10);
    g1.addEdge(6, 5, 10);
    g1.addEdge(5, 4, 10);
    g1.addEdge(4, 3, 10);
    g1.addEdge(2, 3, 10);
    vector<int> color(g1.totalVertex() + 1, -1);
    for (int i = 1; i <= g1.totalVertex(); i++)
    {
        if (color[i] == -1) // Intially All are -1.
        {
            bool cycle_an_oddlenght = isBipartie(g1.adj, color, i);
            if (!cycle_an_oddlenght)
            {
                cout << "false";
                return 0;
            }
        }
    }
    cout << "true";

    return 0;
}
