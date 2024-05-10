/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores.
El resultado debe mostrarse en un tercer vector.*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int longitud;
    cout << "Introduce la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud), vector2(longitud), suma(longitud);
    int i = 0; // Iniciar el contador en 0

    cout << "Introduce los elementos del primer vector:\n";
    while(i < longitud) {
        cin >> vector1[i];
        i++; // Incrementar el contador
    }

    i = 0; // Reiniciar el contador para el segundo vector
    cout << "Introduce los elementos del segundo vector:\n";
    while(i < longitud) {
        cin >> vector2[i];
        i++; // Incrementar el contador
    }

    i = 0; // Reiniciar el contador para la suma
    while(i < longitud) {
        suma[i] = vector1[i] + vector2[i];
        i++; // Incrementar el contador
    }

    cout << "La suma de los vectores es:\n";
    i = 0; // Reiniciar el contador para imprimir la suma
    while(i < longitud) {
        cout << suma[i] << " ";
        i++; // Incrementar el contador
    }

    return 0;
}
