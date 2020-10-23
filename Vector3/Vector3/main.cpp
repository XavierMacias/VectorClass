// Vector3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vect3.h"

int main()
{
    //std::cout << "Hello World!\n";
    Vect3<float> a = Vect3<float>(2.0f,7.0f,3.0f);
    Vect3<float> b(a);
    std::cout << "Vec: " << b.getY() << std::endl;
    Vect3<float> f = Vect3<float>(1, 0, 3);
    Vect3<float> c = b + a;

    std::cout << "VecC: " << c.getY() << std::endl;

    a.normalize();
    std::cout << "VecD: x: " << a.getX() << ", y: " << a.getY() << ", z: " << a.getZ() << std::endl;

    std::cout << "DISTANCE: " << a.distance_to(c) << std::endl;
    std::cout << "DOT PRODUCT: " << a.dot_product(c) << std::endl;

    Vect3<float> e = a.cross_product(f);
    std::cout << "VecE: x: " << e.getX() << ", y: " << e.getY() << ", z: " << e.getZ() << std::endl;

    std::cout << "ANGLE: " << a.angle_between(f) << std::endl;
}
