#ifndef USUARIONOREG_HPP
#define USUARIONOREG_HPP
#include <iostream>
#include "usuarios.hpp"

using namespace std;

class usuarioNoRegistrado : public Usuario { //Desarrollo de la clase usuarioNoRegistrado que hereda de la clase Usuario
    protected:
    string nombreUsuarioNoRegistrado;
    string contrasenaUsuarioNoRegistrado;

    public: //string n, int e, esto estaba puesto en el constructor y ns porq.
    usuarioNoRegistrado(string nUN, string cU): Usuario(nombre, edad){ //Constructor de la clase usuarioNoRegistrado para las variables nombreUsuarioNoRegistrado y contrasenaUsuarioNoRegistrado
        nombreUsuarioNoRegistrado = nUN;
        contrasenaUsuarioNoRegistrado = cU;
    }

    string get_nombreUsuarioNoRegistrado(); //Getter de la clase usuarioNoRegistrado para obtener la variable nombreUsuarioNoRegistrado

    string get_contrasenaUsuarioNoRegistrado(); //Getter de la clase usuarioNoRegistrado para obtener la variable contrasenaUsuarioNoRegistrado
    
    void set_contrasenaUsuarioNoRegistrado(string contrasenaUsuarioNoRegistrado_nueva); //Setter de la clase usuarioNoRegistrado para actualizar la variable contrasenaUsuarioNoRegistrado

    void set_nombreUsuarioNoRegistrado(string nombreUsuarioNoRegistrado_nuevo); //Setter de la clase usuarioNoRegistrado para actualizar la variable nombreUsuarioNoRegistrado
};

#endif