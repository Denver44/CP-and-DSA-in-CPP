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
// TimeComplexity O(V+E);
//1. For Topo Sort the Graph Must Be Directed Acyc Graph. //2. In this U must come Befor V. //3. This is Topo Sort.
void Topoloigcalsort(map<int, vector<Edge>> graph, int src, vector<bool> &visited, stack<int> &st)
{
    visited[src] = true;
    for (Edge e : graph[src])
        if (visited[e.nbr] == false)
            Topoloigcalsort(graph, e.nbr, visited, st);
    st.push(src);
}
int main()
{
    Graph g1;
    g1.addEdge(0, 1, 10, true);
    g1.addEdge(0, 3, 10, true);
    g1.addEdge(1, 2, 10, true);
    g1.addEdge(2, 3, 10, true);
    g1.addEdge(4, 5, 10, true);
    g1.addEdge(4, 6, 10, true);
    g1.addEdge(5, 6, 10, true);
    stack<int> st;
    vector<bool> visited(g1.totalVertex(), false);
    for (int i = 0; i < g1.totalVertex(); i++) // It can be there are Two components thats why we used this Loop to loop on each Vertex.
        if (visited[i] == false)
            Topoloigcalsort(g1.adj, i, visited, st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
