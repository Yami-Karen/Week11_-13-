#include "Fraction.h"
Fraction::Fraction(const int x, const int y) : numerator(x / f_(x, y)), denominator(y / f_(x, y)) {};
int Fraction::f_(int x, int y)
{
	x = abs(x);
	y = abs(y);
	if (x % y == 0) return y;
	if (y % x == 0) return x;
	while (true)
	{
		if (x > y) x = x % y;
		if (y % x == 0) return x;
		if (y > x) y = y % x;
		if (x % y == 0) return y;
		if (x == y) return x;
	}
	return 1;
}
Fraction Fraction :: operator + (Fraction f)
{
	assert(f.denominator != 0);
	assert(this->denominator != 0);
	Fraction c(this->numerator * f.denominator + this->denominator * f.numerator, this->denominator * f.denominator);
	return c;
}
Fraction Fraction :: operator - (Fraction f)
{
	assert(f.denominator != 0);
	assert(this->denominator != 0);
	Fraction c(this->numerator * f.denominator - this->denominator * f.numerator, this->denominator * f.denominator);
	return c;
}
Fraction Fraction :: operator * (Fraction f)
{
	assert(f.denominator != 0);
	assert(this->denominator != 0);
	Fraction c(this->numerator * f.numerator, this->denominator * f.denominator);
	return c;
}
Fraction Fraction :: operator / (Fraction f)
{
	assert(f.denominator != 0);
	assert(this->denominator != 0);
	Fraction c(this->numerator * f.denominator, this->denominator * f.numerator);
	return c;
}
void Fraction::print()
{
	if (this->numerator % this->denominator == 0) cout << this->numerator << endl;
	else cout << this->numerator << " / " << this->denominator << endl;
}
