/*              EJERCICIO 1: Identificación de Número Positivo, Negativo o Cero
// Escribe un programa en C++ que solicite al usuario ingresar un número entero.
// El programa deberá analizar el número ingresado e imprimir en pantalla si el
// número es "positivo", "negativo" o "cero".
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero: " << endl; // Solicitar al usuario un numero entero
    cin >> numero; // Guardar el numero ingresado por el usuario
    if(numero > 0 ) {
        cout << "El numero es positivo" << endl; // Si el numero es mayor a 0, imprimir "El numero es positivo"
    }else if(numero < 0) {
        cout << "El numero es negativo" << endl; // Si el numero es menor a 0, imprimir "El numero es negativo""
    }else{
        cout << "El numero es cero" << endl; // Si el numero es igual a 0, imprimir "El numero es cero"
    }
    return 0;0
}