#pragma once
#include "Prestamo.h"

class PrestamoArchivo{
    private:
    std::string _archivoP;
    public:
    PrestamoArchivo();
    int getCantidad();
    bool guardar(Prestamo reg);
    Prestamo leer(int NroRegistro);
    bool modificar(Prestamo reg, int nroRegistro);
};