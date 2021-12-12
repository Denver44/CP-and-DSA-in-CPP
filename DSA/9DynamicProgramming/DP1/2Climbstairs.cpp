#include <bits/stdc++.h>
using namespace std;
// We can take Three Steps
// 1 steps
// 2 steps
// 3 Steps
// Use Sorce to Destination Method.
// Here we take our Source as N and Destiantion 0 so if we reach our destination while taking these 3 stpes that means it is correct way so return true.
int getcountstairspathRecursive(int n)
{

    // Here in this we have to just return the numbers of path
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    int n1 = getcountstairspathRecursive(n - 1);
    int n2 = getcountstairspathRecursive(n - 2);
    int n3 = getcountstairspathRecursive(n - 3);
    int tot = n1 + n2 + n3;
    return tot;
}

int getcountstairspathMemoize(int n, int *answerBank)
{

    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (answerBank[n] != 0)
        return answerBank[n];
    int n1 = getcountstairspathMemoize(n - 1, answerBank);
    int n2 = getcountstairspathMemoize(n - 2, answerBank);
    int n3 = getcountstairspathMemoize(n - 3, answerBank);
    int tot = n1 + n2 + n3;
    answerBank[n] = tot;
    return tot;
}
int getcountstairspathTabulation(int n)
{

    int *tab = new int[n + 1];
    // As we know for the Zero staircase there is One way dont take any steps.
    // For 1->0 we can take only 1 steps
    //  2->0 either take 1-1 steps or 2-0 so total 2 steps
    tab[0] = 1, tab[1] = 1, tab[2] = 2;
    for (int i = 3; i <= n; i++)
        tab[i] = tab[i - 1] + tab[i - 2] + tab[i - 3];
    int output = tab[n];
    delete[] tab;
    return output;
}
int main()
{
    int n;
    cin >> n;
    cout << getcountstairspathRecursive(n) << endl;
    // ----------------------MemomIzation Method----------------------------
    int *answerBank = new int[n + 1];
    memset(answerBank, 0, sizeof(int) * (n + 1));
    cout << getcountstairspathMemoize(n, answerBank) << endl;
    delete[] answerBank;

    // --------------------Tabulation mEthod-----------------------------
    cout << getcountstairspathTabulation(n) << endl;

    return 0;
}