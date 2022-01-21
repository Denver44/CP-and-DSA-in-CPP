#include <bits/stdc++.h>
using namespace std;
const unsigned long int M = 1000000007;

#include <bits/stdc++.h>
const unsigned long int M = 1000000007;

int countBST(int n)
{

    vector<unsigned long int> tab(n + 1, 0);
    tab[0] = 1; // For Zero Node we know there is one way
    tab[1] = 1; // For One Node we know that it will be 1.
    for (int i = 2; i <= n; i++)
    {
        int left = 0, right = i - 1;
        while (left <= i - 1)
        {
            tab[i] += (tab[left++] * tab[right--]) % M; // Why we multipy is tht left side also chnage it shap and same the right side also that why there product will be total way we can make BST for given node.
            tab[i] %= M;
        }
    }

    return tab[n];
}

int main()
{
    int n;
    cin >> n;
    cout << countBST(n);
    return 0;
}
