cmake_minimum_required(VERSION 3.30)
project(10_herencia_polim_salario_herencia_anamunoz)

set(CMAKE_CXX_STANDARD 20)

add_executable(10_herencia_polim_salario_herencia_anamunoz main.cpp
        src/Model/SistemaNomina.cpp
        src/Model/SistemaNomina.h
        src/Model/Empleado.cpp
        src/Model/Empleado.h
        src/Model/DesarrolladorJunior.cpp
        src/Model/DesarrolladorJunior.h
        src/Model/DesarolladorSenior.cpp
        src/Model/DesarolladorSenior.h
        src/Model/LiderTecnico.cpp
        src/Model/LiderTecnico.h
        src/Model/Tester.cpp
        src/Model/Tester.h
        src/View/View.cpp
        src/View/View.h)
