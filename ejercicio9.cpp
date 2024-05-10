/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;
    cout << "Introduce el número de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Introduce el número de columnas de la primera matriz: ";
    cin >> columnas1;
    cout << "Introduce el número de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Introduce el número de columnas de la segunda matriz: ";
    cin >> columnas2;

    if(columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 0;
    }

    vector<vector<int>> matriz1(filas1, vector<int>(columnas1)), matriz2(filas2, vector<int>(columnas2)), producto(filas1, vector<int>(columnas2));
    int i = 0, j = 0, k = 0; // Iniciar los contadores en 0

    cout << "Introduce los elementos de la primera matriz:\n";
    while(i < filas1) {
        j = 0; // Reiniciar el contador para las columnas
        while(j < columnas1) {
            cin >> matriz1[i][j];
            j++; // Incrementar el contador de columnas
        }
        i++; // Incrementar el contador de filas
    }

    i = 0; // Reiniciar el contador para la segunda matriz
    cout << "Introduce los elementos de la segunda matriz:\n";
    while(i < filas2) {
        j = 0; // Reiniciar el contador para las columnas
        while(j < columnas2) {
            cin >> matriz2[i][j];
            j++; // Incrementar el contador de columnas
        }
        i++; // Incrementar el contador de filas
    }

    i = 0; // Reiniciar el contador para el producto
    while(i < filas1) {
        j = 0; // Reiniciar el contador para las columnas
        while(j < columnas2) {
            producto[i][j] = 0;
            k = 0; // Reiniciar el contador para la suma
            while(k < columnas1) {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
                k++; // Incrementar el contador de la suma
            }
            j++; // Incrementar el contador de columnas
        }
        i++; // Incrementar el contador de filas
    }

    cout << "El producto de las matrices es:\n";
    i = 0; // Reiniciar el contador para imprimir el producto
    while(i < filas1) {
        j = 0; // Reiniciar el contador para las columnas
        while(j < columnas2) {
            cout << producto[i][j] << " ";
            j++; // Incrementar el contador de columnas
        }
        cout << endl;
        i++; // Incrementar el contador de filas
    }

    return 0;
}
