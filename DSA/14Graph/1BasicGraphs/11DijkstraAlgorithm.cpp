// It is Single Souce Shortest Path Algo.
// This Algorithm will find a Shortest Path from src to all neighbours vertex shortest path.
// In terms of Weight.
// Bfs will gives Short Path OF Edges.
// Both area same Only diffrence In Dijsktra we use Priority Queue.
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

class Pair
{
public:
    int vertex;
    string psf;
    int weight;
    Pair(int v, string psf, int wtsf)
    {
        this->vertex = v;
        this->psf = psf;
        this->weight = wtsf;
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

void DijikstraAlgorithm(map<int, vector<Edge>> adj, int src, vector<int> &arr)
{
    vector<bool> visited(adj.size(), false);
    priority_queue<Pair, vector<Pair>, myComparator> pq;
    Pair p(src, to_string(src) + "", 0);
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
        arr[rm.vertex] = rm.weight;
        cout << rm.vertex << " @ " << rm.psf << " @ " << rm.weight << endl;

        for (Edge e : adj[rm.vertex])
        {
            if (visited[e.nbr] == false && rm.weight + e.weight < arr[e.nbr])
            {
                Pair sp(e.nbr, rm.psf + to_string(e.nbr), rm.weight + e.weight);
                pq.push(sp);
            }
        }
    }
}
int main()
{
    Graph g1;
    // g1.addEdge(0, 1, 10);
    g1.addEdge(1, 2, 1, true);
    g1.addEdge(2, 3, 2, true);
    g1.addEdge(1, 3, 2, true);
    // g1.addEdge(3, 4, 2);
    // g1.addEdge(4, 5, 3);
    // g1.addEdge(5, 6, 3);
    // g1.addEdge(4, 6, 8);
    // g1.addEdge(2, 5, 5);
    g1.Display();
    vector<int> arr(4, INT32_MAX); // as Indexing start from zeros thast why added extra 1
    DijikstraAlgorithm(g1.adj, 1, arr);

    for (int i = 1; i < arr.size(); i++)
    {
        cout << i << "->" << arr[i] << endl;
    }

    return 0;
}
