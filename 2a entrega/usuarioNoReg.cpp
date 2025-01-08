#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "usuarioNoReg.hpp"

using namespace std;

string usuarioNoRegistrado :: get_nombreUsuarioNoRegistrado(){ //Getter de la clase usuarioNoRegistrado para obtener la variable nombreUsuarioNoRegistrado
    return nombreUsuarioNoRegistrado;
}

string usuarioNoRegistrado :: get_contrasenaUsuarioNoRegistrado(){ //Getter de la clase usuarioNoRegistrado para obtener la variable contrasenaUsuarioNoRegistrado
    return contrasenaUsuarioNoRegistrado;
}

void usuarioNoRegistrado :: set_contrasenaUsuarioNoRegistrado(string contrasenaUsuarioNoRegistrado_nueva){ //Setter de la clase usuarioNoRegistrado para actualizar la variable contrasenaUsuarioNoRegistrado
    contrasenaUsuarioNoRegistrado = contrasenaUsuarioNoRegistrado_nueva;
}

void usuarioNoRegistrado :: set_nombreUsuarioNoRegistrado(string nombreUsuarioNoRegistrado_nuevo){ //Setter de la clase usuarioNoRegistrado para actualizar la variable nombreUsuarioNoRegistrado
    nombreUsuarioNoRegistrado = nombreUsuarioNoRegistrado_nuevo;
}