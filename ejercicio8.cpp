/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int longitud;
    cout << "Introduce la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud), vector2(longitud);
    int producto_punto = 0;
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

    i = 0; // Reiniciar el contador para el producto punto
    while(i < longitud) {
        producto_punto += vector1[i] * vector2[i];
        i++; // Incrementar el contador
    }

    cout << "El producto punto de los vectores es: " << producto_punto << endl;

    return 0;
}
