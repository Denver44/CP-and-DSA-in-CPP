#include <bits/stdc++.h>
using namespace std;
vector<int> disjointSet; // In Array Repersention index are the Node and value will be the root.
// Find Opertaion Function It will help us to find the Abosulte parent of the node.
int find_op(int v)
{
    if (disjointSet[v] == -1)
        return v;
    return find_op(disjointSet[v]);
}
// It will actually help us to merge the two different set parent to one.
void union_op(int fromP, int toP)
{
    fromP = find_op(fromP);
    toP = find_op(toP);
    disjointSet[fromP] = toP;
}
bool isCyclic(vector<pair<int, int>> &adj)
{

    for (auto e : adj)
    {
        int fromP = find_op(e.first);
        int toP = find_op(e.second);
        if (fromP == toP) // both have absolute smae parent means they form cycle.
            return true;
        union_op(fromP, toP); // If they have diffrent parent then make Union.
    }
    return false;
}

int main()
{
    // Disjoint Set cannot be Detect Cycle in Directed Graph
    // For Skewed type time Comolexity will be O(V*E)
    int E, V;
    cin >> E >> V;
    disjointSet.resize(V, -1);
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
