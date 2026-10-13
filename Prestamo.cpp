#include "Prestamo.h"


Prestamo::Prestamo(){
    _IdPrestamo = 0;
    _IdSocio = 0;
    _IdLibro = 0;
    _Devuelto = false;
    _Estado = false;
}

int Prestamo::getIdPrestamo(){
    return _IdPrestamo;
}
int Prestamo::getIdSocio(){
    return _IdSocio;
}
int Prestamo::getIdLibro(){
    return _IdLibro;
}
Fecha Prestamo::getFechaDePrestamo(){
    return _FechaDePrestamo;
}
Fecha Prestamo::getFechaDeDevolcuion(){
    return _FechaDeDevolucion;
}
bool Prestamo::getDevuelto(){
    return _Devuelto;
}
bool Prestamo::getEstado(){
    return _Estado;
}

void Prestamo::setIdPrestamo(int prestamo){
    _IdPrestamo=prestamo;
}
void Prestamo::setIdSocio(int socio){
    _IdSocio=socio;
}
void Prestamo::setIdLibro(int libro){
    _IdLibro=libro;
}
void Prestamo::setFechaDeDevolcuion(Fecha fechadevolucion){
    _FechaDeDevolucion = fechadevolucion;
}
void Prestamo::setFechaDePrestamo(Fecha fechaprestamo){
    _FechaDePrestamo = fechaprestamo;
}
void Prestamo::setDevuelto(bool devuelto){
    _Devuelto=devuelto;
}
void Prestamo::setEstado(bool estado){
    _Estado=estado;
}
