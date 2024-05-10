/*Para un grupo de clase de 8 estudiantes, realice un programa
que permita calcular y dar como salida lo siguiente:
- Cantidad de alumnos aprobados
- Cantidad de alumnos reprobados
- Promedio general del grupo*/

#include<iostream>
using namespace std;

int main() {
    int num_estudiantes = 8;
    double nota, suma = 0.0, promedio;
    int aprobados = 0, reprobados = 0;
    int i = 1; // Iniciar el contador en 1

    while(i <= num_estudiantes) {
        cout << "Introduce la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
        if(nota >= 6.0) {
            aprobados++;
        } else {
            reprobados++;
        }
        i++; // Incrementar el contador
    }

    promedio = suma / num_estudiantes;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
