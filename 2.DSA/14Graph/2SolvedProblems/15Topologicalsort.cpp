#include <bits/stdc++.h>
using namespace std;
// Order of work is reverse of Topological sort.
// In topologiccal sort u must appear befor v.
class Edge
{

public:
    int src;
    int nbr;
    Edge(int src, int nbr)
    {
        this->src = src;
        this->nbr = nbr;
    }
};

void toplogicalsort(vector<vector<Edge>> graph, int src, vector<bool> &visited, stack<int> &s1)
{
    if (visited[src] == true)
    {
        return;
    }

    visited[src] = true;

    for (Edge e : graph[src])
    {
        if (visited[e.nbr] == false)
        {
            toplogicalsort(graph, e.nbr, visited, s1);
        }
    }
    s1.push(src);
}

int main()
{
    int vertex;
    cin >> vertex;
    int edges;
    cin >> edges;
    vector<vector<Edge>> graph(vertex);
    while (edges--)
    {
        int a, b;
        cin >> a >> b;
        Edge e1(a, b);
        graph[a].push_back(e1);
    }

    vector<bool> visited(vertex, false);
    stack<int> s1;
    for (int i = 0; i < vertex; i++)
    {
        if (visited[i] == false)
        {
            toplogicalsort(graph, i, visited, s1);
        }
    }

    while (s1.size() > 0)
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
}