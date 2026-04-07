#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
    }

    if (num1 > num2) {
        cout << "El primer numero (" << num1 << ") es mayor que el segundo (" << num2 << ")." << endl;
    } else if (num2 > num1) {
        cout << "El segundo numero (" << num2 << ") es mayor que el primero (" << num1 << ")." << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }

    return 0;
}
