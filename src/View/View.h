//
// Created by PC on 4/05/2025.
//

#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <vector>
#include <SitemaNomina.h>

using std::cin;
using std::cout;
using std::vector;


class View {
private:
    SitemaNomina * SitemaNominaObj;
public:
    View();
    ~View();
    int menu();
    void principal();
    void dibujarFigura();
    void agregarFigura();


};





#endif //VIEW_H
