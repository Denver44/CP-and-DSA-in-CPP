#include <iostream>
using namespace std;

class Rectangle
{
public:
	void area()
	{
		cout << "area of rectangle" << endl;
	}
};

class Cuboid : public Rectangle
{
public:
	void volume()
	{
		cout << "cuboid volume" << endl;
	}
};

//  program base class pointer derived class object
int main()
{
	Cuboid c;
	Rectangle *p = &c;

	c.area();
	c.volume();
	p->area();

	// p->volume(); // as in the base class there is no volume class. // throw err because  'class rectangle' has no member named 'volume'
	// Reason of err : As the pointer is of base class so it will check only its base class weather he has the address of deroved class in it.
	return 0;
}
#include <iostream>
using namespace std;

/*program for demo#3-base class pointer derived class object

*/
class basicCar
{
public:
	void start()
	{
		cout << "car started" << endl;
	}
};
class advanceCar : public basicCar
{
public:
	void playmusic()
	{
		cout << "playing music" << endl;
	}
};
// WE CANNOT MAKE THE POINTER OF THE DERIVED CLASS AND STORE THE ADDRESS OF BASE CLASS IN IT.
int main()
{
	// basicCar *p;
	// advanceCar b;
	// p = &b;
	// b.start();
	// b.playmusic();
	// p->start();
	// p->playmusic(); // same problem.

	return 0;
}