#include<iostream>
using namespace std;

#define maxf 3
#define maxc 5

int main() {
    float a[maxf][maxc];

    cout << "Asigna los numeros para rellenar la matriz 3x5:" << endl;

    for (int f = 0; f < maxf; f++) {
        for (int c = 0; c < maxc; c++) {
            cin >> a[f][c];
        }
    }

    cout << "La matriz resultante de 3x5 es:" << endl;

    for (int f = 0; f < maxf; f++) {
        for (int c = 0; c < maxc; c++) {
            cout << a[f][c] << "    ";
        }
        cout << endl;
    }

    cin.get(); // Espera a que el usuario presione Enter antes de cerrar la consola

    return 0;
}