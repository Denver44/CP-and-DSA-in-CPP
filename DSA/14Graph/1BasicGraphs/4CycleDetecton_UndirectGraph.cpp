#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// This a Edge contain a src nbr and weight.
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
bool iscyclic(map<int, vector<Edge>> adj, int src, vector<bool> &visited)
{
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int rv = q.front();
        q.pop();

        if (visited[rv] == true)
        {
            return true;
        }
        visited[rv] = true;

        for (Edge e : adj[rv])
        {
            if (visited[e.nbr] == false)
            {
                q.push(e.nbr);
            }
        }
    }
    return false;
}
int main()
{
    Graph g1;
    g1.addEdge(0, 1, 10);
    g1.addEdge(2, 3, 10);
    g1.addEdge(3, 4, 10);
    g1.addEdge(4, 2, 10);
    g1.Display();
    vector<bool> visited(g1.totalVertex(), false);
    for (int i = 0; i < g1.totalVertex(); i++)
    {
        if (visited[i] == false)
        {
            if (iscyclic(g1.adj, i, visited))
            {
                cout << "true";
                return 1;
            }
        }
    }

    cout << "false";
    return 0;
}
