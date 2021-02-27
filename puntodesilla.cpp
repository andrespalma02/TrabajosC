#include <iostream>

using namespace std;

int main() {
    //Se definen los valores de la dimensiones,
    //no necesariamente debe ser cuadrada
    //N=Filas, M=Columnas
    const size_t N = 4, M = 4;
    int matriz[N][M] = {{10, 20, 3,  15},
                        {40, 45, 10, 20},
                        {7,  8,  1,  9},
                        {3,  4,  2,  5}};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    //El valor minimo de cada fila
    int minFila;
    //La columna en la que se encuentra el valor minimo
    int auxCol;
    //El valor del punto de silla
    int valorSilla;
    //Un auxiliar para contabilizar que la variable sea la mayor de su columna
    int aux = 0;
    //Variable para comprobar que existen puntos de silla
    int flag = 0;
    //Posicion Definitiva del punto de silla
    int filaSilla = 0, colSilla = 0;
    for (int i = 0; i < N; i++) {
        //cada iteracion se reinician los valores
        minFila = matriz[i][0];
        auxCol = 0;
        aux = 0;
        //Se itera por la fila encontrando el valor menor y su posicion
        for (int j = 0; j < M; j++) {
            if ((matriz[i][j] < minFila)) {
                minFila = matriz[i][j];
                auxCol = j;
            }
        }
        //Se itera por la columna del valor menor verificando que sea el mayor
        //de su columna
        for (int k = 0; k < N; k++) {
            if ((minFila > matriz[k][auxCol])&&( k!=i)) {
                aux++;
            }
        }
        //si el auxiliar es igual al numero de filas, es un punto de silla
        if (aux == N-1) {
            filaSilla = i;
            colSilla = auxCol;
            valorSilla = matriz[filaSilla][colSilla];
            flag = 1;
        }


    }

    //si la bandera es igual a uno se muestra el punto de silla
    //caso contrario se indica que no hay punto de silla
    if (flag == 1) {
        cout << "El numero " << valorSilla << " es un punto de silla"
             << " en la posicion (" << filaSilla+1
             << ", " << colSilla+1 << ")\n";
    } else {
        cout << "No existen puntos de silla en la matriz ingresada\n";
    }
}



