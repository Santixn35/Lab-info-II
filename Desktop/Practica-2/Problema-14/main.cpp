#include <iostream>
using namespace std;

const int N = 5;

// Función para llenar la matriz con los números del 1 al 25
void llenarM(int matriz[][N]) {
    int valor = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = valor++;
        }
    }
}

// Función para imprimir la matriz
void imprimirM(int matriz[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";  // Usar \t para mejor formato
        }
        cout << endl;
    }
}

// Función para rotar la matriz 90 grados
void rotar90(int matriz[][N], int resultado[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultado[j][N - i - 1] = matriz[i][j];
        }
    }
}

// Función para rotar la matriz 180 grados
void rotar180(int matriz[][N], int resultado[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultado[N - i - 1][N - j - 1] = matriz[i][j];
        }
    }
}

// Función para rotar la matriz 270 grados
void rotar270(int matriz[][N], int resultado[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultado[N - j - 1][i] = matriz[i][j];
        }
    }
}

int main() {
    int matriz[N][N];
    int rotada90[N][N], rotada180[N][N], rotada270[N][N];

    // Llenar la matriz con los números del 1 al 25
    llenarM(matriz);

    // Imprimir la matriz original
    cout << "Matriz original:" << endl;
    imprimirM(matriz);

    // Rotar y mostrar la matriz 90 grados
    rotar90(matriz, rotada90);
    cout << "\nMatriz rotada 90 grados:" << endl;
    imprimirM(rotada90);

    // Rotar y mostrar la matriz 180 grados
    rotar180(matriz, rotada180);
    cout << "\nMatriz rotada 180 grados:" << endl;
    imprimirM(rotada180);

    // Rotar y mostrar la matriz 270 grados
    rotar270(matriz, rotada270);
    cout << "\nMatriz rotada 270 grados:" << endl;
    imprimirM(rotada270);

    return 0;
}
