#include <iostream>
#include <cmath>
using namespace std;
class term
{
public:
    int coeff;
    int exp;
};

class poly
{
private:
    int n; // number of terms.
    term *t;

public:
    void create(int tot)
    {
        n = tot;
        t = new term[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the terms " << endl;
            cin >> t[i].coeff >> t[i].exp;
        }
    }

    void add(poly *p1, poly *p2)
    {
        int i = 0;
        int j = 0;
        int k = 0;

        poly *p3 = new poly;
        p3->n = p1->n + p2->n;
        p3->t = new term[p1->n + p2->n];

        while (i < p1->n && j < p2->n)
        {

            if (p1->t[i].exp > p2->t[j].exp)
            {
                p3->t[k++] = p1->t[i++];
            }
            else if (p1->t[i].exp < p2->t[j].exp)
            {
                p3->t[k++] = p2->t[j++];
            }
            else
            {

                p3->t[k].exp = p1->t[i].exp;
                p3->t[k++].coeff = p1->t[i++].coeff + p2->t[j++].coeff;
            }
        }

        for (; i < p1->n; i++)
        {
            p3->t[k++] = p1->t[i];
        }
        for (; j < p2->n; j++)
        {
            p3->t[k++] = p2->t[j];
        }

        p3->n = k;
        for (int i = 0; i < p3->n; i++)
        {
            cout << p3->t[i].coeff << "x" << p3->t[i].exp << "+ ";
        }
    }

    int sum(int x)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum = sum + t[i].coeff * pow(x, t[i].exp);
        }

        return sum;
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << t[i].coeff << "x" << t[i].exp << "+ ";
        }
    }
};

int main()
{
    poly p1;
    p1.create(2);
    cout << p1.sum(4);
    poly p2;
    p2.create(2);
    poly *p3;
    p3->add(&p1, &p2);
  

    return 0;
}