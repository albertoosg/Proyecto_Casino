#ifndef USUARIO_HPP
#define USUARIO_HPP
#include <iostream>

using namespace std;

//Declaración de las funciones
void mostrarMenu(); //Declaración de la función encargada de mostrar el menú por pantalla 
void adivinaElNumero(int &saldo); //Declaración de la función encargada de ejecutar el primer juego 
void jugarTragamonedas(int &saldo); //Declaración de la función encargada de ejecutar el segundo juego
void parImpar(int &saldo); //Declaración de la función encargada de ejecutar el tercer juego


class Usuario { //Desarrollo de la clase abstracta Usuario
    protected:
    string nombre;
    int edad;
    
    public:
    Usuario(string n, int e){ //Constructor de la clase Usuario para las variable nombre y edad
        nombre = n;
        edad = e;
    }

    string get_nombre(){ //Getter de la clase Usuario para obtener la variable nombre
        return nombre;
    }

    int get_edad(){ //Getter de la clase Usuario para obtener la variable edad
        return edad;
    }

    void set_nombre(string nombre_nuevo){ //Setter de la clase Usuario para actualizar la variable nombre
        nombre = nombre_nuevo;
    }

    void set_edad(int edad_nuevo){ //Setter de la clase Usuario para actualizar la variable edad
        edad = edad_nuevo;
    }
};

class usuarioRegistrado : public Usuario { //Desarrollo de la clase usuarioRegistrado que hereda de la clase Usuario
    protected:
    string nombreUsuario;
    string contrasena;

    public: //string n, int e, esto estaba puesto en el constructor y ns porq.
    usuarioRegistrado(string nU, string c): Usuario(nombre, edad){ //Constructor de la clase usuarioRegistrado para las variables nombreUsuario y contrasena
        nombreUsuario = nU;
        contrasena = c;
    }

    string get_nombreUsuario(){ //Getter de la clase usuarioRegistrado para obtener la variable nombreUsuario
        return nombreUsuario;
    }

    string get_contrasena(){ //Getter de la clase usuarioRegistrado para obtener la variable contrasena
        return contrasena;
    }

    void set_nombreUsuario(string nombreUsuario_nuevo){ //Setter de la clase usuarioRegistrado para actualizar la variable nombreUsuario
        nombreUsuario = nombreUsuario_nuevo;
    }

    void set_contrasena(string contrasena_nueva){ //Setter de la clase usuarioRegistrado para actualizar la variable contrasena
        contrasena = contrasena_nueva;
    }
};

class usuarioNoRegistrado : public Usuario { //Desarrollo de la clase usuarioNoRegistrado que hereda de la clase Usuario
    protected:
    string nombreUsuarioNoRegistrado;
    string contrasenaUsuarioNoRegistrado;

    public: //string n, int e, esto estaba puesto en el constructor y ns porq.
    usuarioNoRegistrado(string nUN, string cU): Usuario(nombre, edad){ //Constructor de la clase usuarioNoRegistrado para las variables nombreUsuarioNoRegistrado y contrasenaUsuarioNoRegistrado
        nombreUsuarioNoRegistrado = nUN;
        contrasenaUsuarioNoRegistrado = cU;
    }

    string get_nombreUsuarioNoRegistrado(){ //Getter de la clase usuarioNoRegistrado para obtener la variable nombreUsuarioNoRegistrado
        return nombreUsuarioNoRegistrado;
    }

    string get_contrasenaUsuarioNoRegistrado(){ //Getter de la clase usuarioNoRegistrado para obtener la variable contrasenaUsuarioNoRegistrado
        return contrasenaUsuarioNoRegistrado;
    }

    void set_contrasenaUsuarioNoRegistrado(string contrasenaUsuarioNoRegistrado_nueva){ //Setter de la clase usuarioNoRegistrado para actualizar la variable contrasenaUsuarioNoRegistrado
        contrasenaUsuarioNoRegistrado = contrasenaUsuarioNoRegistrado_nueva;
    }

    void set_nombreUsuarioNoRegistrado(string nombreUsuarioNoRegistrado_nuevo){ //Setter de la clase usuarioNoRegistrado para actualizar la variable nombreUsuarioNoRegistrado
        nombreUsuarioNoRegistrado = nombreUsuarioNoRegistrado_nuevo;
    }
};
#endif