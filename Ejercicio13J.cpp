#include <iostream>
using namespace std;

// Función que recibe una matriz, una fila y el número de columnas de la matriz.
// Retorna el menor elemento de la fila.
int menor_elemento(int matriz[][100], int fila, int columnas) {
    int menor = matriz[fila][0];
    for (int i = 1; i < columnas; i++) {
        if (matriz[fila][i] < menor) {
            menor = matriz[fila][i];
        }
    }
    return menor;
}

// Función que recibe una matriz, el número de filas y el número de columnas de la matriz.
// Llena la matriz con valores ingresados por el usuario.
void llenar_matriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el valor para la posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

int main() {
    int matriz[100][100];
    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    llenar_matriz(matriz, filas, columnas);

    int fila;
    cout << "Ingrese el numero de fila para buscar el menor elemento: ";
    cin >> fila;

    int resultado = menor_elemento(matriz, fila, columnas);
    cout << "El menor elemento de la fila " << fila << " es " << resultado << endl;

    return 0;
}

