#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src; // source row
    int nbr; // Neighbour row
    int wt;  // Neighbour row
    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};
// here we dont use the boolean visited.
// We have put the elements and compare it with psf to terminate it.
void hamiltonian(vector<vector<Edge>> graph, int src, set<int> &visited, string psf, int mainsrc)
{
    if (visited.size() == graph.size() - 1)
    {
        cout << psf;
        bool closingedge = false;
        for (Edge e : graph[src])
        {
            if (e.nbr == mainsrc)
            {
                closingedge = true;
            }
        }
        if (closingedge == true)
        {
            cout << "*" << endl;
        }
        else
        {
            cout << "." << endl;
        }
        return;
    }

    visited.insert(src);

    for (Edge e : graph[src])
    {
        if (visited.find(e.nbr) == visited.end())
        {
            hamiltonian(graph, e.nbr, visited, psf + to_string(e.nbr), mainsrc);
        }
    }
    set<int>::iterator it;
    it = visited.find(src);
    visited.erase(it);
}

int main()
{
    int vtces;
    cin >> vtces;
    vector<vector<Edge>> graph(vtces);

    int edges;
    cin >> edges;
    for (int i = 0; i < edges; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        Edge edge1(v1, v2, wt);
        graph[v1].push_back(edge1);
        Edge edge2(v2, v1, wt);
        graph[v2].push_back(edge2);
    }
    int src;
    cin >> src;
    int mainsrc = src;

    set<int> visited;

    hamiltonian(graph, src, visited, to_string(src) + "", mainsrc);

    return 0;
}