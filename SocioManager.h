#pragma once
#include "SocioArchivo.h"

class SocioManager{
    private:
    SocioArchivo archivo;
    public:
    void cargar();
    void listar();
};