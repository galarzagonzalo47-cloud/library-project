#include "SocioManager.h"

void SocioManager::cargar(){
    Socio reg;
    int id, dni;
    std::string nombre, apellido, telefono;
    bool estado;

    cout<<"Ingrese el ID del Socio: ";
    cin>>id;
    reg.setIdSocio(id);
    cin.ignore();
    cout<<endl;
    cout<<"Ingrese el DNI del Socio: ";
    cin>>dni;
    reg.setDni(dni);
    cin.ignore(1000, '\n');
    cout<<endl;
    cout<<"Ingrese el Nombre del Socio: ";
    getline(cin, nombre);
    
    reg.setNomSocio(nombre.c_str());
    cout<<endl;
    cout<<"Ingrese el Apellido del Socio: ";
    getline(cin, apellido);
    
    reg.setApeSocio(apellido.c_str());
    cout<<endl;
    cout<<"Ingrese el Telefono del Socio: ";
    getline(cin, telefono);
    
    reg.setTelSocio(telefono.c_str());
    cout<<endl;
    
    reg.setEstado(true);

    if(archivo.guardar(reg)){
        cout<<"Socio cargado correctamente"<<endl;
    }
    else{
        cout<<"No se pudo cargar correctamente"<<endl;
    }

}

void SocioManager::listar(){

    Socio reg;
    int cantidad = archivo.getCantidadRegistro();
    cout<<"MOSTRANDO LISTA DE SOCIO ACTIVOS"<<endl;

    for(int i=0; i<cantidad; i++){

        reg = archivo.leer(i);

        if(reg.getEstado()==true){
        cout<<"------------------------------"<<endl;
        cout<<"ID de Socio: "<<reg.getIdSocio();
        cout<<endl;
        cout<<"DNI del Socio: "<<reg.getDni();
        cout<<endl;
       
        cout<<"Nombre del Socio: "<<reg.getNomSocio();
       
        cout<<endl;
        cout<<"Apellido del Socio: "<<reg.getApeSocio();
       
        cout<<endl;
        cout<<"Telefono del Socio: "<<reg.getTelSocio();
  
        cout<<endl;
        cout<<"------------------------------"<<endl;
        }
    }

}
/*
Número de socio
DNI
Nombre
Apellido
Teléfono
Estado
*/