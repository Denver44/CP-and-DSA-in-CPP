#include <iostream>
using namespace std;

class Element
{
public:
    int i;
    int j;
    int value;
};

class Sparse
{
private:
    int m;
    int n;
    int non_zero;
    Element *element;

public:
    Sparse(int m, int n, int non_zero)
    {
        this->m = m;
        this->n = n;
        this->non_zero = non_zero;
        element = new Element[this->non_zero];
    }
    void read();
    void display();
    ~Sparse()
    {
        delete[] element;
    }
};
void Sparse::read()
{
    for (int i = 0; i < non_zero; i++)
    {
        cout << "Enter the Row number " << endl;
        cin >> element[i].i;
        cout << "Enter the Column number " << endl;
        cin >> element[i].j;
        cout << "Enter the Value of that Row and Column " << endl;
        cin >> element[i].value;
    }

    // element[0].i = 1;
    // element[0].j = 5;
    // element[0].value = 1;
    // element[1].i = 2;
    // element[1].j = 4;
    // element[1].value = 2;
    // element[2].i = 3;
    // element[2].j = 3;
    // element[2].value = 3;
    // element[3].i = 4;
    // element[3].j = 2;
    // element[3].value = 4;
    // element[4].i = 5;
    // element[4].j = 1;
    // element[4].value = 5;
}

void Sparse::display()
{

    int i, j;
    int k = 0;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == element[k].i && j == element[k].j)
            {
                cout << element[k++].value << " ";
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
    Sparse s1(5, 5, 5);
    s1.read();
    s1.display();

    return 0;
}