#include <iostream>
using namespace std;
class sum
{
private:
    int x, y;
    int *ptr = nullptr;

public:
    sum(int a, int b)
    {
        x = a, y = b;
        ptr = new int[5];
    }
    ~sum() //Tthe destructor is just called before the object destory in the main program as destructor helps us to destroy the space which is created in heap.
    {
        cout << "ADDRESS OF PTR " << ptr << endl;
        cout << "Your object is destroyed" << endl;
        delete[] ptr;
        ptr = nullptr;
    }
    void showdata()
    {
        int s = x + y;
        cout << this << " for " << s << endl;
    }
};

class demo
{
    int *p;

public:
    demo()
    {
        p = new int[10];
        cout << "constructor of demo" << endl;
    }
    ~demo()
    {
        delete[] p;
        cout << "destructor of demo" << endl;
    }
};

void fun()
{
    demo *p = new demo();
    delete p;
}

int main()
{
    sum s(10, 20);
    sum *s1 = new sum(s); // Here there will be shallow as we have not created our own copy constructor.
    s1->showdata();
    s.showdata();
    delete s1; // For Dynamically alloacted Variable we have to explicit de allocate it . by writing delete keyword infron of it.
    fun();
    return 0;
}