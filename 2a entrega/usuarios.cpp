#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "usuarios.hpp"

using namespace std;

string Usuario:: get_nombre(){ //Getter de la clase Usuario para obtener la variable nombre
    return nombre;
}

int Usuario ::get_edad(){ //Getter de la clase Usuario para obtener la variable edad
    return edad;
}

void Usuario :: set_nombre(string nombre_nuevo){ //Setter de la clase Usuario para actualizar la variable nombre
    nombre = nombre_nuevo;
}

void Usuario :: set_edad(int edad_nuevo){ //Setter de la clase Usuario para actualizar la variable edad
    edad = edad_nuevo;
}
