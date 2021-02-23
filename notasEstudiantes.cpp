#include <iostream>

using namespace std;
/*
int main() {
    //variables de salida
    int contadorUnaNotaSuspensa = 0;
    float notaPromedio = 0;
    //variables auxiliares
    int i, j, op = 0, reprob=0;
    //datos de entrada
    int num_notas = 3;
    int n;
    float nota;
    //ingreso de estudiantes
    cout << "\nIngrese la cantidad de estudiantes: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "\nNotas del estudiante " << i + 1;
        for (j = 0; j < num_notas; j++) {
            cout << "\nIngrese la nota " << j + 1 << ":";
            cin >> nota;
            //se controla que el usuario ingrese valores validos
            while ((nota < 0) || (nota > 100)) {
                cout << "\nLa nota debe estar entre 0 y 100. Ingrese la nota nuevamente: ";
                cin >> nota;
            }
            //si en alguna nota el estudiante tiene menos de 70, aumenta el contador de reprobado
            if(nota<70)
            {
                reprob++;
            }
        }
        //calculo el promedio
        notaPromedio /= float(num_notas);
        //si al menos una nota es menor a 70 aumenta el numero de suspendidos
        if (reprob>0) {
            contadorUnaNotaSuspensa++;
        }
        reprob=0;
    }
    //menu para visualizar los resultados
    cout << "\nIngrese la opcion deseada: \n"
            "1. Numero de alumnos suspendidos\n"
            "2. Numero de alumnos aprobados\n"
            "3. Salir del programa\n";
    cin >> op;
    // se ingresa a un bucle que permite que el usuario interactue con el programa hasta que desee salir
    while (op != 3) {
        switch (op) {
            case 1:
                cout << "\nLa cantidad de alumnos suspendidos es: " << contadorUnaNotaSuspensa;
                cout << "\nSeleccione que desea visualizar ahora: \n"
                        "1. Numero de alumnos suspendidos\n"
                        "2. Numero de alumnos aprobados\n"
                        "3. Salir del programa\n";
                cin >> op;
                break;
            case 2:
                cout << "\nLa cantidad de alumnos aprobados es: " << n - contadorUnaNotaSuspensa;
                cout << "\nSeleccione que desea visualizar ahora: \n"
                        "1. Numero de alumnos suspendidos\n"
                        "2. Numero de alumnos aprobados\n"
                        "3. Salir del programa\n";
                cin >> op;
                break;
            default:
                cout << "\nOpcion no valida, ingrese un numero valido: \n"
                        "1. Numero de alumnos suspendidos\n"
                        "2. Numero de alumnos aprobados\n"
                        "3. Salir del programa\n";
                cin >> op;
                break;
        }
    }
    cout << "\nGracias por usar el programa!";
}
 */