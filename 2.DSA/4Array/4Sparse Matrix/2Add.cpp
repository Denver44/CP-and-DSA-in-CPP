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
} s;
void create(struct Sparse *s)
{
    cout << "Enter the Numbers of Row And Colums" << endl;
    cin >> s->m >> s->n;
    cout << "Enter the Number of Non-zero element" << endl;
    cin >> s->non_zero;

    s->element = new Element[s->non_zero];

    for (int i = 0; i < s->non_zero; i++)
    {
        cin >> s->element[i].i;
        cin >> s->element[i].j;
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

struct Sparse *add(struct Sparse *s1, struct Sparse *s2)
{
    struct Sparse *sum;
    int i = 0;
    int j = 0;
    int k = 0;

    if (s1->n != s2->n && s1->m != s2->m)
        return NULL;

    sum = new Sparse;
    sum->element = new Element[s1->non_zero + s2->non_zero];
    while (i < s1->non_zero && j < s2->non_zero)
    {
        if (s1->element[i].i < s2->element[j].i) // row
        {
            sum->element[k++] = s1->element[i++];
        }
        else if (s1->element[i].i > s2->element[j].i) // row
        {
            sum->element[k++] = s2->element[j++];
        }
        else
        {
            if (s1->element[i].j < s2->element[j].j) //col
            {
                sum->element[k++] = s1->element[i++];
            }
            else if (s1->element[i].j > s2->element[j].j) //col
            {
                sum->element[k++] = s2->element[j++];
            }
            else
            {
                sum->element[k] = s1->element[i];
                sum->element[k++].value = s1->element[i++].value + s2->element[j++].value;
            }
        }
    }
    for (; i < s1->non_zero; i++)
    {
        sum->element[k++] = s1->element[i];
    }
    for (; j < s2->non_zero; j++)
    {
        sum->element[k++] = s2->element[j];
    }
    sum->m = s1->m;
    sum->n = s1->n;
    sum->non_zero = k;

    return sum;
}

int main()
{
    struct Sparse s1, s2;
    struct Sparse *s3;

    create(&s1);
    create(&s2);
    s3 = add(&s1, &s2);
    display(s1);
    display(s2);
    cout << "\nAddition Of Matrix" << endl;
    display(*s3);

    return 0;
}