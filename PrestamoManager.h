#pragma once
#include "PrestamoArchivo.h"
#include "SocioManager.h"
#include "LibroManager.h"

class PrestamoManager {
    private:
    PrestamoArchivo archivo;
    SocioArchivo SArchivo;
    LibroArchivo LArchivo;
    LibroManager LIbroManager_;
    Fecha fecha1, fecha2;
    public:
    void RegistrarPrestamo();
    void RegistrarDevolucion();
    void mostrarPrestamosActivos();
};

/*
Registrar préstamo
Registrar devolución
Listar préstamos activos
*/