
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

class Edge
{
public:
    int src;
    int nbr;
    int weight;

    Edge(int src, int nbr, int weight)
    {
        this->src = src;
        this->nbr = nbr;
        this->weight = weight;
    }
};

class Pair
{
public:
    int vertex;
    string psf;
    Pair(int v, string str)
    {
        this->vertex = v;
        this->psf = str;
    }
};

class Graph
{
public:
    map<int, vector<Edge>> adj;
    void addEdge(int src, int dest, int wt, bool direct = false)
    {
        if (direct)
        {
            Edge e1(src, dest, wt);
            adj[src].push_back(e1);
            return;
        }
        Edge e1(src, dest, wt);
        adj[src].push_back(e1);
        Edge e2(dest, src, wt);
        adj[dest].push_back(e2);
    }
    int totalVertex()
    {
        return adj.size();
    }
    int totalEdges()
    {
        int count = 0;
        for (auto i : adj)
            count += i.second.size();
        return count;
    }

    void Display()
    {

        for (auto i : adj)
        {
            cout << i.first << " -> "
                 << "{";
            for (auto itr : i.second)
                cout << itr.nbr << " = " << itr.weight << ", ";
            cout << "\b\b}" << endl;
        }
    }
};
int main()
{
    Graph g1;
    g1.addEdge(0, 1, 10);
    g1.addEdge(1, 2, 10);
    g1.addEdge(2, 3, 10);
    g1.addEdge(0, 3, 10);
    g1.addEdge(3, 4, 10);
    g1.addEdge(4, 5, 10);
    g1.addEdge(5, 6, 10);
    g1.addEdge(4, 6, 10);

    g1.Display();

    vector<bool> visited(7, false);
    stack<Pair> st;
    Pair p(2, to_string(2));
    st.push(p);

    while (st.size() > 0)
    {
        Pair remv = st.top(); // Remove
        st.pop();
        if (visited[remv.vertex] == true)  // Why this is needed as we are not calling first we fill it all its neigbours in stack.
        {
            continue;
        }
        visited[remv.vertex] = true;                   // Mark
        cout << remv.vertex << "@" + remv.psf << endl; // Work

        for (Edge i : g1.adj[remv.vertex])  
        {
            if (visited[i.nbr] == false) // Visit Neigbour 
            {
                Pair np(i.nbr, remv.psf + to_string(i.nbr));
                st.push(np);
            }
        }
    }

    return 0;
}
