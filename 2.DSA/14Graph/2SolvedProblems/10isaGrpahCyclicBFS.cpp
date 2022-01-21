#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src; // source row
    int nbr; // Neighbour row
    int w;   // Neighbour row
    Edge(int src, int nbr, int w)
    {
        this->src = src;
        this->nbr = nbr;
        this->w = w;
    }
};

// this calss is need for BFS. not mandotaory.
class Pair
{
public:
    int v;
    string psf;
    Pair(int v, string psf)
    {
        this->v = v;
        this->psf = psf;
    }
};

bool isGraphCyclic(vector<vector<Edge>> graph, int src, vector<bool> &visited)
{
    queue<Pair> myqueue;
    Pair p(src, to_string(src) + "");
    myqueue.push(p);

    while (myqueue.size() > 0)
    {
        Pair rmvp = myqueue.front();
        myqueue.pop();
        if (visited[rmvp.v] == true)
        {
            return true;
        }
        visited[rmvp.v] = true;

        for (Edge e : graph[rmvp.v])
        {
            if (visited[e.nbr] == false)
            {
                Pair np(e.nbr, rmvp.psf + to_string(e.nbr));
                myqueue.push(np);
            }
        }
    }

    // if no cycle then return flase;
    return false;
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
    bool cycle;
    vector<bool> visited(vtces, false);
    for (int i = 0; i < vtces; i++)
    {
        if (visited[i] == false)
        {
            cycle = isGraphCyclic(graph, i, visited);
            if (cycle)
            {
                cout << "true";
                return 0;
            }
        }
    }

    cout << "false";

    return 0;
}
