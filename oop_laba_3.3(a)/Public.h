#include "Fraction.h"

#pragma once
class Public :
	private Fraction
{
public:
	Public();
	Public(long, unsigned short);
	Public(Fraction&);

	friend ostream& operator << (ostream&, const Public&);
	friend istream& operator >> (istream&, Public&);
	operator string() const;

	friend Public operator - (const Public&, const Public&);

	friend bool operator < (Public&, Public&);
	friend bool operator == (Public&, Public&);
	friend bool operator > (Public&, Public&);
	friend bool operator <= (Public&, Public&);
	friend bool operator != (Public&, Public&);
	friend bool operator >= (Public&, Public&);

	Public& operator ++();
	Public& operator --();
	Public operator ++(int);
	Public operator --(int);
};



