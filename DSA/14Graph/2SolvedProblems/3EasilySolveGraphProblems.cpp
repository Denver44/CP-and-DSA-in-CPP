
#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src; // source row
    int nbr; // Neighbour row
    int wt;  // weight

    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

class Pair
{

public:
    int wsf;
    string psf;
    Pair(int wsf, string psf)
    {
        this->wsf = wsf;
        this->psf = psf;
    }
};
class myComparator
{
public:
    int operator()(const Pair &p1, const Pair &p2)
    {
        return p1.wsf > p2.wsf;
    }
};

string spath;
int spathw = INT32_MAX; // shortestweightpath
string lpath;
int lpathw = INT32_MIN; // largest path
string cpath;
int cpathw = INT32_MAX; // ceilpath
string fpath;
int fpathw = INT32_MIN; // floorpath

priority_queue<int, vector<Pair>, myComparator> pq;
// using min heap we get the kth term at the top. as the larget will be at the bottom and kth largest will be top.

void mulisolver(vector<vector<Edge>> graph, int criteria, int k, int src, int dest, vector<bool> visited, string psf, int wtsf)
{

    if (src == dest)
    {

        if (wtsf < spathw)
        {
            spathw = wtsf;
            spath = psf;
        }
        if (wtsf > lpathw)
        {
            lpathw = wtsf;
            lpath = psf;
        }

        if (wtsf > criteria && wtsf < cpathw)
        {
            cpathw = wtsf;
            cpath = psf;
        }
        if (wtsf < criteria && wtsf > fpathw)
        {
            fpathw = wtsf;
            fpath = psf;
        }
        if (pq.size() < k)
        {

            Pair p(wtsf, psf);
            pq.push(p);
        }
        else
        {
            if (wtsf > pq.top().wsf)
            {
                Pair p(wtsf, psf);
                pq.pop();
                pq.push(p);
            }
        }

        return;
    }

    visited[src] = true;
    for (Edge edge : graph[src])
    {
        if (visited[edge.nbr] == false)
        {
            mulisolver(graph, criteria, k, edge.nbr, dest, visited, psf + to_string(edge.nbr), wtsf + edge.wt);
        }
    }

    visited[src] = false;
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

    int src, dest;
    cin >> src >> dest;
    int criteria, k;
    cin >> criteria >> k;
    vector<bool> visited(vtces, false);
    mulisolver(graph, criteria, k, src, dest, visited, to_string(src) + "", 0);
    cout << "Smallest Path = " + spath + "@" + to_string(spathw) << endl;
    cout << "Largest Path = " + lpath + "@" + to_string(lpathw) << endl;
    cout << "Just Larger Path than " << criteria << " = " + cpath + "@" + to_string(cpathw) << endl;
    cout << "Just Smaller Path than " << criteria << " = " + fpath + "@" + to_string(fpathw) << endl;
    cout << k << "th largest path = " << pq.top().psf << "@" << pq.top().wsf << endl;

    while (pq.size() > 0)
    {
        cout << pq.top().psf << " " << pq.top().wsf << endl;
        pq.pop();
    }

    return 0;
}
