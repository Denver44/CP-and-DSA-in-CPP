#include <bits/stdc++.h>
using namespace std;
// This is The Array of the Node.
class Node
{
public:
    int parent, rank;
};

vector<Node> disjointSet;
int find_op(int v)
{
    if (disjointSet[v].parent == -1)
        return v;
    return disjointSet[v].parent = find_op(disjointSet[v].parent); // This Acually Update The Parent and That why it get Compressed.
}

void union_op(int fromP, int toP)
{
    if (disjointSet[fromP].rank > disjointSet[toP].rank)
        disjointSet[toP].parent = fromP;

    else if (disjointSet[fromP].rank < disjointSet[toP].rank)
        disjointSet[fromP].parent = toP;
    else
    {
        disjointSet[fromP].parent = toP;
        disjointSet[toP].rank++;
    }
}
bool isCyclic(vector<pair<int, int>> &adj)
{

    for (auto e : adj)
    {
        int fromP = find_op(e.first);
        int toP = find_op(e.second);
        if (fromP == toP)
            return true;
        union_op(fromP, toP);
    }
    return false;
}

int main()
{

    int E, V;
    cin >> E >> V;
    disjointSet.resize(V);
    for (int i = 0; i < V; i++)
    {
        disjointSet[i].parent = -1;
        disjointSet[i].rank = 0;
    }

    vector<pair<int, int>> adj;
    for (int i = 0; i < E; i++)
    {
        int src, nbr;
        cin >> src >> nbr;
        adj.push_back({src, nbr});
    }
    (isCyclic(adj) == true) ? cout << "True" : cout << "False";
    return 0;
}
