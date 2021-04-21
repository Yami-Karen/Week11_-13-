#include "Fraction.h"
int main()
{
	Fraction f(1, 2);
	Fraction c(1, 1);
	(f + c + f).print();
	(f - c).print();
	(f * c).print();
	(f / c).print();
	return 0;
}
