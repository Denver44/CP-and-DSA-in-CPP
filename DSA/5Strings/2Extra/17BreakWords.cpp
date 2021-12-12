
#include <bits/stdc++.h>
using namespace std;
void breakWords(char *S)
{
    string ans;
    istringstream var(S);
    string token;
    while (getline(var, token, ' '))
    {
        int size = token.size();
        if (size % 2 == 0 && size >= 4)
        {
            ans += token.substr(0, size / 2);
            ans += " ";
            ans += token.substr(size / 2);
            ans += " ";
        }
        else
        {
            ans += token;
            ans += " ";
        }
    }
    char *answer = &ans[0]; // This way we can point the First charcter addess to a charcter Pointer which actually help us to copy in our Main char *S.

    strcpy(S, answer);
}
int main()
{
    char str[100000];
    cin.getline(str, 100000);
    breakWords(str);
    cout << str;
}
