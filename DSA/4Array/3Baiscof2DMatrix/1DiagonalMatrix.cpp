#include <iostream>
using namespace std;
struct Matrix
{
    int Arr[10];
    int n;
};
void setdiagonal(struct Matrix *a, int i, int j, int x)
{
    if (i == j)
    {
        a->Arr[i - 1] = x;
    }
    return;
}
int getvalue(struct Matrix a, int i, int j)
{
    int value = 0;
    if (i == j)
    {
        value = a.Arr[i - 1];
        return value;
    }
    return value;
}

void display(struct Matrix a, struct Matrix size)
{
    int i, j, res;
    int option = 1;
    for (int i = 0; i < size.n; i++)
    {
        for (int j = 0; j < size.n; j++)
        {
            if (i == j)
            {
                cout << a.Arr[i] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
int main()
{
    struct Matrix m;
    m.n = 5;
    int i, j, value;

    setdiagonal(&m, 1, 1, 10);
    setdiagonal(&m, 2, 2, 20);
    setdiagonal(&m, 3, 3, 30);
    setdiagonal(&m, 4, 4, 40);
    setdiagonal(&m, 5, 5, 50);
    cout << getvalue(m, 2, 5) << endl;
    display(m, m);

    return 0;
}