#include <iostream>
using namespace std;

typedef struct sData
{
    int saData;
    int sbData;

    union
    {
        int uaData;
        int ubData;
    } u;
} data;

int main()
{
    data s1;

    s1.saData = 10, s1.sbData = 20;
    s1.u.ubData = 5;
    s1.u.uaData = 1000;
    cout << s1.saData << endl;
    cout << s1.sbData << endl;
    cout << s1.u.uaData << endl;
    cout << s1.u.ubData << endl;

    return 0;
}