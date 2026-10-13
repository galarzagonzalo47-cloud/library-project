#include "LibroArchivo.h"

LibroArchivo::LibroArchivo(){
    _archivo = "libros.dat";
};


int LibroArchivo::getCantidadRegistros(){

    FILE *p;

    p = fopen(_archivo.c_str(), "rb"); //ABRIMOS ARCHIVO PARA LEER

    if (p == NULL){
        cout<<"Error al abirir el archivo";
        return 0;
    }

    fseek(p,0,SEEK_END); //MOVEMOS EL PUNTERO AL FINAL
    int bytes = ftell(p); //OBTENEMOS EL TAMAÑO TOTAL EN BYTES DEL ARCHIVO
    fclose(p); //CERRAMOS EL ARCHIVO P

    return bytes / sizeof(Libro); // DIVIDiMOS LA CANTIDAD DE ESPACIO DE BYTES CON EL QUE HAY EN LIBRO PARA SABER CUANTOS REGISTROS HAY

}

bool LibroArchivo::guardar(Libro reg){ //GUARDAR PERTENECE A LIBRO ARHCIV0O, USAMSO PARAMETRO PARA LLAMAR A LIBROS
    FILE *p; //DECLARAMOS EL ARCHIVO CON EL PUNTERO
    p = fopen(_archivo.c_str(), "ab"); //ABRIMOS EL ARCHIVO LLAMANDOLO CON _ARCHIVO Y LA APERTURA CON AB -> APPEND BINARY

    if (p == NULL ){
        cout<<"Error al abirir el archivo";
        return false;
    }

    bool seguardo = fwrite(&reg, sizeof(Libro), 1, p); //VERIFICAMOS CON UN BOOL SI EFECTIVAMENTE SE GUARDO
    //Guardar 1 registro de tamaño Libro en el archivo p, tomando los datos desde reg.
    fclose(p);

    return seguardo; //DEVOLVEMOS EL VALOR QUE DA

};

Libro LibroArchivo::leer(int nroRegistro){
    Libro aux;

    FILE *p;

    p = fopen(_archivo.c_str(),"rb");

    if(p==NULL){
    cout<<"Error al abirir el archivo";
    return aux;
    }

    fseek(p ,nroRegistro * sizeof(Libro), SEEK_SET);

    fread(&aux,sizeof(Libro),1,p);

    fclose(p);

    return aux;


}

bool LibroArchivo::modificar(Libro reg, int nroRegistro){

    FILE *p;
    p = fopen(_archivo.c_str(), "rb+");

    if(p == NULL){
        cout << "No se pudo abrir el archivo" << endl;
        return false;
    }

    fseek(p, nroRegistro * sizeof(Libro), SEEK_SET);

    bool seModifico = fwrite(&reg, sizeof(Libro), 1, p);

    fclose(p);

    return seModifico;
}