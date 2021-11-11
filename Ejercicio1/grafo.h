#include <iostream>
#include <vector>
#include <map>
#include <tuple>
#include "Nodo.h"

class Grafo{
    public:
    Grafo();
    void addNodo(Nodo _nodo);
    void addNodo(char _nodo);
    vector <Nodo> getNodos();
    bool existNodo(char _c);
    void addArista(Nodo _nodo, Arista _arista);
    void showGrafo();
    void showTable();
    private:
    vector <Nodo> nodos;

};