#ifndef SISTEMA_NOMINA_H
#define SISTEMA_NOMINA_H

#include <vector>
#include "Empleado.h"

class SistemaNomina {
private:
    std::vector<Empleado*> empleados;
public:
    SistemaNomina();
    ~SistemaNomina();

    void inicializarDatos();
    void mostrarSalarios();
    float calcularTotalNomina();
};

#endif
