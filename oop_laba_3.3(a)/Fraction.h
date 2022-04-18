#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Fraction
{
private:
	long first;
	unsigned short second;
public:
	int get_a() const { return first; }
	int get_b() const { return second; }
	void set_a(unsigned int value) {first = value; }
	void set_b(unsigned int value) { second = value; }

	Fraction();
	Fraction(long, unsigned short);
	Fraction(const Fraction&);

	operator string() const;

};

