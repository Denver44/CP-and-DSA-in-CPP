#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// template <class T, class X> of we have two differen then use Class. otherwise typename.
template <typename T>
class Graph
{

public:
    T v, e;
    list<pair<T, T>> *adj;

    Graph(int v, int e)
    {
        this->v = v;                           // Vertex
        this->e = e;                           // edgs
        this->adj = new list<pair<ll, ll>>(v); // Adjaceny list of size of vertex.
    }
    void addEdges(T src, T dest, T wt = 0, bool bidir = false)
    {
        this->adj[src].push_back(make_pair(dest, wt));
        if (bidir)
            this->adj[dest].push_back(make_pair(src, wt));
        return;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Graph<string> g(3, 4);

    g.addEdges("Delhi", "Mumbai");
    g.addEdges("Delhi", "blr");
    g.addEdges("blr", "cheenai");
    g.addEdges("Punjab", "Mumbai");
    return 0;
}

//// adjaceny map
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;

// // template <class T, class X> of we have two differen then use Class. otherwise typename.
// template <typename T>
// class Graph
// {

// public:
//     map<T, vector<T>> adj;
//     void addEdges(T src, T dest, bool bidir = false)
//     {
//         adj[src].push_back(dest);
//         if (bidir)
//             adj[dest].push_back(src);
//     }

//     void display()
//     {

//         for (auto i : adj)
//         {
//             cout << i.first << "->";
//             for (auto el : i.second)
//             {
//                 cout << el << "->";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     Graph<string> g;

//     g.addEdges("Delhi", "Mumbai");
//     g.addEdges("Delhi", "blr");
//     g.addEdges("blr", "cheenai");
//     g.addEdges("Punjab", "Mumbai");
//     g.display();

//     return 0;
// }
