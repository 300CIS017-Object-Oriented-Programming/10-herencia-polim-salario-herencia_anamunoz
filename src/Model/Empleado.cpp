#include "Empleado.h"

Empleado::Empleado(string nombre, float salarioBase) {
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

string Empleado::getNombre() const {
    return nombre;
}

float Empleado::getSalarioBase() const {
    return salarioBase;
}
