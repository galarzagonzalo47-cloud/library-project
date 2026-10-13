#include "Libro.h"


Libro::Libro(){
    _idLibro = 0;
    strcpy(_NomLibro, "" );
    strcpy(_Autor, "" );
    _AnioLibro = 0;
    _Disponible = false;
    _Estado = false;
}
    
    int Libro::getIdLibro(){
        return _idLibro;
    }
    std::string Libro::getNomLibro(){
        return _NomLibro;
    }
    std::string Libro::getAutor(){
        return _Autor;
    }
    int Libro::getAnioLibro(){
        return _AnioLibro;
    }
    bool Libro::getDisponible(){
        return _Disponible;
    }
    bool Libro::getEstado(){
        return _Estado;
    }

    void Libro::setIdLibro(int Idlibro){
        _idLibro = Idlibro;
    }
    void Libro::setNomLibro(std::string NomLibro){
        strcpy(_NomLibro, NomLibro.c_str());
    }
    void Libro::setAutor(std::string Autor){
        strcpy(_Autor, Autor.c_str());
    }
    void Libro::setAnioLibro(int AnioLibro){
        _AnioLibro = AnioLibro;
    }
    void Libro::setDisponible(bool Disponible){
        _Disponible = Disponible;
    }
    void Libro::setEstado(bool Estado){
        _Estado = Estado;
    }