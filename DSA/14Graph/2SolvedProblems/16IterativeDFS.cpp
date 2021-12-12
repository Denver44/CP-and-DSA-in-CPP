#include <bits/stdc++.h>
using namespace std;

// When we get a linear type of graph and the total element tare 1lakh
// then there will be 1 lak call in stack frame when we use recursive.
// thats why iterative dfx is better then recurive dfs whihc we done in has path question and All path question.
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
    stack<Pair> mystack; // stack
    Pair first_pair(src, to_string(src) + "");
    mystack.push(first_pair);

    while (mystack.size() > 0)
    {
        // first remove
        Pair rem = mystack.top();
        mystack.pop();

        if (visited[rem.v] == true)
        {
            continue;
        }
        //second mark
        visited[rem.v] = true;
        // third work means print
        cout << (to_string(rem.v) + "@" + rem.psf) << endl;

        //fourth add it is neighbour
        for (Edge e : graph[rem.v])
        {
            if (visited[e.nbr] == false)
            {
                Pair sec_pair(e.nbr, rem.psf + to_string(e.nbr));
                mystack.push(sec_pair);
            }
        }
    }

    return 0;
}
