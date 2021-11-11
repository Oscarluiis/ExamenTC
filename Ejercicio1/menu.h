#include <iostream>
#include "grafo.h"

class Menu{
    Grafo control;
    public:
    Menu();
    void addVertice();
    void addArista();
    void mostrarGrafo();
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
