#pragma once
#include <iostream>
#include "Libro.h"
#include "LibroArchivo.h"


using namespace std;

class LibroManager{
    private:
    LibroArchivo archivo;
    public:
    void cargar();
    void listar();
    void listarDisponibles();
};