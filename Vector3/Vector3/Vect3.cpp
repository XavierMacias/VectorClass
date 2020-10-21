#include "Vect3.h"

Vect3::Vect3()
{
	first = 0;
	second = 0;
	third = 0;
}

Vect3::Vect3(int a, int b, int c)
{
	first = a;
	second = b;
	third = c;

}

Vect3::Vect3(const Vect3& c)
{
	first = c.first;
	second = c.second;
	third = c.third;
}

Vect3::~Vect3()
{
	// destructor
}
