#include <iostream>
using namespace std;
class shape
{

public:
    int length;
    int breadth;
    shape(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
class rectangle
{
public:
    int area(shape *s)
    {
        return s->area();
    }
    int area2(shape s)
    {
        return s.area();
    }
};

void swap(shape s1, shape s2)
{
    int templen = s2.length;
    s2.length = s1.length;
    s1.length = templen;

    int tempbdth = s2.breadth;
    s2.breadth = s1.breadth;
    s1.breadth = tempbdth;
}
void swap2(shape *s1, shape *s2)
{
    int templen = s2->length;
    s2->length = s1->length;
    s1->length = templen;

    int tempbdth = s2->breadth;
    s2->breadth = s1->breadth;
    s1->breadth = tempbdth;
}
void swap3(shape &s1, shape &s2)
{
    shape temp = s2;
    s2 = s1;
    s1 = temp;
}

int main()
{
    // -------------------------------------- SWAP1 WAS CALLED PASS BY VALUE --------------------------------------------//
    // shape s1(5, 10);
    // shape s2(10, 10);
    // rectangle r1, r2;
    // cout << r1.area2(s1) << endl;
    // cout << r2.area2(s2) << endl;
    // swap(s1, s2);
    // cout << r1.area2(s1) << endl;
    // cout << r2.area2(s2) << endl;

    // -------------------------------------- SWAP2 WAS CALLED PASS BY ADDRESS --------------------------------------------//

    shape *s1 = new shape(6, 10);
    shape *s2 = new shape(8, 10);
    rectangle r1, r2;
    cout << r1.area(s1) << endl;
    cout << r2.area(s2) << endl;
    swap2(s1, s2);
    cout << r1.area(s1) << endl;
    cout << r2.area(s2) << endl;
}