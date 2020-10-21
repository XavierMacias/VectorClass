#include "Vect3.h"

Vect3::Vect3()
{
	first = 0.0f;
	second = 0.0f;
	third = 0.0f;
}

Vect3::Vect3(float a, float b, float c)
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

Vect3 Vect3::normalize() const {
	float denom = sqrt(pow(first, 2) + pow(second, 2) + pow(third, 2));
	return Vect3(first/denom, second/denom, third/denom);
}

float Vect3::distance_to(const Vect3& vect) {
	return sqrt(pow((first-vect.first), 2) + pow((second - vect.second), 2) + pow((third - vect.third), 2));
}

float Vect3::dot_product(const Vect3& vect) {
	return first * vect.first + second * vect.second + third * vect.third;
}

Vect3 Vect3::cross_product(const Vect3& vect) {
	return Vect3(second*vect.third - vect.second*third, third * vect.first - vect.third * first, first * vect.second - vect.first * second);
}

float Vect3::angle_between(const Vect3& vect) {
	return acos(dot_product(vect)/(sqrt(pow(first, 2)+pow(second, 2)+pow(third, 2)) * sqrt(pow(vect.first, 2) + pow(vect.second, 2) + pow(vect.third, 2))));
}