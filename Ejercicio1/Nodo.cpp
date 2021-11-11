#include "Nodo.h"

Nodo::Nodo(char _c){
    value = _c;
    aristas = vector<Arista>();
}

Arista::Arista(char _c){
    value = _c;
}

char Arista::getValue(){
    return value;
}
Nodo::Nodo(char _c, vector<Arista> _aristas){
    value = _c;
    aristas = _aristas;
}

void Nodo::addArista(Arista _arista){
    aristas.push_back(_arista);
}
void Nodo::addArista(char _value){
    aristas.push_back(Arista(_value));
}
char Nodo::getValue(){
    return value;
}

Arista Nodo::getArista(char _value){
    for(Arista arista : aristas){
        if (arista.getValue()==_value){
            return arista;
        }
        
    }
}

vector <Arista> Nodo::getAristas(){
    return aristas;
}