// Escriba el programa para calcular la suma de los cuadrados de los números entre 1 y 100.
#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int i = 1; // Iniciar en 1 ya que queremos sumar desde 1
    while (i <= 100)
    {
        suma += i * i;
        i++;
    }

    cout << "La suma de los cuadrados de todos los numeros entre 1 y 100 es " << suma << endl;
    return 0;
}
