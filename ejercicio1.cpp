//Dado un número natural n se desea calcular la suma de los números naturales desde 1 hasta n.

#include <iostream>
using namespace std;

void sumar(int n) {
    int suma = 0;
    if (n < 0) { cout << "\nERROR: el numero ingresado no es un numero natural" << endl; }
    else {
        int i = 1;
        while (i <= n) { 
            suma += i; 
            i++;
        }
    }

    cout << "\nla suma de los numeros naturales de 1 hasta " << n << " es " << suma << endl;
}

int main() {
    int num;
    cout << "Hasta que numero quiere sumar? ";
    cin >> num;
    sumar(num);
    return 0;
}
