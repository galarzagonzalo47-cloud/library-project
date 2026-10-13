#include "SocioArchivo.h"

SocioArchivo::SocioArchivo(){
        _archivoSA = "Socio.dat";
}

int SocioArchivo::getCantidadRegistro(){

    FILE *p;
    p = fopen(_archivoSA.c_str(), "rb");

    if(p == NULL){
        return 0;
    }

    fseek(p,0,SEEK_END);
    int bytes = ftell(p);
    fclose(p);

    return bytes / sizeof(Socio);
};


bool SocioArchivo::guardar(Socio reg){

    FILE *p;

    p = fopen(_archivoSA.c_str(),"ab");

    if(p == NULL){
        return false;
    }

    bool seGuardo = fwrite(&reg, sizeof(Socio), 1, p);
    fclose(p);

    return seGuardo;
}

Socio SocioArchivo::leer(int nroRegistro){

    Socio aux;

    FILE *p;
    p = fopen(_archivoSA.c_str(),"rb");

    if(p == NULL){
        return aux;
    }

    fseek(p, nroRegistro * sizeof(Socio), SEEK_SET);

    fread(&aux, sizeof(Socio), 1, p );
    fclose(p);

    return aux;

}




/*
 int getCantidadRegistro();
    bool guardar(Socio reg); // -> Guarda una aerolínea nueva al final.
    Socio leer(int nroRegistro); // -> Lee una aerolínea por posición.
*/