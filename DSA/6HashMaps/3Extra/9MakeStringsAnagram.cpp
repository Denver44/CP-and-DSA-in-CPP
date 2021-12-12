#include <bits/stdc++.h>
using namespace std;
int makeAnagram(char str1[], char str2[])
{
    unordered_map<char, int> hashmap1, hashmap2;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len1; i++)
        hashmap1[str1[i]]++;
    for (int i = 0; i < len2; i++)
        hashmap2[str2[i]]++;
    int len = 0;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (hashmap1[ch] == hashmap2[ch])
            continue;
        else
            len += abs(hashmap1[ch] - hashmap2[ch]);
    }
    return len;
}

int main()
{
    char str1[10010], str2[10010];
    cin >> str1;
    cin >> str2;

    cout << makeAnagram(str1, str2) << endl;
}
