#ifndef USUARIOS_HPP
#define USUARIOS_HPP
#include <iostream>

using namespace std;

class Usuario { //Desarrollo de la clase abstracta Usuario
    protected:
    string nombre;
    int edad;
    
    public:
    Usuario(string n, int e){ //Constructor de la clase Usuario para las variable nombre y edad
        nombre = n;
        edad = e;
    }

    string get_nombre(); //Getter de la clase Usuario para obtener la variable nombre

    int get_edad(); //Getter de la clase Usuario para obtener la variable edad

    void set_nombre(string nombre_nuevo); //Setter de la clase Usuario para actualizar la variable nombre

    void set_edad(int edad_nuevo); //Setter de la clase Usuario para actualizar la variable edad
 
};

#endif