#include <iostream>
using namespace std;
// class UpperTriangularMatrix
// {
// private:
//     int *Arr;
//     int n;

// public:
//     UpperTriangularMatrix(int size)
//     {
//         n = size;
//         Arr = new int[n * (n + 1) / 2];
//     }
//     void setdiagonal(int i, int j, int x)
//     {
//         if (j >= i)
//         {
//             Arr[(j - 1) * j / 2 + i - 1] = x;
//         }
//     }
//     int getvalue(int i, int j)
//     {

//         if (j>=i)
//         {
//             return Arr[(j - 1) * j / 2 + i - 1];
//         }
//         return 0;
//     }
//     void display()
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (j>=i)
//                 {

//                     cout << Arr[(j - 1) * j / 2 + i - 1] << "  ";
//                 }
//                 else
//                 {

//                     cout << "0  ";
//                 }
//             }
//             cout << endl;
//         }
//     }

//     ~UpperTriangularMatrix()
//     {
//         delete[] Arr;
//     }
// };

// int main()
// {
//     UpperTriangularMatrix m(5);

//     m.setdiagonal(1, 1, 1);
//     m.setdiagonal(1, 2, 2);
//     m.setdiagonal(1, 3, 3);
//     m.setdiagonal(1, 4, 4);
//     m.setdiagonal(1, 5, 5);
//     m.setdiagonal(2, 2, 6);
//     m.setdiagonal(2, 3, 7);
//     m.setdiagonal(2, 4, 8);
//     m.setdiagonal(2, 5, 9);
//     m.setdiagonal(3, 3, 10);
//     m.setdiagonal(3, 4, 11);
//     m.setdiagonal(3, 5, 12);
//     m.setdiagonal(4, 4, 13);
//     m.setdiagonal(4, 5, 14);
//     m.setdiagonal(5, 5, 15);
//     cout << m.getvalue(2, 2) << endl;
//     m.display();

//     return 0;
// }

//**************** COLUM MAJOR
class UpperTriangularMatrix
{
private:
    int *Arr;
    int n;

public:
    UpperTriangularMatrix(int size)
    {
        n = size;
        Arr = new int[n * (n + 1) / 2];
    }
    void setdiagonal(int i, int j, int x)
    {
        if (j >= i)
        {
            Arr[n * (i - 1) - (i - 2) * (i - 1) / 2 + (j - i)] = x;
        }
    }
    int getvalue(int i, int j)
    {

        if (j >= i)
        {
            return Arr[n * (i - 1) - (i - 2) * (i - 1) / 2 + (j - i)];
        }
        return 0;
    }
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= i)
                {

                    cout << Arr[n * (i - 1) - (i - 2) * (i - 1) / 2 + (j - i)] << "  ";
                }
                else
                {

                    cout << "0  ";
                }
            }
            cout << endl;
        }
    }

    ~UpperTriangularMatrix()
    {
        delete[] Arr;
    }
};

int main()
{
    UpperTriangularMatrix m(5);

    m.setdiagonal(1, 1, 1);
    m.setdiagonal(1, 2, 2);
    m.setdiagonal(1, 3, 3);
    m.setdiagonal(1, 4, 4);
    m.setdiagonal(1, 5, 5);
    m.setdiagonal(2, 2, 6);
    m.setdiagonal(2, 3, 7);
    m.setdiagonal(2, 4, 8);
    m.setdiagonal(2, 5, 9);
    m.setdiagonal(3, 3, 10);
    m.setdiagonal(3, 4, 11);
    m.setdiagonal(3, 5, 12);
    m.setdiagonal(4, 4, 13);
    m.setdiagonal(4, 5, 14);
    m.setdiagonal(5, 5, 15);
    cout << m.getvalue(2, 2) << endl;
    m.display();

    return 0;
}