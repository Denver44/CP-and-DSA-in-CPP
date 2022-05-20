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

class Pair
{
public:
    int v;
    int time;
    Pair(int v, int time)
    {
        this->v = v;
        this->time = time;
    }
};

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
    int src, time;
    cin >> src >> time;
    bool cycle;
    int count = 0;
    vector<int> visited(vtces, 0);

    queue<Pair> myqueue;
    Pair newPair(src, 1);
    myqueue.push(newPair);
    while (myqueue.size() > 0)
    {
        Pair rmvp = myqueue.front();
        myqueue.pop();
        if (visited[rmvp.v] > 0)
        {
            continue;
        }
        visited[rmvp.v] = rmvp.time;
        if (rmvp.time > time)
        {
            break;
        }
        count++;

        for (Edge e : graph[rmvp.v])
        {
            if (visited[e.nbr] == 0)
            {
                Pair secPair(e.nbr, rmvp.time + 1);
                myqueue.push(secPair);
            }
        }
    }

    cout << count;

    return 0;
}
