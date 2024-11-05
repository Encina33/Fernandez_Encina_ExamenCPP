/*                EJERCICIO 3: Cálculo de Promedio de Calificaciones
// Un estudiante ha completado un curso de programación avanzada en C++.
// Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica
// con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las
// calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios.
// El programa deberá calcular y mostrar el promedio de las calificaciones.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){

    int calificacion1, calificacion2, calificacion3, calificacion4, calificacion5, calificacion6, calificacion7, calificacion8; // Declarar las variables para las calificaciones
    float promedio; // Declarar la variable para el promedio

    // Solicitar al usuario las calificaciones de los 8 ejercicios
    cout << "Ingrese la calificacion del primer ejercicio: " << endl;
    cin >> calificacion1;
    cout << "Ingrese la calificacion del segundo ejercicio: " << endl;
    cin >> calificacion2;
    cout << "Ingrese la calificacion del tercer ejercicio: " << endl;
    cin >> calificacion3;
    cout << "Ingrese la calificacion del cuarto ejercicio: " << endl;
    cin >> calificacion4;
    cout << "Ingrese la calificacion del quinto ejercicio: " << endl;
    cin >> calificacion5;
    cout << "Ingrese la calificacion del sexto ejercicio: " << endl;
    cin >> calificacion6;
    cout << "Ingrese la calificacion del septimo ejercicio: " << endl;
    cin >> calificacion7;
    cout << "Ingrese la calificacion del octavo ejercicio: " << endl;
    cin >> calificacion8;

    // Calcular el promedio de las calificaciones y mostrarlo en pantalla
    // El promedio se calcula sumando todas las calificaciones y dividiendo el resultado entre 8
    // Se utiliza 8.0 en lugar de 8 para que el resultado sea un número decimal
    promedio = (calificacion1 + calificacion2 + calificacion3 + calificacion4 + calificacion5 + calificacion6 + calificacion7 + calificacion8) / 8.0;
    cout << "El promedio de las calificaciones es: " << promedio << endl;
    return 0;
}