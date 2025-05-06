#include "SistemaNomina.h"
#include "DesarrolladorJunior.h"
#include "DesarolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"
#include <iostream>
using std::cout;

SistemaNomina::SistemaNomina() {
    inicializarDatos();
}

SistemaNomina::~SistemaNomina() {
    for (auto emp : empleados)
        delete emp;
}

void SistemaNomina::inicializarDatos() {
    empleados.push_back(new DesarrolladorJunior("Ana", 3000));
    empleados.push_back(new DesarrolladorJunior("Luis", 3200));
    empleados.push_back(new DesarrolladorSenior("Carlos", 4000));
    empleados.push_back(new DesarrolladorSenior("Sofia", 4200));
    empleados.push_back(new LiderTecnico("Laura", 5000));
    empleados.push_back(new LiderTecnico("Miguel", 5200));
    empleados.push_back(new Tester("Pedro", 2800));
    empleados.push_back(new Tester("Lucia", 2900));
}

void SistemaNomina::mostrarSalarios() {
    for (auto emp : empleados) {
        cout << emp->getTipo() << " - " << emp->getNombre()
             << " - Salario: " << emp->calcularSalario() << "\n";
    }
}

float SistemaNomina::calcularTotalNomina() {
    float total = 0;
    for (auto emp : empleados)
        total += emp->calcularSalario();
    return total;
}
