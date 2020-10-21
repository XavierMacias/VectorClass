#pragma once
#include <math.h> 

class Vect3
{
	public:

		Vect3();
		Vect3(float a, float b, float c);
		Vect3(const Vect3& c);
		~Vect3();

		float getFirst() const;
		float getSecond() const;
		float getThird() const;

		Vect3 normalize() const;
		float distance_to(const Vect3& vect);
		float dot_product(const Vect3& vect);
		Vect3 cross_product(const Vect3& vect);
		float angle_between(const Vect3& vect);

		Vect3 operator + (Vect3 const& obj) {
			Vect3 res;
			res.first = first + obj.first;
			res.second = second + obj.second;
			res.third = third + obj.third;
			return res;
		}


	private:
		float first, second, third;
		
};

inline float Vect3::getFirst() const { return first; }
inline float Vect3::getSecond() const { return second; }
inline float Vect3::getThird() const { return third; }

