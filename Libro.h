#pragma once
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Libro{
    private:
    int _idLibro;
    char _NomLibro[50];
    char _Autor[50];
    int _AnioLibro;
    bool _Disponible;
    bool _Estado;

    public:
    Libro();

    int getIdLibro();
    std::string getNomLibro();
    std::string getAutor();
    int getAnioLibro();
    bool getDisponible();
    bool getEstado();

    void setIdLibro(int Idlibro);
    void setNomLibro(std::string NomLibro);
    void setAutor(std::string Autor);
    void setAnioLibro(int AnioLibro);
    void setDisponible(bool Disponible); 
    void setEstado(bool Estado);
};