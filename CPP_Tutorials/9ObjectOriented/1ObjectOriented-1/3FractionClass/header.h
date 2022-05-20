#include <iostream>
using namespace std;

class Fraction
{

private:
	int numerator, denominator;

public:
	Fraction(int numerator, int denominator);
	void print();
	void simplify();
	void add(Fraction const &f2);
	void multiply(Fraction const &f2);
};
