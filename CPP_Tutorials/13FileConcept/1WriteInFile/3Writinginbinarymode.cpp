#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    fstream ob2;
    ob2.open("./data/3bin.txt", ios::binary);
    char sentence[40] = "HELLO WORLD I AM GENIUS !";
    int l;
    l = strlen(sentence);
    ob2.write(sentence, l);
    cout << endl;
    ob2.close();

    return 0;
}