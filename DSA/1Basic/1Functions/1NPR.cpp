#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
void display(int n, int r, int npr)
{
    cout << n << "P" << r << " = " << npr;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int factn = fact(n);
    int factnr = fact(n - r);
    display(n, r, factn / factnr);

    return 0;
}

// Like w ehave 5 Alphabets and we have tp choose 3 Alphabets and make a word which should be unique.
// Counting Pronciple
// As first we have 5 choice then we have one less 4 choice and then we have 3 choice as we have selected 2 types already.