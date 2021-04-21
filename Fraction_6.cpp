#include "Fraction.h"
int main()
{
	Fraction f(1, 4);
	Fraction c(3, 4);
	(f + c).print();
	(f - c).print();
	(f * c).print();
	(f / c).print();
	return 0;
}