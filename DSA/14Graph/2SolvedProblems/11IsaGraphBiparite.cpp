#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, nbr, w;
    Edge(int src, int nbr, int w)
    {
        this->src = src;
        this->nbr = nbr;
        this->w = w;
    }
};

bool isGraphBiparite(vector<vector<Edge>> graph, int src, vector<int> &color)
{
    queue<int> myqueue;
    myqueue.push(src);
    color[src] = 1;

    while (myqueue.size() > 0)
    {
        int rmv = myqueue.front();
        myqueue.pop();
        for (Edge e : graph[rmv])
        {
            if (color[e.nbr] == color[rmv])
                return false;

            if (color[e.nbr] == -1)
            {
                myqueue.push(e.nbr);
                color[e.nbr] = 1 - color[rmv];
            }
        }
    }

    return true;
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
    bool check;
    vector<int> color(vtces, -1);
    for (int i = 0; i < vtces; i++)
    {
        if (color[i] == -1)
        {
            check = isGraphBiparite(graph, i, color);
            if (!check)
            {
                cout << "false";
                return 0;
            }
        }
    }

    cout << "true";

    return 0;
}
