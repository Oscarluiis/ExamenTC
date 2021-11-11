#include "grafo.h"

Grafo::Grafo(){}

void Grafo::addNodo(Nodo _nodo){
    nodos.push_back(_nodo);
}
void Grafo::addArista(Nodo _nodo, Arista _arista){
    if(!existNodo(_nodo.getValue())){
        cout<<"El nodo "<<_nodo.getValue()<<" no existe..."<<endl;
        return;
    }
    
    if(!existNodo(_arista.getValue())){
        cout<<"El nodo "<<_arista.getValue()<<" no existe..."<<endl;
        return;
    }


    for(Nodo &item : nodos){
        if (item.getValue()==_nodo.getValue()){
            item.addArista(_arista);
            break;
        }        
    }
}
void Grafo::addNodo(char _nodo){
    addNodo(Nodo (_nodo));
}

vector<Nodo>Grafo::getNodos(){
    return nodos;
}

bool Grafo::existNodo(char _c){
    
    for(Nodo nodo : nodos){
        if (nodo.getValue() == _c)
        {
            return true;
        }    
    }
    return false;

}

void Grafo::showGrafo(){
    for(Nodo nodo : getNodos()){
        cout<<nodo.getValue()<<endl;
        
        for(Arista arista : nodo.getAristas()){
            cout<<"--"<<arista.getValue()<<endl;
        }
    }
}