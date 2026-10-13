#pragma once
#include <iostream>
#include "Fecha.h"

using namespace std;


class Prestamo{
    private:
    int _IdPrestamo;
    int _IdSocio;
    int _IdLibro;
    Fecha _FechaDePrestamo;
    Fecha _FechaDeDevolucion;
    bool _Devuelto;
    bool _Estado;

    public:
    Prestamo();

    int getIdPrestamo();
    int getIdSocio();
    int getIdLibro();
    Fecha getFechaDePrestamo();
    Fecha getFechaDeDevolcuion();
    bool getDevuelto();
    bool getEstado();

    void setIdPrestamo(int prestamo);
    void setIdSocio(int socio);
    void setIdLibro(int libro);
    void setFechaDePrestamo(Fecha fechaprestamo);
    void setFechaDeDevolcuion(Fecha fechadevolucion);
    void setDevuelto(bool devuelto);
    void setEstado(bool estado);


};



/*
Número de préstamo
Número de socio
Número de libro
Fecha de préstamo
Fecha de devolución
Devuelto
Estado

Registrar préstamo
Registrar devolución
Listar préstamos activos
Listar libros disponibles
*/