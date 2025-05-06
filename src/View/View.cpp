#include "View.h"
#include "../Model/SistemaNomina.h"
#include <iostream>
using std::cin;
using std::cout;

void View::menu() {
    SistemaNomina sistema;
    int opcion;
    do {
        cout << "\n MENU NOMINA \n";
        cout << "1. Mostrar Salarios de Empleados\n";
        cout << "2. Calcular Total de la Nomina\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                sistema.mostrarSalarios();
            break;
            case 2:
                cout << "Total a pagar: " << sistema.calcularTotalNomina() << "\n";
            break;
            case 3:
                cout << "Saliendo del sistema\n";
            break;
            default:
                cout << "Opcion invalida.\n";
        }
    } while (opcion != 3);
}