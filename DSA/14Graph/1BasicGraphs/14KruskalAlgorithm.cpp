#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
/* Reason Behind Prims and Kruskals Fails for Directed Graph
Prim’s algorithm assumes that all vertices are connected. But in a directed graph, every node is not reachable from every other node. So, Prim’s algorithm fails due to this reason.

In Kruskal’s algorithm, In each step, it is checked that if the edges form a cycle with the spanning-tree formed so far. But Kruskal’s algorithm fails to detect the cycles in a directed graph as there are cases when there is no cycle between the vertices but Kruskal’s Algorithm assumes it to cycle and don’t take consider some edges due to which Kruskal’s Algorithm fails for directed graph.
*/

class Node
{
public:
    int parent, rank;
};
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
vector<Node> disjointSet;
vector<Edge> mst;
class Graph
{
public:
    int v, e;
    vector<Edge> adj; // adjaceny list.
    Graph(int v, int e)
    {
        this->v = v;
        this->e = e;
    }
    void addEdge(int src, int dest, int wt)
    {

        Edge e1(src, dest, wt);
        adj.push_back(e1);
    }
    int totalVertex()
    {
        return v;
    }
    int totalEdges()
    {
        return e;
    }

    void Display()
    {
        for (int i = 0; i < adj.size(); i++)
            cout << adj[i].src << " -> " << adj[i].nbr << " = " << adj[i].weight << ", " << endl;
    }
};

bool comparator(Edge p1, Edge p2)
{
    return p1.weight < p2.weight;
}

int find_op(int v)
{
    if (disjointSet[v].parent == -1)
        return v;
    return disjointSet[v].parent = find_op(disjointSet[v].parent); // This Acuallu Update The Parent and That why it get Compressed.
}

void union_op(int fromP, int toP)
{
    if (disjointSet[fromP].rank > disjointSet[toP].rank)
        disjointSet[toP].parent = fromP;

    else if (disjointSet[fromP].rank < disjointSet[toP].rank)
        disjointSet[fromP].parent = toP;
    else
    {
        disjointSet[fromP].parent = toP;
        disjointSet[toP].rank++;
    }
}

bool isCyclic(vector<pair<int, int>> &adj)
{

    for (auto e : adj)
    {
        int fromP = find_op(e.first);
        int toP = find_op(e.second);
        if (fromP == toP)
            return true;
        union_op(fromP, toP);
    }
    return false;
}

void Kruskals(vector<Edge> &edge_list, int V, int E)
{
    sort(edge_list.begin(), edge_list.end(), comparator);

    int i = 0, j = 0;
    while (i < V - 1 && j < E)
    {
        int fromP = find_op(edge_list[j].src);
        int toP = find_op(edge_list[j].nbr);

        if (fromP == toP)
        {
            ++j;
            continue;
        }

        union_op(fromP, toP);
        mst.push_back(edge_list[i]);
        ++i;
    }
}
void printMST(vector<Edge> &mst)
{
    cout << "MST formed is\n";
    for (auto p : mst)
        cout << "src: " << p.src << "  dst: " << p.nbr << "  wt: " << p.weight << "\n";
}

int main()
{

    int E, V;
    cin >> E >> V;
    disjointSet.resize(V);
    for (int i = 0; i < V; i++)
    {
        disjointSet[i].parent = -1;
        disjointSet[i].rank = 0;
    }

    Graph g1(V, E);
    g1.addEdge(0, 1, 10);
    g1.addEdge(1, 2, 10);
    g1.addEdge(2, 3, 10);
    g1.addEdge(0, 3, 40);
    g1.addEdge(3, 4, 2);
    g1.addEdge(4, 5, 3);
    g1.addEdge(5, 6, 3);
    g1.addEdge(4, 6, 8);
    g1.Display();
    Kruskals(g1.adj, V, E);
    printMST(mst);
    return 0;
}
