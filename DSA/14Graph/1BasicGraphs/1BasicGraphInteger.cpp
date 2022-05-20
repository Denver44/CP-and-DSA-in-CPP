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
int main()
{
    Graph g1;
    g1.addEdge(0, 1, 10);
    g1.addEdge(1, 2, 10);
    g1.addEdge(2, 3, 10);
    g1.addEdge(0, 3, 10);
    g1.addEdge(3, 4, 10);
    g1.addEdge(4, 5, 10);
    g1.addEdge(5, 6, 10);
    g1.addEdge(4, 6, 10);
    g1.Display();

    return 0;
}
