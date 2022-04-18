#include "Public.h"

Public::Public()
	: Fraction(0, 0)
{}

Public::Public(long a, unsigned short b)
	: Fraction(a, b)
{}

Public::Public(Fraction& a)
	: Fraction(a.get_a(), a.get_b())
{}

ostream& operator << (ostream& out, const Public& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Public& a)
{
	int c;
	unsigned int b;
	cout << "Zila chastuna = "; in >> c;
	cout << "Drobova chastuna = "; in >> b;
	cout << endl;
	a.set_a(c);
	a.set_b(b);
	return in;
}

Public::operator string() const
{
	stringstream ss;

	ss << "Chuslo = " << this->get_a() << "," << this->get_b() << endl;

	return ss.str();
}

Public operator - (const Public& a, const Public& b)
{
	Fraction u(a.get_a() - b.get_a(), a.get_b() - b.get_b());
	return u;
}

Public& Public:: operator ++()
{
	this->set_a(this->get_a() + 1);
	return *this;
}
Public& Public:: operator --()
{
	this->set_a(this->get_a() - 1);
	return *this;
}
Public Public:: operator ++(int)
{
	Public p(*this);
	this->set_a(this->get_a() + 1);
	return p;
}
Public Public:: operator --(int)
{
	Public p(*this);
	this->set_a(this->get_a() - 1);
	return p;
}

bool operator < (Public& f, Public& s)
{
	return f.get_a() < s.get_a() || f.get_a() == s.get_a() && f.get_b() < s.get_b();
}

bool operator == (Public& f, Public& s)
{
	return f.get_a() == s.get_a() && f.get_b() == s.get_b();
}

bool operator > (Public& f, Public& s)
{
	return f.get_a() > s.get_a() || f.get_a() == s.get_a() && f.get_b() > s.get_b();
}
bool operator <= (Public& f, Public& s)
{
	return !(f.get_a() < s.get_a() || f.get_a() == s.get_a() && f.get_b() < s.get_b());
}

bool operator != (Public& f, Public& s)
{
	return !(f.get_a() == s.get_a() && f.get_b() == s.get_b());
}

bool operator >= (Public& f, Public& s)
{
	return !(f.get_a() > s.get_a() || f.get_a() == s.get_a() && f.get_b() > s.get_b());
}
