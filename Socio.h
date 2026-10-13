#pragma once
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Socio{
    private:
    int _IdSocio;
    int _Dni;
    char _NomSocio[50];
    char _ApeSocio[50];
    char _TelSocio[20];
    bool _Estado;

    public:
    Socio();

    int getIdSocio();
    int getDni();
    std::string getNomSocio();
    std::string getApeSocio();
    std::string getTelSocio();
    bool getEstado();
    

    void setIdSocio(int idSocio);
    void setDni(int dni);
    void setNomSocio(std::string NomSocio);
    void setApeSocio(std::string ApeSocio);
    void setTelSocio(std::string TelSocio);
    void setEstado(bool Estado);

};



