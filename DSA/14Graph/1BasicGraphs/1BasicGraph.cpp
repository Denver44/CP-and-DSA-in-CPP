#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

class Edge
{
public:
    string src, nbr;
    int weight;

    Edge(string src, string nbr, int weight)
    {
        this->src = src;
        this->nbr = nbr;
        this->weight = weight;
    }
};

class Graph
{
public:
    map<string, vector<Edge>> adj;
    void addEdge(string src, string dest, int wt, bool direct = false)
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
};

int main()
{
    Graph g1;
    g1.addEdge("A", "B", 1);
    g1.addEdge("A", "D", 10);
    g1.addEdge("B", "C", 2);
    g1.addEdge("C", "D", 3);
    g1.addEdge("D", "E", 4);
    g1.addEdge("E", "F", 5);
    g1.addEdge("E", "G", 12);
    g1.addEdge("F", "G", 4);
    g1.Display();
    cout << g1.totalVertex() << endl;
    cout << g1.totalEdges() << endl;
    return 0;
}