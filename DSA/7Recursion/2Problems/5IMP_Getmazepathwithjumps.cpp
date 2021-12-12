#include <bits/stdc++.h>
using namespace std;
vector<string> getmazepathwihtjumps(int sr, int sc, int dr, int dc)
{

    if (sr == dr && sc == dc)
    {
        vector<string> out;
        out.push_back(""); // this means we have reach our destination so need to move just stand there.
        return out;
    }

    vector<string> paths;
    // Horizontal
    // as if i have 3*3 matric then i can do only two jumps
    // thst why we rite dc - sc.
    for (int ms = 1; ms <= dc - sc; ms++)
    {

        vector<string> hpath = getmazepathwihtjumps(sr, sc + ms, dr, dc);
        string no = to_string(ms);
        for (int i = 0; i < hpath.size(); i++)
        {
            paths.push_back("h" + no + hpath[i]);
        }
    }
    // Vertical
    for (int ms = 1; ms <= dr - sr; ms++)
    {
        vector<string> vpath = getmazepathwihtjumps(sr + ms, sc, dr, dc);
        string no = to_string(ms);
        for (int i = 0; i < vpath.size(); i++)
        {
            paths.push_back("v" + no + vpath[i]);
        }
    }
    // Diagonal We havt to check both row and col must be correct.
    for (int ms = 1; ms <= dr - sr && ms <= dc - sc; ms++)
    {
        vector<string> dpath = getmazepathwihtjumps(sr + ms, sc + ms, dr, dc);
        string no = to_string(ms);
        for (int i = 0; i < dpath.size(); i++)
        {
            paths.push_back("d" + no + dpath[i]);
        }
    }

    return paths;
}

int main()
{

    int sr = 0;
    int sc = 0;
    int dr = 3;
    int dc = 3;
    vector<string> final;

    final = getmazepathwihtjumps(1, 1, 3, 3);

    for (auto i : final)
    {
        cout << i << " ";
    }

    return 0;
}