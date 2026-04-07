#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion;

    cout << "--- CONCEPTOS FUNDAMENTALES ---" << endl;
    cout << "1. Lenguaje Compilado: Es aquel cuyo codigo fuente se traduce por completo a codigo maquina "
         << "antes de su ejecucion, generando un archivo ejecutable independiente." << endl;
    cout << "2. Lenguaje Interpretado: Es aquel donde un programa (interprete) lee y ejecuta el codigo "
         << "instruccion por instruccion en tiempo de ejecucion, sin generar un ejecutable previo." << endl;
    cout << "3. C++ pertenece al tipo: Lenguaje Compilado." << endl << endl;

    cout << "--- SELECCION DE PARADIGMA ---" << endl;
    cout << "Seleccione un paradigma para ver su explicacion:" << endl;
    cout << "1. Estructurado" << endl;
    cout << "2. Orientado a Objetos" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    cout << endl;

    if (opcion == 1) {
        cout << "Paradigma Estructurado: Se basa en la division del programa en funciones y procedimientos. "
             << "Utiliza estructuras de control (secuencia, seleccion e iteracion) para organizar el flujo." << endl;
    } else if (opcion == 2) {
        cout << "Paradigma Orientado a Objetos: Se basa en la creacion de 'objetos' que agrupan datos (atributos) "
             << "y comportamientos (metodos). Utiliza conceptos como clases, herencia y polimorfismo." << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}
