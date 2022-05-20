#include <bits/stdc++.h>
using namespace std;

// To find shortest path from src to all node
// this will take less time
// always use bfs when asked shortest path in weights
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
    string psf;
    int wtsf;
    Pair(int v, string psf, int wtsf)
    {
        this->v = v;
        this->psf = psf;
        this->wtsf = wtsf;
    }
};
class myComparator
{
public:
    int operator()(const Pair &p1, const Pair &p2)
    {
        return p1.wtsf > p2.wtsf;
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
    int src;
    cin >> src;
    vector<bool> visited(vtces, false);

    priority_queue<Pair, vector<Pair>, myComparator> my_queue;
    Pair newpair(src, to_string(src) + "", 0); // as starting the weight is zero.
    my_queue.push(newpair);

    while (my_queue.size() > 0)
    {

        Pair rmvp = my_queue.top();
        my_queue.pop();

        if (visited[rmvp.v] == true)
        {
            continue;
        }
        visited[rmvp.v] = true;
        cout << rmvp.v << " via " << rmvp.psf << " @ " << rmvp.wtsf << endl;
        for (Edge e : graph[rmvp.v])
        {
            if (visited[e.nbr] == false)
            {

                Pair sspair(e.nbr, rmvp.psf + to_string(e.nbr), rmvp.wtsf + e.w);
                my_queue.push(sspair);
            }
        }
    }

    return 0;
}

// 9
// 14
// 0 1 4
// 0 7 8
// 1 2 8
// 1 7 11
// 2 3 7
// 2 8 2
// 2 5 4
// 3 4 9
// 3 5 14
// 4 5 10
// 5 6 2
// 6 7 1
// 6 8 6
// 7 8 7
// 0