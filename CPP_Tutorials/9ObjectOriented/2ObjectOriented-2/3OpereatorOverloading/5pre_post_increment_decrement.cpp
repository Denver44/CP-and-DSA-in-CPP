#include <iostream>
using namespace std;
// For pre and post we dont have to pass argument as the value is passed in this only.
// So at return time we have to just *this and return  because we want to return the value not the address.
class index
{
private:
    int count;

public:
    index()
    {
        count = 0;
    }
    index(int a)
    {
        count = a;
    }
    void display()
    {
        cout << count << endl;
    }
    index operator--() // PRE DECREMENT
    {
        --count;
        return *this;
    }
    index operator--(int) // here the int is dummy and this syntax for POST DECREMENT
    {
        index i(this->count);
        count--;
        return i;
    }
    index &operator++() //  PRE INCREMENT
    {
        ++count;
        return *this;
    }
    index operator++(int) // here the int is dummy and this syntax for  POST INCREMENT
    {
        index i(this->count);
        count++;
        return i;
    }

    // returning const ref .
    index &operator+=(index const &c) // here the int is dummy  POST INCREMENT
    {
        this->count = this->count + c.count;
        return *this;
    }
};
int main()
{
    // index i, j, k, l, m;
    // i.display(); //0
    // j = ++i;
    // j.display(); // 1
    // k = i++;
    // k.display(); //1
    // i.display(); //2
    // m = i--;
    // m.display(); //2
    // l = --i;     //
    // l.display(); //0
    // index i(6), j;
    // j = i++;
    // i.display();
    // j.display();

    // operator +=
    index i(6), j(3);
    (i += j) += j;
    i.display();
    j.display();
    (i++);
    (j++);
    i.display();
    j.display();

    return 0;
}