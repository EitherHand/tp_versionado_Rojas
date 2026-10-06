#include <iostream>
#include <windows.h>

using namespace std;

void mostrarTabla(int numero) {

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        cout << numero << " x " << i << " = " << resultado << endl;
    }
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    char opcion;

    cout << "-----Identificador de números pares e impares-----" << endl;

    cout << "Ingrese un número: ";
    cin >> num;

    if (num == 0) {
        cout << "El número es 0.";
    } else if (num % 2 == 0) {
        cout << "El número es par.";
    } else {
        cout << "El número es impar.";
    }

    cout << endl;
    cout << "¿Desea ver su tabla de multiplicar? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') {
        mostrarTabla(num);
    } else {
        cout << "No se mostrará la tabla de multiplicar.";
    }
    
    return 0;
}