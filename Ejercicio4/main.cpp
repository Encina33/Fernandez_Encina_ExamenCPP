/*                EJERCICIO 4:Promoción de "3 por 2" en Tienda
// En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres
// artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que
// solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total
// que el cliente debe pagar bajo esta promoción.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    int precio1, precio2, precio3, total; // Declarar las variables para los precios de los 3 articulos y el total a pagar

    // Solicitar al usuario los precios de los 3 articulos
    cout << "Ingrese el precio del primer articulo: " << endl; // Solicitar al usuario el precio del primer articulo
    cin >> precio1; // Guardar el precio del primer articulo ingresado por el usuario
    cout << "Ingrese el precio del segundo articulo: " << endl; // Solicitar al usuario el precio del segundo articulo
    cin >> precio2; // Guardar el precio del segundo articulo ingresado por el usuario
    cout << "Ingrese el precio del tercer articulo: " << endl; // Solicitar al usuario el precio del tercer articulo
    cin >> precio3; // Guardar el precio del tercer articulo ingresado por el usuario

    // Calcular el total a pagar bajo la promocion "3 por 2"
    // El total se calcula sumando los precios de los 3 articulos y restando el precio del articulo mas barato
    // Se utiliza la funcion min para obtener el precio del articulo mas barato
    // La funcion min recibe 2 argumentos y devuelve el menor de los dos
    // Se utiliza la funcion min 3 veces para obtener el precio mas barato de los 3 articulos
    // Se resta el precio mas barato del total de los 3 precios para obtener el total a pagar
    total = precio1 + precio2 + precio3 - min(precio1, min(precio2, precio3));

    cout << "El total a pagar bajo la promocion '3 por 2' es: " << total << endl; // Mostrar el total a pagar en pantalla
    return 0;

}