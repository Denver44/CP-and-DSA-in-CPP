#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int n)
{
    unordered_map<int, int> hashmap;
    int maxlen = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 0)
        {
            sum += -1;
            if (sum == 0)                                //This means that from start to till the i is Now upto there is Exact Number of 1 and 0.
                maxlen = max(i + 1, maxlen);             // As Indexing is Zero Based.
            else if (hashmap.find(sum) != hashmap.end()) // If we again at Same Value then we Just to subtact Current index and The previous value Index.
                maxlen = max(i - hashmap[sum], maxlen);
            else
                hashmap[sum] = i;
        }
        else
        {
            sum += 1;
            if (sum == 0)
                maxlen = max(i + 1, maxlen);
            else if (hashmap.find(sum) != hashmap.end())
                maxlen = max(i - hashmap[sum], maxlen);
            else
                hashmap[sum] = i;
        }
    }

    return maxlen;
}
