#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    cout << "Ingrese un número: ";
    cin >> num;

    if (num == 0) {

        cout << "El número es 0.";

    } else if (num % 2 == 0) {

        cout << "El número es par.";

    } else {

        cout << "El número es impar.";

    }
    
    return 0;
}