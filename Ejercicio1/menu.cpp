#include "menu.h"

Menu::Menu(){};

void Menu::addVertice(){
    char vertice;
    cout<<"Agregar vertice"<<endl;
    cout<<"Ingrese '*' para salir..."<<endl;
    do{
        cout<<"Vertice: ";
        cin>>vertice;
        if(vertice=='*') break;
        control.addNodo(vertice);
    }while(true);
}

void Menu::addArista(){
    char aristaOrigen, aristaDestino;
    cout<<"Agregar arista"<<endl;
    cout<<"Ingrese '*' para salir..."<<endl;
    do{
        cout<<"Arista origen: ";
        cin>>aristaOrigen;
        if(aristaOrigen=='*') break;
        
        cout<<"Arista destino: ";
        cin>>aristaDestino;
        if(aristaDestino=='*') break;
        control.addArista(Nodo (aristaOrigen), Arista(aristaDestino));
        cout<<endl;
    }while(true);
}

void Menu::mostrarGrafo(){
    control.showGrafo();
}

void Menu::mostrarMenu(){
    int opcionMenu;
    do{
        cout<<"\t .:M e n u:."<<endl;
        cout<<"1. Crear vertices"<<endl;
        cout<<"2. Conectar aristas"<<endl;
        cout<<"3. Mostrar grafo"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcionMenu;

        switch (opcionMenu)
        {
        case 1:
            addVertice();
            system("clear");
            break;
        case 2:
            addArista();
            system("clear");
            break;
        case 3:
            mostrarGrafo();
            cout<<"Enter para continuar..."<<endl;
            cin.ignore().get();
            system("clear");
            break;
        case 4:
            exit(0);
        default:
            cout<<"Ingrese una opcion valida, enter para continuar..."<<endl;
            cin.ignore().get();
            system("clear");
            break;
        }
    }while(opcionMenu!=4);
}