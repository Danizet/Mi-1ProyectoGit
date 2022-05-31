#include <iostream>

#include <persona.h>

using namespace std;

int main()
{
    cout << "Mi primer proyecto en Git" << endl;
    Persona p;
    p.nombre = "Daniel";
    p.edad = 21;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    return 0;
}
