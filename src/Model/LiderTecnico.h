#ifndef LIDER_TECNICO_H
#define LIDER_TECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(string nombre, float salarioBase);
    float calcularSalario() override;
    string getTipo() override;
};

#endif
