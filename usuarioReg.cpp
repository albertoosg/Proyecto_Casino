#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>
#include <vector>
#include "usuarioReg.hpp"

using namespace std;

string usuarioRegistrado :: get_nombreUsuario(){ //Getter de la clase usuarioRegistrado para obtener la variable nombreUsuario
        return nombreUsuario;
}

string usuarioRegistrado :: get_contrasena(){ //Getter de la clase usuarioRegistrado para obtener la variable contrasena
    return contrasena;
}

void usuarioRegistrado :: set_nombreUsuario(string nombreUsuario_nuevo){ //Setter de la clase usuarioRegistrado para actualizar la variable nombreUsuario
    nombreUsuario = nombreUsuario_nuevo;
}

void usuarioRegistrado :: set_contrasena(string contrasena_nueva){ //Setter de la clase usuarioRegistrado para actualizar la variable contrasena
        contrasena = contrasena_nueva;
    }