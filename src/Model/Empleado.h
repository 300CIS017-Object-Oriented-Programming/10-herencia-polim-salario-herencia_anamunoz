//
// Created by PC on 4/05/2025.
//

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <vector>
#include <cstdlib>

using std::cin;
using std::cout;
using std::vector;
using std::string;


class Empleado {
protected:
    string nombre;
    float salarioBase;
    string t_Empleado;

public:
    Empleado();
    virtual ~Empleado() = default;

    // Son metodos
    virtual float calcularSalario() = 0;
    double getSalarioBase() const;
    float getNombre();

    string getT_Empleado();

};



#endif //EMPLEADO_H
