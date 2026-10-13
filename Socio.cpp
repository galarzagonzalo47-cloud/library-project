#include "Socio.h"

Socio::Socio(){
    _IdSocio=0;
    _Dni=0;
    strcpy(_NomSocio,"");
    strcpy(_ApeSocio,"");
    strcpy(_TelSocio,"");
    _Estado=false;
};

int Socio::getIdSocio(){
    return _IdSocio;
}
int Socio::getDni(){
    return _Dni;
}
std::string Socio::getNomSocio(){
    return _NomSocio;
}
std::string Socio::getApeSocio(){
    return _ApeSocio;
}
std::string Socio::getTelSocio(){
    return _TelSocio;
}
bool Socio::getEstado(){
    return _Estado;
}

void Socio::setIdSocio(int idSocio){
    _IdSocio=idSocio;
}
void Socio::setDni(int dni){
    _Dni=dni;
}
void Socio::setNomSocio(std::string NomSocio){
    strcpy(_NomSocio,NomSocio.c_str());
}
void Socio::setApeSocio(std::string ApeSocio){
    strcpy(_ApeSocio, ApeSocio.c_str());
}
void Socio::setTelSocio(std::string TelSocio){
    strcpy(_TelSocio, TelSocio.c_str());
}
void Socio::setEstado(bool estado){
    _Estado=estado;
}
