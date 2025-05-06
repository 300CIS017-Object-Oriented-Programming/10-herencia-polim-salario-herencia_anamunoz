#ifndef DESARROLLADOR_SENIOR_H
#define DESARROLLADOR_SENIOR_H

#include "Empleado.h"
#include <string>
using std::string;

class DesarrolladorSenior : public Empleado {
public:
    DesarrolladorSenior(string nombre, float salarioBase);
    float calcularSalario() override;
    string getTipo() override;
};

#endif


