using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
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
int main()
{
    rectangle r1;
    r1.setlength(10);
    r1.setbreadth(5);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << r1.getlength() << endl;
}