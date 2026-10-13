#pragma once
#include "Socio.h"


class SocioArchivo{
    private:
    std::string _archivoSA;
    public:
    SocioArchivo();
    int getCantidadRegistro();
    bool guardar(Socio reg); // -> Guarda una aerolínea nueva al final.
    Socio leer(int nroRegistro); // -> Lee una aerolínea por posición.
};