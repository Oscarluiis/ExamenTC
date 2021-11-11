#include <iostream>
#include "grafo.h"

class Menu{
    
    Grafo control;

    

public:
void addVertice(){
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
void addArista(){
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

void mostrarGrafo(){
    control.showGrafo();
<<<<<<< HEAD
}
};
/*
    Grafo control;  
    control.addNodo('A');
    control.addNodo('B');
    control.addNodo('C');
    control.addNodo('D');

    control.addArista(Nodo ('A'), Arista ('B'));
    control.addArista(Nodo ('A'), Arista ('C'));
    control.addArista(Nodo ('A'), Arista ('D'));
    control.addArista(Nodo ('B'), Arista ('A'));
    control.addArista(Nodo ('B'), Arista ('E'));
    
    control.showGrafo();
*/
=======
}
>>>>>>> parent of 488e74c... Menu mejor.
