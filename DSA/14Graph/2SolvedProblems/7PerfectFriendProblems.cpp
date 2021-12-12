#include <bits/stdc++.h>
using namespace std;

// We have to find the number of pair we can make from one Connected Component.

class Edge
{
public:
    int src; // source row
    int nbr; // Neighbour row
    Edge(int src, int nbr)
    {
        this->src = src;
        this->nbr = nbr;
    }
};

void drawTreeandGenerateCompnent(vector<vector<Edge>> graph, int src, vector<int> &comp, vector<bool> &visited)
{
    visited[src] = true;
    comp.push_back(src);

    for (Edge e : graph[src])
    {
        if (visited[e.nbr] == false)
        {
            drawTreeandGenerateCompnent(graph, e.nbr, comp, visited);
        }
    }
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
        int v1, v2;
        cin >> v1 >> v2;
        Edge edge1(v1, v2);
        graph[v1].push_back(edge1);
        Edge edge2(v2, v1);
        graph[v2].push_back(edge2);
    }

    vector<bool> visited(vtces, false);

    vector<vector<int>> final;
    for (int i = 0; i < vtces; i++)
    {
        if (visited[i] == false)
        {
            vector<int> comp;
            drawTreeandGenerateCompnent(graph, i, comp, visited);
            final.push_back(comp);
        }
    }

    int tot_pair = 0;
    for (int i = 0; i < final.size() - 1; i++)
    {
        for (int j = i + 1; j < final.size(); j++)
        {
            tot_pair += (final[i].size() * final[j].size());
        }
    }

    cout << tot_pair << endl;

    return 0;
}
