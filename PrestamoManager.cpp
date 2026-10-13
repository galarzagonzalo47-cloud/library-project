#include "PrestamoManager.h"


void PrestamoManager::RegistrarPrestamo(){
    Prestamo reg;
    Socio soc;
    Libro lib;
    bool verificacion = false;
    int socio;
    int cantidadSocios = SArchivo.getCantidadRegistro();
    int cantidadLibros = LArchivo.getCantidadRegistros();
    int idPrestamo, idSocio, IdLibro;
    bool devuelto, estado;
    cout<<"INGRESE EL NUMERO DE SOCIO PARA PEDIR EL PRESTAMO: ";
    cin>>idSocio;
    reg.setIdSocio(idSocio);
    for(int i=0; i<cantidadSocios; i++){
        soc = SArchivo.leer(i);
        if(idSocio == soc.getIdSocio() && soc.getEstado() == true){
        cout<<"SOCIO VERIFICADO"<<endl;
        verificacion = true;
        break;
}
}
        if(verificacion==false){
            cout<<"SOCIO NO ENCONTRADO"<<endl;
            return ;
        }

    cout<<"INGRESE EL NUMERO DE LIBRO QUE DESEA : "<<endl;
    LIbroManager_.listar();
    cin >> IdLibro;

reg.setIdLibro(IdLibro);

bool verificacionLibro = false;
bool Librodisponible = false;

for(int i = 0; i<cantidadLibros; i++){
    lib = LArchivo.leer(i);
    if(IdLibro == lib.getIdLibro() && lib.getEstado() == true){

        cout<<"LIBRO ENCONTRADO, VERFICANDO SI ESTA DSIPONIBLE"<<endl;
        verificacionLibro=true;

    if(lib.getDisponible() == true){

    cout << "EL LIBRO SE ENCUENTRA DISPONIBLE" << endl;

    lib.setDisponible(false);

    LArchivo.modificar(lib, i);

    Librodisponible = true;
    }
    else{
    cout << "EL LIBRO NO ESTA DISPONIBLE" << endl;
    }
}
}
if(verificacionLibro == false){
    cout << "LIBRO NO ENCONTRADO" << endl;
}
if(verificacion && Librodisponible){
    cout<<"INICINADO PROCESO DE PRESTAMO DE LIBRO"<<endl;
    cout<<"INGRESE ID DE PRESTAMO :";
    cin>>idPrestamo;
    reg.setIdPrestamo(idPrestamo);
    cout<<endl;
    reg.setDevuelto(false);
    cout<<"INGRESE LA FECHA EN LA QUE INICIA EL PRESTAMO : "<<endl;
    fecha1.cargarFecha();
    reg.setFechaDePrestamo(fecha1);
    cout<<endl;
    cout<<"INGRESE LA FECHA DE DEVOLUCION : "<<endl;
    fecha2.cargarFecha();
    reg.setFechaDeDevolcuion(fecha2);
    cout<<"PRESTAMO INICIADO"<<endl;
    reg.setDevuelto(false);
    reg.setEstado(true);
    cout<<endl;

    if(archivo.guardar(reg)){
        cout<<"Prestamo cargado correctamente"<<endl;
    }
    else{
        cout<<"No se pudo cargar correctamente"<<endl;
    }
}
}


void PrestamoManager::RegistrarDevolucion(){
    Prestamo reg;
    Socio soc;
    Libro lib;
    bool verificacion = false;
    int socio;
    int cantidadLibros = LArchivo.getCantidadRegistros();
    int cantidad=archivo.getCantidad();
    int idPrestamo, idSocio, IdLibro;
    bool devuelto, estado;
    cout<<"INGRESE EL NUMERO DE PRESTAMO A DEVOLVER"<<endl;

    cin>>idPrestamo;

    for(int i = 0; i<cantidad; i++){

        reg = archivo.leer(i);

        if(idPrestamo == reg.getIdPrestamo() && reg.getEstado()==true){
            
            verificacion = true;
             
            cout<<"PRESTAMO ENCONTRADO"<<endl;
            
            cout<<"REGISTRANDO DEVOLUCION"<<endl;
            
            reg.setDevuelto(true);        
            reg.setEstado(false);
            archivo.modificar(reg, i);
            
            for (int j = 0; j < cantidadLibros; j++){
                lib = LArchivo.leer(j);

            if(reg.getIdLibro() == lib.getIdLibro()){
            lib.setDisponible(true);
            LArchivo.modificar(lib, j);
            cout<<"LIBRO MARCADO COMO DISPONIBLE"<<endl;

            break;
        }
    }
    break;
}
}
    if(verificacion == false){
        cout<<"NO SE ENCONTRO NINGUN PRESTAMO CON ESA ID"<<endl;
    }
}
void PrestamoManager::mostrarPrestamosActivos(){
    Prestamo reg;
    Socio soc;
    Libro lib;
    bool verificacion = false;
    int socio;
    int cantidad= archivo.getCantidad();
    int idPrestamo, idSocio, IdLibro;
    bool devuelto, estado;
    cout<<"PRESTAMOS "<<cantidad<<endl;

    cout<<"VERIFICANDO PRESTAMOS ACTIVOS"<<endl;
        for(int i = 0; i<cantidad; i++){
        reg = archivo.leer(i);
        if(reg.getEstado()==true){
            cout<<"MOSTANDOS PRESTAMO ACTIVO "<<endl;
            verificacion = true;
            cout<<"ID DE PRESTAMO: ";
            cout<<reg.getIdPrestamo();
            cout<<endl;
            cout<<"ID DE SOCIO: ";
            cout<<reg.getIdSocio();
            cout<<endl;
            cout<<"ID DE LIBRO: ";
            cout<<reg.getIdLibro();
            cout<<endl;
            cout<<"FECHA DE PRESTAMO: ";
            reg.getFechaDePrestamo().mostrarFecha();
            cout<<endl;
            cout<<"FECHA DE DEVOLUCION: ";
            reg.getFechaDeDevolcuion().mostrarFecha();

            if(reg.getDevuelto()==true){
                cout<<"ESTADO DEL PRESTAMO: DEVUELTO "<<endl;
            }
            else{
                cout<<"ESTADO DEL PRESTAMO: NO DEVUELTO"<<endl;
            }
        }
}
if(verificacion == false){
            cout<<"NO HAY PRESTAMOS ACTIVOS"<<endl;
        }
}