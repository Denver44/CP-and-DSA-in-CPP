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
    string psf;
    Pair(int v, string psf)
    {
        this->v = v;
        this->psf = psf;
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
    queue<Pair> my_queue;
    Pair first_pair(src, to_string(src) + "");
    my_queue.push(first_pair);

    while (my_queue.size() > 0)
    {
        //1. first remove
        Pair rem = my_queue.front();
        my_queue.pop();

        if (visited[rem.v] == true)
        {
            continue;
        }
        //2. mark
        visited[rem.v] = true;
        //3. work means print
        cout << (to_string(rem.v) + "@" + rem.psf) << endl;

        //4. add it is neighbour
        for (Edge e : graph[rem.v])
        {
            if (visited[e.nbr] == false)
            {
                Pair sec_pair(e.nbr, rem.psf + to_string(e.nbr));
                my_queue.push(sec_pair);
            }
        }
    }

    return 0;
}
