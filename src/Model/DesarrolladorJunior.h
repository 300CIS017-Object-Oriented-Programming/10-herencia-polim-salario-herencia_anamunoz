#ifndef DESARROLLADOR_JUNIOR_H
#define DESARROLLADOR_JUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(string nombre, float salarioBase);
    float calcularSalario() override;
    string getTipo() override;
};

#endif
