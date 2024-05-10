/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz transpuesta como salida.*/
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Introduce el número de filas de la matriz: ";
    cin >> filas;
    cout << "Introduce el número de columnas de la matriz: ";
    cin >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas)), transpuesta(columnas, vector<int>(filas));
    int i = 0, j = 0; // Iniciar los contadores en 0

    cout << "Introduce los elementos de la matriz:\n";
    while(i < filas) {
        j = 0; // Reiniciar el contador para las columnas
        while(j < columnas) {
            cin >> matriz[i][j];
            j++; // Incrementar el contador de columnas
        }
        i++; // Incrementar el contador de filas
    }

    i = 0; // Reiniciar el contador para la transposición
    while(i < filas) {
        j = 0; // Reiniciar el contador para las columnas
        while(j < columnas) {
            transpuesta[j][i] = matriz[i][j];
            j++; // Incrementar el contador de columnas
        }
        i++; // Incrementar el contador de filas
    }

    cout << "La transposición de la matriz es:\n";
    i = 0; // Reiniciar el contador para imprimir la transposición
    while(i < columnas) {
        j = 0; // Reiniciar el contador para las filas
        while(j < filas) {
            cout << transpuesta[i][j] << " ";
            j++; // Incrementar el contador de filas
        }
        cout << endl;
        i++; // Incrementar el contador de columnas
    }

    return 0;
}
