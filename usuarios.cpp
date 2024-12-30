#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "usuarios.hpp"

using namespace std;


void mostrarMenu(){ //Desarrollo de la función mostrarMenu, la cual muestra por pantalla el menú del casino
    cout << "\n--- Bienvenido al Casino ---\n";
    cout << "1. Jugar a Adivina el numero\n";
    cout << "2. Jugar a las Tragamonedas\n";
    cout << "3. Jugar al Par o Impar\n";
    cout << "4. Salir\n";
}

void adivinaElNumero(int &saldo){ //Desarrollo de la función adivinaElNumero, la cual ejecuta el primer juego
    int cantidadApostada, numeroApostado1, numeroGanador, numeroApostado2, numeroApostado3; //Declaración de las distintas variables necesarias en el primer juego
    cout << "\n Este es el juego de adivina el numero ---\n";
    cout << "Tu saldo incial es: " << saldo<< " euros \n";
    cout << "Por favor, ingrese la cantidad a apostar: ";
    cin >> cantidadApostada;

    if (cantidadApostada > saldo) { //En caso de que la cantidad apostada sea mayor al saldo disponible del jugador se lanzará una excepción
        throw runtime_error("Saldo insuficiente");
    }

    cout << "Apuesta 3 numeros distintos (0-50): " << endl;
    cout << "Primer numero: " << endl;
    cin >> numeroApostado1;
    cout << "Segundo numero: " << endl;
    cin >> numeroApostado2;
    cout << "Tercer numero: " << endl;
    cin >> numeroApostado3;

    numeroGanador = rand() % 51;  // Generador de número aleatorio entre el 0 y el 50
    cout << "El numero ganador es: " << numeroGanador << "\n";

    if (numeroApostado1 == numeroGanador) { //En caso de que el primer número apostado sea el correcto, se le añadirá al saldo la cantidad apostada multiplicada por 3
        saldo += cantidadApostada * 3;
        cout << "¡Felicidades, ganaste " << cantidadApostada * 3 << " euros!\n";
    } else if (numeroApostado2 == numeroGanador){ //En caso de que el segundo número apostado sea el correcto, se le añadirá al saldo la cantidad apostada multiplicada por 2
        saldo += cantidadApostada * 2;
        cout << "¡Felicidades, ganaste " << cantidadApostada * 2 << " euros!\n";

    } else if (numeroApostado3 == numeroGanador){ //En caso de que el tercer número apostado sea el correcto, se le añadirá al saldo la cantidad apostada dividida por 2
        saldo += cantidadApostada / 2;
        cout << "¡Felicidades, ganaste " << cantidadApostada / 2 << " euros!\n";
    } else { //En caso de no acertar ningún número se le restará al saldo del jugador la cantidad apostada
        saldo -= cantidadApostada; 
        cout << "Perdiste. Suerte para la proxima vez.\n";
    }
    cout << "Tu saldo actual es: " << saldo << endl;
    mostrarMenu(); //Tras terminar el juego se le vuelve a mostrar el menú al jugador para que decida qué quiere hacer
}

void jugarTragamonedas(int &saldo){ //Desarrollo de la función jugarTragamonedas, la cual ejecuta el segundo juego
    int apuesta; //Declaración de la variable necesaria en el segundo juego
    cout << "\n--- Tragamonedas ---\n";
    cout << "Saldo: " << saldo << " euros\n";
    cout << "Ingresa la cantidad a apostar: ";
    cin >> apuesta;

    if (apuesta > saldo) { //En caso de que la cantidad apostada sea mayor al saldo disponible del jugador se lanzará una excepción
        throw runtime_error("Saldo insuficiente");
    }
    int num1 = rand() % 10;  // Generador de número aleatorio entre el 0 y el 9 para los tres números
    int num2 = rand() % 10;
    int num3 = rand() % 10;

    cout << "Resultado: [" << num1 << "] [" << num2 << "] [" << num3 << "]\n";

    if (num1 == num2 && num2 == num3) { //En caso de que coincidan los tres números, se le añadirá al saldo del jugador la cantidad apostada multiplicada por 2
        saldo += apuesta * 2;
        cout << "Ganaste " << apuesta * 2 << " euros!" << endl;

    }else if (num1 == num2 || num2 == num3 || num1 == num3){ //En caso de que coincidan dos de los tres números, se le añadirá al saldo del jugador la cantidad apostada dividida por 2
        saldo += apuesta /2;
        cout << "Ganaste " << apuesta/2 << " euros!" << endl;
    }else { //En caso de no acertar se le restará al saldo del jugador la cantidad apostada
        saldo -= apuesta;
        cout << "No hubo suerte. Pierdes " << apuesta << " euros." << endl;
    }
    cout<<"Tu saldo restante es de: " << saldo << " euros" << endl;
    mostrarMenu(); //Tras terminar el juego se le vuelve a mostrar el menú al jugador para que decida qué quiere hacer
}

void parImpar(int &saldo) { //Desarrollo de la función parImpar, la cual ejecuta el tercer juego
    string eleccionJugador; //Declaración de las distintas variables necesarias en el tercer juego
    int numeroOrdenador, apuesta; 
    
    cout << "Bienvenido al juego de Pares o Nones" << endl;
    cout << "Saldo: " << saldo << "euros" << "\n";
    cout << "Ingresa la cantidad a apostar: ";
    cin >> apuesta;
    cout << "Elige P para Par o I para Impar:" << endl;
    cin >> eleccionJugador;

    if (apuesta > saldo) { //En caso de que la cantidad apostada sea mayor al saldo disponible del jugador se lanzará una excepción
        throw runtime_error("Saldo insuficiente");
    }

    numeroOrdenador = rand() % 101; //Generador de número aleatorio entre el 0 y el 100

    if (eleccionJugador == "P" || "p" && numeroOrdenador %2 == 0){ //En caso de que el jugador acierte que el número es par, se le añadirá a su saldo la cantidad apostada multiplicada por 2
        cout << "Has acertado, el numero es Par!!" << endl;
        cout << "El numero era: " << numeroOrdenador << endl;
        saldo = saldo + apuesta * 2;
        cout << "Tu saldo ahora es: " << saldo << endl;
    } 
    else if (eleccionJugador == "I" || "i" && numeroOrdenador %2 == 1){ //En caso de que el jugador acierte que el número es impar, se le añadirá a su saldo la cantidad apostada multiplicada por 2
        cout << "Has acertado, el numero es Impar!!" << endl;
        cout << "El numero era: " << numeroOrdenador << endl;
        saldo = saldo + apuesta * 2;
        cout << "Tu saldo ahora es: " << saldo << endl;
    }
    else{ //En caso de no acertar se le restará al saldo del jugador la cantidad apostada
        cout << "Has fallado, suerte la proxima vez." << endl;
        cout << "El numero era: " << numeroOrdenador << endl;
        saldo = saldo - apuesta;
        cout << "Tu saldo ahora es: " << saldo << endl;
    }
    mostrarMenu(); //Tras terminar el juego se le vuelve a mostrar el menú al jugador para que decida qué quiere hacer
}