#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using std::string;

class Empleado {
protected:
    string nombre;
    float salarioBase;
public:
    Empleado(string nombre, float salarioBase);
    virtual ~Empleado() = default;

    virtual float calcularSalario() = 0;
    virtual string getTipo() = 0;

    string getNombre() const;
    float getSalarioBase() const;
};

#endif

