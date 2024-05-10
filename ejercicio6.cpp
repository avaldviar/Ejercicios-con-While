// Hacer un programa que sume los números pares comprendidos entre 100 y 200.
#include <iostream>
using namespace std;

void sumarPares()
{
    int suma = 0;
    int i = 100; // Iniciar en 100, que es el inicio del rango

    while(i <= 200)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
        i++; // Incrementar i en cada iteración
    }

    cout << "La suma de los numeros pares comprendidos entre 100 y 200 es " << suma << endl;
}

int main()
{
    sumarPares();
    return 0;
}
