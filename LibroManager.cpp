#include "LibroManager.h"


void LibroManager::listar(){

    Libro reg;

    int cantidad = archivo.getCantidadRegistros();

    for(int i=0; i < cantidad; i++){

    reg = archivo.leer(i);

    if(reg.getEstado()==true){
    cout<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"ID del Libro: "<<reg.getIdLibro();
    cout<<endl;
    cout<<"Nombre del Libro: "<<reg.getNomLibro();
    cout<<endl;
    cout<<"Autor del Libro: "<<reg.getAutor();
    cout<<endl;
    cout<<"Anio del Libro: "<<reg.getAnioLibro();
    cout<<endl;
    
    if(reg.getDisponible()==true){
        cout<<"EL LIBRO ESTA DISPONIBLE"<<endl;;
    }
    else{
        cout<<"EL LIBRO NO ESTA DISPONIBLE"<<endl;
    }
    cout<<"------------------------------"<<endl;
}  
}
}

void LibroManager::listarDisponibles(){
    Libro reg;
    int cantidad = archivo.getCantidadRegistros();
    cout<<"MOSTRANDO SOLO LIBROS DISPONIBLES"<<endl;
    for(int i=0; i < cantidad; i++){

    reg = archivo.leer(i);

    if(reg.getEstado()==true){
    if(reg.getDisponible()==true){
    cout<<"------------------------------"<<endl;
    cout<<"Nombre del Libro: "<<reg.getNomLibro();
    cout<<endl;
    cout<<"Autor del Libro: "<<reg.getAutor();
    cout<<endl;
    cout<<"Anio del Libro: "<<reg.getAnioLibro();
    cout<<endl;
    cout<<"------------------------------"<<endl;
    }
    }
}
}

void LibroManager::cargar(){
    Libro reg;
    int idLibro, anio;
    std::string autor, titulo;

    cout<<"Ingrese los datos del libros"<<endl;
    cout<<"ID de Libro: ";
    cin>>idLibro;
    cin.ignore();
    cout<<endl;
    reg.setIdLibro(idLibro);
    cout<<"Ingrese el Nombre del Libro: ";
    getline(cin, titulo);
    reg.setNomLibro(titulo.c_str());
    cout<<endl;
    cout<<"Ingrese el Autor del Libro: ";
    getline(cin, autor);
    reg.setAutor(autor.c_str());
    cout<<endl;
    cout<<"Anio del libro: ";
    cin>>anio;
    reg.setAnioLibro(anio);
    cout<<endl;
    reg.setDisponible(true);
    reg.setEstado(true);

    if(archivo.guardar(reg)){
        cout<<"Libro guardado correctamente"<<endl;
    }
    else{
        cout<<"No se pudo guardar el libro"<<endl;
    }
}
