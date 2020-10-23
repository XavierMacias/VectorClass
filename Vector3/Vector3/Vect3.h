#pragma once
#include <math.h> 

template <class T>
class Vect3
{
	public:

		Vect3() {
			x = 0;
			y = 0;
			z = 0;
		}

		Vect3(T a, T b, T c) {
			x = a;
			y = b;
			z = c;
		}

		Vect3(const Vect3& c) {
			x = c.x;
			y = c.y;
			z = c.z;
		}

		float getX() const { return x; }
		float getY() const { return y; }
		float getZ() const { return z; }

		void normalize() {
			T denom = sqrt(x*x + y*y + z*z);
			x = x / denom; 
			y = y / denom;
			z = z / denom;
		}

		T distance_to(const Vect3& vect) const {
			T x1 = x - vect.x;
			T y1 = y - vect.y;
			T z1 = z - vect.z;

			return sqrt(x1*x1 + y1*y1 + z1*z1);
		}

		T dot_product(const Vect3& vect) const {
			return x * vect.x + y * vect.y + z * vect.z;
		}
		
		Vect3 cross_product(const Vect3<T>& vect) const {
			T x1 = y * vect.z - vect.y * z;
			T y1 = z * vect.x - vect.z * x;
			T z1 = x * vect.y - vect.x * y;

			return Vect3<T>(x1, y1, z1);
		}
		
		float angle_between(const Vect3& vect) const {
			return acos(dot_product(vect) / (sqrt(x*x + y*y + z*z) * sqrt(vect.x*vect.x + vect.y*vect.y + vect.z*vect.z)));
		}

		Vect3 operator + (Vect3& const obj) {
			Vect3 res;
			res.x = x + obj.x;
			res.y = y + obj.y;
			res.z = z + obj.z;
			return res;
		}


	private:
		T x, y, z;
		
};

