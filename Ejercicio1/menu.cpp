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