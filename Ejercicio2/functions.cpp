#include "functions.h"
#include <stdio.h>
#include <ctype.h>
Game::Game(){};

int Game::seleccion(){
    //Validar la seleccion del usuario
    while(true){
        string eleccion;
        cout<<"\t.:A r m a s:."<<endl;
        cout<<"Piedra, Papel, Tijera, Lagarto, Spock"<<endl;
        cout<<"Selecciones una arma: ";
        cin>>eleccion;
        if(eleccion == "Piedra"){
            return 0;
        }else if(eleccion == "Papel"){
            return 1;
        }else if(eleccion == "Tijera"){
            return 2;
        }else if(eleccion == "Lagarto"){
            return 3;
        }else if(eleccion == "Spock"){
            return 4;
        }else{
            cout<<"Seleccion invalida, enter para continuar..."<<endl;
            cin.ignore().get();
            system("clear");
        }
    }
}

void Game::mostrarReglas(){
    system("clear");
    cout<<"\t .:Reglas del Juego explicadas por Sheldon:."<<endl;
    cout<<"1. Tijera corta a papel"<<endl; 
    cout<<"2. Papel tapa a piedra"<<endl; 
    cout<<"3. Piedra aplasta a lagarto"<<endl; 
    cout<<"4. Lagarto envenena a Spock"<<endl; 
    cout<<"5. Spock rompe a tijera"<<endl; 
    cout<<"6. Tijera decapita a lagarto"<<endl; 
    cout<<"7. Lagarto devora a papel"<<endl; 
    cout<<"8. Papel desautoriza a Spock"<<endl; 
    cout<<"9. Spock vaporiza a piedra"<<endl; 
    cout<<"10. Y como siempre, piedra aplasta a tijera"<<endl;
    cout<<"Enter para continuar..."<<endl;
    cin.ignore().get();
    system("clear");
}

void Game::cargarArchivo(){
    //me quede sin tiempo 
}