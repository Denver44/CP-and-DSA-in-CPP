#include <iostream>
using namespace std;

struct Element
{
    int i;     // row number
    int j;     // Colum Number
    int value; // Value
};

struct Sparse
{
    int m;                   // dimension of matrix row
    int n;                   // dimension of matrix column.
    int non_zero;            // number of non-zero elelemnt in it.
    struct Element *element; // pointer so that we can create a array of elelemt and insert the data in it.
} ;
void create(struct Sparse *s)
{
    cout << "Enter the Numbers of Row And Colums" << endl;
    cin >> s->m >> s->n;
    cout << "Enter the Number of Non-zero element" << endl;
    cin >> s->non_zero;

    s->element = new Element[s->non_zero];

    for (int i = 0; i < s->non_zero; i++)
    {
        cout << "Enter the Row number " << endl;
        cin >> s->element[i].i;
        cout << "Enter the Column number " << endl;
        cin >> s->element[i].j;
        cout << "Enter the Value of that Row and Column " << endl;
        cin >> s->element[i].value;
    }
}

void display(struct Sparse s)
{

    int i, j, k = 0;

    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (i == s.element[k].i && j == s.element[k].j)
            {
                cout << s.element[k++].value << " ";
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
    struct Sparse s;

    create(&s);
    display(s);

    return 0;
}