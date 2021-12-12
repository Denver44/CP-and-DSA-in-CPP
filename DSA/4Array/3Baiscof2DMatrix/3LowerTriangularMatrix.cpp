#include <iostream>
using namespace std;
class LowertriangularMatrix
{
private:
    int *Arr;
    int n;

public:
    LowertriangularMatrix(int size)
    {
        n = size;
        Arr = new int[n * (n + 1) / 2];
    }
    void setdiagonal(int i, int j, int x)
    {
        if (i >= j)
        {
            Arr[(i - 1) * i / 2 + j - 1] = x;
        }
    }
    int getvalue(int i, int j)
    {

        if (i >= j)
        {
            return Arr[i * (i - 1) / 2 + j - 1];
        }
        return 0;
    }
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i >= j)
                {

                    cout << Arr[i * (i - 1) / 2 + j - 1] << " ";
                }
                else
                {

                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }

    ~LowertriangularMatrix()
    {
        delete[] Arr;
    }
};

int main()
{
    LowertriangularMatrix m(3);

    m.setdiagonal(1, 1, 10);
    m.setdiagonal(2, 1, 20);
    m.setdiagonal(3, 1, 30);
    m.setdiagonal(2, 2, 40);
    m.setdiagonal(3, 2, 50);
    m.setdiagonal(3, 3, 60);
    cout << m.getvalue(2, 2) << endl;
    m.display();

    return 0;
}

//**************** COLUM MAJOR
// class LowertriangularMatrix
    // {
    // private:
    //     int *Arr;
    //     int n;

    // public:
    //     LowertriangularMatrix(int size)
    //     {
    //         n = size;
    //         Arr = new int[n * (n + 1) / 2];
    //     }
    //     void setdiagonal(int i, int j, int x)
    //     {
    //         if (i >= j)
    //         {
    //             Arr[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] = x;
    //         }
    //     }
    //     int getvalue(int i, int j)
    //     {

    //         if (i >= j)
    //         {
    //             return Arr[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j];
    //         }
    //         return 0;
    //     }
    //     void display()
    //     {
    //         for (int i = 1; i <= n; i++)
    //         {
    //             for (int j = 1; j <= n; j++)
    //             {
    //                 if (i >= j)
    //                 {

    //                     cout << Arr[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] << " ";
    //                 }
    //                 else
    //                 {

    //                     cout << "0 ";
    //                 }
    //             }
    //             cout << endl;
    //         }
    //     }

    //     ~LowertriangularMatrix()
    //     {
    //         delete[] Arr;
    //     }
    // };

    // int main()
    // {
    //     LowertriangularMatrix m(3);

    //     m.setdiagonal(1, 1, 10);
    //     m.setdiagonal(2, 1, 20);
    //     m.setdiagonal(3, 1, 30);
    //     m.setdiagonal(2, 2, 40);
    //     m.setdiagonal(3, 2, 50);
    //     m.setdiagonal(3, 3, 60);
    //     cout << m.getvalue(2, 2) << endl;
    //     m.display();

    //     return 0;
    // }
    //