#pragma once
class Vect3
{
	public:

		Vect3();
		Vect3(int a, int b, int c);
		Vect3(const Vect3& c);
		~Vect3();

		int getFirst() const;
		int getSecond() const;
		int getThird() const;


	private:
		int first, second, third;
	};

inline int Vect3::getFirst() const { return first; }
inline int Vect3::getSecond() const { return second; }
inline int Vect3::getThird() const { return third; }

