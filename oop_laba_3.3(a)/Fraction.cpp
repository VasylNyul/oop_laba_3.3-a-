#include "Fraction.h"

using namespace std;
Fraction::Fraction()
	: first(0), second(0)
{}

Fraction::Fraction(long f, unsigned short s)
{
	set_a(f); set_b(s);
}

Fraction::Fraction(const Fraction& f)
{
	*this = f;
}

Fraction::operator string() const
{
	stringstream ss;

	ss << "Chuslo = " << first << "," << second << endl;

	return ss.str();
}