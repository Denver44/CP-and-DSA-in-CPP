#include <iostream>
#include <cstring>
using namespace std;

class Dummy
{
	int a, b;
	int *p;

public:
	Dummy()
	{
		a = b = 0;
		p = new int;
	}

	void setdata(int x, int y, int z)
	{
		a = x;
		b = y;
		*p = z;
	}

	void printdata()
	{
		cout << "A : " << a << "  B: " << b << " P: " << *p << endl;
	}

	Dummy(const Dummy &d)
	{
		cout << "Shallow Copy" << endl;
		a = d.a;
		b = d.b;
		p = d.p; // dereferening the p and putting the value there.
	}
	~Dummy()
	{
		delete p; // first d2 delete then d1.
	}
};

int main()
{
	Dummy d1;
	d1.setdata(3, 4, 15);

	Dummy d2 = d1;
	cout << "d1 :- ";
	d1.printdata();

	cout << "d2 :- ";
	d2.printdata();

	d1.setdata(3, 14, 5);

	cout << "d1 :- ";
	d1.printdata();

	cout << "d2 :- ";
	d2.printdata();

	return 0;
}
