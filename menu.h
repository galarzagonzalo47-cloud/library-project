#pragma once
#include <iostream>
#include "LibroManager.h"
#include "SocioManager.h"
#include "PrestamoManager.h"

using namespace std;

class Menu{
    private:
    SocioManager _socios;
    LibroManager _libros;
    PrestamoManager _prestamo;
    public:
    void mostrarMenu();
    void mostrarLibro();
    void mostrarSocios();
    void mostrarPrestamos();
};