#pragma once
#include <iostream>
#include <cassert>
using namespace std;
class Fraction
{
public:
	const int numerator;
	const int denominator;
	int f_(int x, int y);
	Fraction(const int x, const int y);
	Fraction operator + (Fraction f);
	Fraction operator - (Fraction f);
	Fraction operator * (Fraction f);
	Fraction operator / (Fraction f);
	void print();
};