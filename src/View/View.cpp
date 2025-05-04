//
// Created by PC on 4/05/2025.
//

#include "View.h"

#include "../Model/SistemaNomina.h"

int View::menu() {

    int opcion;
    cout << "1. Agregar Empleado\n";
    cout << "2. Mostrar valor total a pagar a todos los empleados\n";
    cout << "3. Salir\n\n";
    cout << "Ingrese la opcion que desea realizar\n";
    cin >> opcion;
    return opcion;
}


void View::principal() {
    int opcion;
    cout << "========== Bienvenido =========\n";
    do{
        opcion = menu();
        switch (opcion) {
            case 1:
                agregarFigura();
            break;
            case 2:
                cout << "La suma es: " << SistemaNominaObj->calcularSumaAreas() << "\n";
            break;
            default:
                break;
        }
    } while (opcion != 3);
}