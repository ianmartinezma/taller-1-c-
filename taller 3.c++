#include <iostream>

using namespace std;

int main() {
    float nota;

    cout << "Ingrese la nota del estudiante (0.0 a 5.0): ";
    cin >> nota;

    if (nota >= 0 && nota <= 5.0) {
        if (nota >= 0 && nota <= 2.9) {
            cout << "Resultado: Reprueba" << endl;
        } else if (nota >= 3.0 && nota <= 4.5) {
            cout << "Resultado: Aprueba" << endl;
        } else if (nota >= 4.6 && nota <= 5.0) {
            cout << "Resultado: Excelente" << endl;
        }
    } else {
        cout << "Error: La nota ingresada esta fuera del rango permitido (0 a 5)." << endl;
    }

    return 0;
}
