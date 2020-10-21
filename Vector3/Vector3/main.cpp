// Vector3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vect3.h"

int main()
{
    //std::cout << "Hello World!\n";
    Vect3 a = Vect3(2.0f,7.0f,3.0f);
    Vect3 b(a);
    std::cout << "Vec: " << b.getSecond() << std::endl;
    Vect3 f = Vect3(1.0f, 0.0f, 3.0f);
    Vect3 c = b + a;

    std::cout << "VecC: " << c.getSecond() << std::endl;

    Vect3 d = a.normalize();
    std::cout << "VecD: x: " << d.getFirst() << ", y: " << d.getSecond() << ", z: " << d.getThird() << std::endl;

    std::cout << "DISTANCE: " << a.distance_to(c) << std::endl;
    std::cout << "DOT PRODUCT: " << a.dot_product(c) << std::endl;

    Vect3 e = a.cross_product(f);
    std::cout << "VecE: x: " << e.getFirst() << ", y: " << e.getSecond() << ", z: " << e.getThird() << std::endl;

    std::cout << "ANGLE: " << a.angle_between(f) << std::endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
