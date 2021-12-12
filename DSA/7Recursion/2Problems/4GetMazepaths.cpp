#include <bits/stdc++.h>
using namespace std;
// We have to print  all route from Source to Destination.
// As here we are going either up or down not up or left.
//  so we will never come to our own position by any call so we dont need a Visited Array.
// Here The conditon is as we reach to destination then return.
// If we cross the boundary then also return.
vector<string> getmazepathwihtjumps(int sr, int sc, int dr, int dc)
{
    if (sr > dr || sc > dc)
        return {};

    if (sr == dr && sc == dc)
    {
        vector<string> out;
        out.push_back(""); // this means we have reach our destination so need to move just stand there.
        return out;
    }
    vector<string> hpath = getmazepathwihtjumps(sr, sc + 1, dr, dc);
    vector<string> vpath = getmazepathwihtjumps(sr + 1, sc, dr, dc);
    vector<string> paths;
    for (int i = 0; i < hpath.size(); i++)
    {
        paths.push_back("h" + hpath[i]);
    }
    for (int i = 0; i < vpath.size(); i++)
    {
        paths.push_back("v" + vpath[i]);
    }

    return paths;
}
int main()
{

    vector<string> final;
    final = getmazepathwihtjumps(1, 1, 3, 3);

    for (auto i : final)
    {
        cout << i << endl;
    }

    return 0;
}
