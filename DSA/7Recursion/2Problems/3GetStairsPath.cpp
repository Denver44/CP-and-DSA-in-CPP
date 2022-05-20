#include <bits/stdc++.h>
using namespace std;
vector<string> getstairspath(int n)
{

    if (n < 0) // for n less than 0 we have no way so return empty.
    {
        vector<string> out;
        return out;
    }
    if (n == 0) // for n == 0 we one way that we stand there so thast why ""
    {
        vector<string> out;
        out.push_back("");
        return out;
    }

    vector<string> path1 = getstairspath(n - 1);
    vector<string> path2 = getstairspath(n - 2);
    vector<string> path3 = getstairspath(n - 3);
    vector<string> paths;
    for (int i = 0; i < path1.size(); i++)
    {
        paths.push_back("1" + path1[i]);
    }
    for (int i = 0; i < path2.size(); i++)
    {
        paths.push_back("2" + path2[i]);
    }
    for (int i = 0; i < path3.size(); i++)
    {
        paths.push_back("3" + path3[i]);
    }
    return paths;
}
int main()
{

    int n = 4;
    vector<string> res;
    res = getstairspath(n);

    for (auto i : res)
    {
        cout << i << endl;
    }

    return 0;
}