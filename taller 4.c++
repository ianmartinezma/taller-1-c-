#include <iostream>

using namespace std;

int main() {
    int n;
    int suma = 0;
    int divisores = 0;

    cout << "Ingrese un numero N: ";
    cin >> n;

    cout << endl << "--- TABLA DE MULTIPLICAR DE " << n << " ---" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    cout << endl << "Suma acumulada desde 1 hasta " << n << ": " << suma << endl;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        cout << "El numero " << n << " es primo." << endl;
    } else {
        cout << "El numero " << n << " no es primo." << endl;
    }

    return 0;
}
