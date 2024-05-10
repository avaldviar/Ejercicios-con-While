/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está compuesta
por 10 estudiantes y que se tiene la nota de cada uno de ellos.*/

#include<iostream>
using namespace std;

int main() {
    int numestu = 10;
    double nota, suma = 0.0, promedio;
    int i = 1; // Iniciar el contador en 1

    while(i <= numestu) {
        cout << "Introduce la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
        i++; // Incrementar el contador
    } 

    promedio = suma / numestu;
    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}
