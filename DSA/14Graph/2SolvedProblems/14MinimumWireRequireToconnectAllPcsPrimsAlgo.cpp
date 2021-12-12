#include <bits/stdc++.h>
using namespace std;

// To find MInumum Spanning Tree from src to all node
// this will take less time
// always use bfs
// plus use prioeoty queue
// and make your own comparator for this.
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
    int av; // acquiring vertex means last time who acquire it.
    int wt;
    Pair(int v, int av, int wt)
    {
        this->v = v;
        this->av = av;
        this->wt = wt;
    }
};
class myComparator
{
public:
    int operator()(const Pair &p1, const Pair &p2)
    {
        return p1.wt > p2.wt;
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
    vector<bool> visited(vtces, false);

    priority_queue<Pair, vector<Pair>, myComparator> my_queue;
    Pair newpair(0, -1, 0); // as starting the weight is zero
    //for 0 vertex it is acquring vertex is -1.
    my_queue.push(newpair);

    while (my_queue.size() > 0)
    {

        Pair rmvp = my_queue.top();
        my_queue.pop(); // remove

        if (visited[rmvp.v] == true)
        {
            continue;
        }
        visited[rmvp.v] = true; // mark
        if (rmvp.av != -1)
        {
            cout << "[" << rmvp.v << "-" << rmvp.av << "@" << rmvp.wt << "]" << endl; // work
        }

        for (Edge e : graph[rmvp.v])
        {
            if (visited[e.nbr] == false)
            {

                Pair sspair(e.nbr, rmvp.v, e.w);
                // in this  we dont have add last weight and path.
                my_queue.push(sspair);
            }
        }
    }

    return 0;
}
