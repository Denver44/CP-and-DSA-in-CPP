#include <iostream>
using namespace std;
class Matrix
{
private:
    int *arr;
    int n;

public:
    Matrix()
    {
    }
    void createDiagonal(int size);
    void setdiagonal(int i, int j, int x);
    int getvalueDiagonal(int i, int j);
    void displaydiagonal();
    void createLowerT(int size);
    void setLowerT(int i, int j, int x);
    int getvalueLowerT(int i, int j);
    void displayLowerT();
};
void Matrix::createDiagonal(int size)
{
    n = size;
    arr = new int[n];
}

void Matrix::setdiagonal(int i, int j, int x)
{
    if (i == j)
    {
        arr[i - 1] = x;
    }
    else
    {
        return;
    }
}
int Matrix::getvalueDiagonal(int i, int j)
{
    int x = 0;
    if (i == j)
    {
        x = arr[i - 1];
        return x;
    }
    else
    {
        return 0;
    }
}

void Matrix::displaydiagonal()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void Matrix::createLowerT(int size)
{
    n = size;
    arr = new int[size * (size + 1) / 2];
}
void Matrix::setLowerT(int i, int j, int x)
{
    if (i >= j)
    {
        arr[(i * (i - 1) / 2) + (j - 1)] = x;
    }
}
int Matrix::getvalueLowerT(int i, int j)
{
    int x = 0;
    if (i >= j)
    {
        x = arr[(i * (i - 1) / 2) + (j - 1)];
        return x;
    }
    else
    {
        return 0;
    }
}
void Matrix::displayLowerT()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << arr[(i * (i - 1) / 2) + (j - 1)] << " ";
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
    Matrix m1;
    m1.createLowerT(5);
    m1.setLowerT(1, 1, 1);
    m1.setLowerT(2, 1, 2);
    m1.setLowerT(2, 2, 3);
    m1.setLowerT(3, 1, 4);
    m1.setLowerT(3, 2, 5);
    m1.setLowerT(3, 3, 6);
    m1.setLowerT(4, 1, 7);
    m1.setLowerT(4, 2, 8);
    m1.setLowerT(4, 3, 9);
    m1.setLowerT(4, 4, 10);
    m1.setLowerT(5, 1, 11);
    m1.setLowerT(5, 2, 12);
    m1.setLowerT(5, 3, 13);
    m1.setLowerT(5, 4, 14);
    m1.setLowerT(5, 5, 15);
    m1.displayLowerT();

    return 0;
}