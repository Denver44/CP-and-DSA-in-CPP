#include <iostream>
using namespace std;
class Matrix
{
private:
    int *Arr;
    int n;

public:
    Matrix(int size)
    {
        n = size;
        Arr = new int[size];
    }
    void setdiagonal(int i, int j, int x)
    {
        if (i == j)
        {
            Arr[i - 1] = x;
        }
    }
    int getvalue(int i, int j)
    {

        if (i == j)
        {
            return Arr[i - 1];
        }
        return 0;
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    cout << Arr[i] << " ";
                }
                else
                {

                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }

    ~Matrix()
    {
        delete[] Arr;
    }
};

int main()
{
    Matrix m(2);

    m.setdiagonal(1, 1, 10);
    m.setdiagonal(2, 2, 20);
    m.setdiagonal(3, 3, 30);
    m.setdiagonal(4, 4, 40);
    m.setdiagonal(5, 5, 50);
    m.setdiagonal(6, 6, 60);
    m.setdiagonal(7, 7, 70);
    m.setdiagonal(8, 8, 80);
    cout << m.getvalue(2,2) << endl;
    m.display();

    return 0;
}