#include <iostream>

using namespace std;

float calcularAreaCirculo(float radio) {
    return 3.14159 * radio * radio;
}

long long calcularFactorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int opcion;

    cout << "--- mENU DE FUNCIONES ---" << endl;
    cout << "1. calcular area de un circulo" << endl;
    cout << "2. calcular factorial" << endl;
    cout << "3. Verificar si un numero es par o impar" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        float r;
        cout << "Ingrese el radio: ";
        cin >> r;
        cout << "El area es  : " << calcularAreaCirculo(r) << endl;
    } else if (opcion == 2) {
        int n;
        cout << "Ingrese un numero entero : ";
        cin >> n;
        if (n < 0) {
            cout << "El factorial no esta definido para numeros negativos." << endl;
        } else {
            cout << "El factorial es: " << calcularFactorial(n) << endl;
        }
    } else if (opcion == 3) {
        int n;
        cout << "Ingrese un numero: ";
        cin >> n;
        if (esPar(n)) {
            cout << "El numero es Par." << endl;
        } else {
            cout << "El numero es Impar." << endl;
        }
    } else {
        cout << "opción no valida." << endl;
    }

    return 0;
}
