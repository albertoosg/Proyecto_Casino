#ifndef USUARIOREG_HPP
#define USUARIOREG_HPP
#include <iostream>
#include "usuarios.hpp"

using namespace std;

class usuarioRegistrado : public Usuario { //Desarrollo de la clase usuarioRegistrado que hereda de la clase Usuario
    protected:
    string nombreUsuario;
    string contrasena;

    public: //string n, int e, esto estaba puesto en el constructor y ns porq.
    usuarioRegistrado(string nU, string c): Usuario(nombre, edad){ //Constructor de la clase usuarioRegistrado para las variables nombreUsuario y contrasena
        nombreUsuario = nU;
        contrasena = c;
    }

    string get_nombreUsuario(); //Getter de la clase usuarioRegistrado para obtener la variable nombreUsuario

    string get_contrasena(); //Getter de la clase usuarioRegistrado para obtener la variable contrasena

    void set_nombreUsuario(string nombreUsuario_nuevo); //Setter de la clase usuarioRegistrado para actualizar la variable nombreUsuario

    void set_contrasena(string contrasena_nueva); //Setter de la clase usuarioRegistrado para actualizar la variable contrasena
};

#endif