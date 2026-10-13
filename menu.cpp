#include "menu.h"

void Menu::mostrarMenu(){
    int opcion;

    do{
    cout<<"MENU PRINCIPAL DE LA BIBLIOTECA"<<endl;
    cout<<"SELECCIONE ALGUNAS DE LAS SIGUIENTES OPCIONES "<<endl;
    cout<<"1. LIBROS"<<endl;
    cout<<"2. SOCIOS"<<endl;
    cout<<"3. PRESTAMOS"<<endl;
    cout<<"0. SALIR"<<endl;
    cin>>opcion;
    switch(opcion){
        case 1: mostrarLibro();
        break;
        case 2: mostrarSocios();
        break;
        case 3: mostrarPrestamos();
        break;

        default:
        cout<<"OPCION INCORRECTA";
        break;
    }
    }while (opcion != 0);
}

void Menu::mostrarLibro(){
    int opcion;
    do{
        system("cls");
    cout<<"BIENVENIDO AL MENU DE LIBROS"<<endl;
    cout<<"SELECIONE ALGUNA OPCION"<<endl;
    cout<<"1. CARGAR LIBRO"<<endl;
    cout<<"2. MOSTRAR TODOS LOS LIBRO ACTIVOS"<<endl;
    cout<<"3. MOSTRAR LIBRO DISPONIBLES"<<endl;
    cout<<"4. VOLVER AL MENU"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
    _libros.cargar();
    system("pause");
        break;
    case 2:
    _libros.listar();
    system("pause");
    break;
    case 3:
    _libros.listarDisponibles();
    system("pause");
    break;
    case 4:
        cout << "Volviendo al menu principal..." << endl;
        system("pause");
        break; 
    default:
    cout<<"OPCION INCORRECTA"<<endl;
        break;
    }

}while(opcion != 4);
}

void Menu::mostrarSocios(){

    int opcion;
    do{
        system("cls");
        cout<<"BIENVENIDO AL MENU DE SOCIOS"<<endl;
        cout<<"SELECIONE ALGUNA OPCION"<<endl;
        cout<<"1. CARGAR SOCIO"<<endl;
        cout<<"2. MOSTRAR SOCIOS"<<endl;
        cout<<"3. VOLVER AL MENU"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            _socios.cargar();
            system("pause");
            break;
        case 2:
        _socios.listar();
        system("pause");
        break;
        case 3:
        cout << "Volviendo al menu principal..." << endl;
        system("pause");
        break;
        default:
        cout<<"OPCION INCORRECTA"<<endl;
            break;
        }

    }while (opcion != 3);
    
}

void Menu::mostrarPrestamos(){
    int opcion;
    do{
        system("cls");
        cout<<"BIENVENIDO AL MENU DE PRESTAMOS"<<endl;
        cout<<"SELECIONE ALGUNA OPCION"<<endl;
        cout<<"1. REGISTRAR PRESTAMO"<<endl;
        cout<<"2. REGISTRAR DEVOLUCION"<<endl;
        cout<<"3. LISTAR PRESTAMOS ACTIVOS"<<endl;
        cout<<"4. VOLVER AL MENU"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            _prestamo.RegistrarPrestamo();
            system("pause");
            break;
        case 2:
        _prestamo.RegistrarDevolucion();
        system("pause");
        break;
        case 3: _prestamo.mostrarPrestamosActivos();
        system("pause");
        break;
        case 4:
        cout << "Volviendo al menu principal..." << endl;
        system("pause");
        break;
        default:
        cout<<"OPCION INCORRECTA"<<endl;
            break;
        }

    }while (opcion != 4);

}

