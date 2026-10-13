#include "PrestamoArchivo.h"


PrestamoArchivo::PrestamoArchivo(){
    _archivoP="Prestamos.dat";
};


int PrestamoArchivo::getCantidad(){
    FILE *p;

    p= fopen(_archivoP.c_str(),"rb");

    if(p == NULL){
        cout<<"EL ARCHIVO NO SE PUDO ABRIR"<<endl;
        return 0;
    }

    fseek(p,0,SEEK_END);
    int bytes = ftell(p);
    fclose(p);

    return bytes / sizeof(Prestamo);
    
}

Prestamo PrestamoArchivo::leer(int nroRegistro){
    FILE *p;
    Prestamo aux;

    p=fopen(_archivoP.c_str(),"rb");

    if(p == NULL){
        cout<<"EL ARCHIVO NO SE PUDO ABRIR"<<endl;
        return aux;
    }

    fseek(p, nroRegistro * sizeof(Prestamo), SEEK_SET);
    fread(&aux, sizeof(Prestamo), 1, p);
    fclose(p);

    return aux;
}

bool PrestamoArchivo::guardar(Prestamo reg){

    FILE *p;
    p=fopen(_archivoP.c_str(),"ab");

    if ( p == NULL){
        cout<<"EL ARCHIVO NO SE PUDO ABRIR"<<endl;
        return false;
    }

    bool seguardo=fwrite(&reg, sizeof(Prestamo), 1 , p );
    fclose(p);

    return seguardo;

    

}

bool PrestamoArchivo::modificar(Prestamo reg, int nroRegistro){
    FILE *p;
    p = fopen(_archivoP.c_str(), "rb+");

    if(p == NULL){
        cout << "EL ARCHIVO NO SE PUDO ABRIR" << endl;
        return false;
    }

    fseek(p, nroRegistro * sizeof(Prestamo), SEEK_SET);

    bool seModifico = fwrite(&reg, sizeof(Prestamo), 1, p);

    fclose(p);

    return seModifico;
}











