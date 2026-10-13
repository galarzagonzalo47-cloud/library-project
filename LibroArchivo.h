#pragma once
#include <iostream>
#include "Libro.h"
/*
Cargar libro
Listar libros
Listar libros disponibles
*/
class LibroArchivo{
    private:
    std::string _archivo;
    public:
    LibroArchivo();
    int getCantidadRegistros();  // -> Cuenta cuántos registros hay.
    bool guardar(Libro reg); // -> Guarda una aerolínea nueva al final.
    Libro leer(int nroRegistro); // -> Lee una aerolínea por posición.
    bool modificar(Libro reg, int nroRegistro);
};
