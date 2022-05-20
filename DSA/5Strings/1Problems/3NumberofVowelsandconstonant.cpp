#include <iostream>
using namespace std;

int main()
{

    char p[] = "How are  you";
    int i, vowls = 0, cons = 0, word = 1;
    i = 0;
    while (p[i] != '\0')
    {
        if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' || p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'o' || p[i] == 'u')
        {
            vowls++;
        }

        else if (p[i] >= 65 && p[i] <= 90 || p[i] >= 97 && p[i] <= 122)
        {
            cons++;
        }


        else if (p[i - 1] != ' ')
        {
            word++;
        }
        i++;
    }
    cout << "The total numbers of vowels " << vowls << endl;
    cout << "The total numbers of consonant " << cons << endl;
    cout << "The total numbers of words " << word << endl;

    return 0;
}