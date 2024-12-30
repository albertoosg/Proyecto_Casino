/*
CUNEF Universidad
Proyectos de programación
Primera entrega proyecto
Participantes:
- María Moreno Caso
- Inés Devís Calderón
- Sofía Pérez Martínez
- José Emparanza Azpiroz
- Alberto Sainz Gimeno
*/

//Declaración de las librerías
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "usuarios.hpp"
#include "usuarios.cpp"

using namespace std;



int main(){
    int saldo = 1000;  // Saldo inicial del jugador
    int opcion, edad; //Opción elegida por el jugador y su edad
    string nombre; //Nombre del jugador

    srand(time(0));  // Inicializar generador de números aleatorios

    cout << "Introduzca su nombre"<< endl;
    cin >> nombre; 
    cout << "Introduzca su edad " << endl;
    cin >> edad;

    if(edad < 18){ //Si el jugador es menor de 18 no podrá acceder al casino y se lanzará una excepción
        throw runtime_error("Eres menor de edad");
    };

    try{ //Si el jugador tiene 18 o más años podrá acceder al casino
        cout <<"Todo bien."<< endl;
    }catch(exception&e){
        cout << "Error: "<<  e.what();
    };

   do { //Bucle do encargado de hacer funcionar el menú del casino
        mostrarMenu();
        cout << "Saldo actual: " << saldo << " euros" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: //Si el jugador elige esta opción se iniciará el primer juego
                adivinaElNumero(saldo); 
                break;
            case 2: //Si el jugador elige esta opción se iniciará el segundo juego
                jugarTragamonedas(saldo);
                break;
            case 3: //Si el jugador elige esta opción se iniciará el tercer juego
                parImpar(saldo);
                break;
            case 4: //Si el jugador elige esta opción saldrá del casino
                cout << "Gracias por jugar en el casino. Vuelve pronto!" << endl;
                break;
            default: //Si el jugador no elige ninguna opción entre el 1 y el 4 se le informará y se le permitirá volver a intentarlo
                cout << "Opcion no valida. Intenta de nuevo." << endl;
        }
   } while (opcion != 4 && saldo > 0); //El bucle do continuará mientras que el jugador escoja una opción que no sea salir del juego y mientras su saldo sea positivo

    if (saldo <= 0) { //Si el saldo del jugador es 0 o menor se terminará el juego
        cout << "Te has quedado sin saldo. Juego terminado!" << endl;
    }
    return 0;
}
