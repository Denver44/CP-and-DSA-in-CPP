#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
/* Reason Behind Prims and Kruskals Fails for Directed Graph
Prim’s algorithm assumes that all vertices are connected. But in a directed graph, every node is not reachable from every other node. So, Prim’s algorithm fails due to this reason.

In Kruskal’s algorithm, In each step, it is checked that if the edges form a cycle with the spanning-tree formed so far. But Kruskal’s algorithm fails to detect the cycles in a directed graph as there are cases when there is no cycle between the vertices but Kruskal’s Algorithm assumes it to cycle and don’t take consider some edges due to which Kruskal’s Algorithm fails for directed graph.
*/

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

class Pair
{
public:
    int vertex;
    int acquireby; // this acquire by help us that we acquire the vertex by this.
    int weight;
    Pair(int v, int acquireby, int wt)
    {
        this->vertex = v;
        this->acquireby = acquireby;
        this->weight = wt;
    }
};

class myComparator
{

public:
    int operator()(const Pair &p1, const Pair &p2)
    {
        return p1.weight > p2.weight;
    }
};

void PrimsAlgorithm(map<int, vector<Edge>> adj)
{
    vector<bool> visited(adj.size(), false);
    priority_queue<Pair, vector<Pair>, myComparator> pq;
    Pair p(0, -1, 0);
    pq.push(p);

    while (!pq.empty())
    {
        Pair rm = pq.top();
        pq.pop();
        if (visited[rm.vertex] == true)
        {
            continue;
        }
        visited[rm.vertex] = true;
        if (rm.acquireby != -1)
        {
            cout << rm.vertex << "-" << rm.acquireby << "@" << rm.weight << endl;
        }

        for (Edge e : adj[rm.vertex])
        {
            if (visited[e.nbr] == false)
            {
                Pair sp(e.nbr, rm.vertex, e.weight);
                pq.push(sp);
            }
        }
    }
}
int main()
{
    // To Find MST.
    Graph g1;
    g1.addEdge(0, 1, 10);
    g1.addEdge(1, 2, 10);
    g1.addEdge(2, 3, 10);
    g1.addEdge(0, 3, 40);
    g1.addEdge(3, 4, 2);
    g1.addEdge(4, 5, 3);
    g1.addEdge(5, 6, 3);
    g1.addEdge(4, 6, 8);
    g1.Display();
    PrimsAlgorithm(g1.adj);

    return 0;
}
