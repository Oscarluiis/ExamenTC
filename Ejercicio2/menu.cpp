#include "menu.h"

Menu::Menu(){}

void Menu::mostrarMenu(){
    Game control;
    int opcion, jugador1, jugador2;
    do{
        cout<<"\t.: M e n u :."<<endl;
        cout<<"1. Mostrar reglas"<<endl;
        cout<<"2. Jugar"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            control.mostrarReglas();
            break;
        case 2:
            system("clear");
            cout<<"Jugador 1"<<endl;
            jugador1 = control.seleccion();
            system("clear");
            cout<<"Jugador 2"<<endl;
            jugador2 = control.seleccion();
            //cout<<"Jugador 1: "<<jugador1<<endl;
            //cout<<"Jugador 2: "<<jugador2<<endl;
            cout<<"Enter para continuar..."<<jugador2<<endl;
            cin.ignore().get();
            //Aqui llegue no me dio tiempo :v pero si lo terminare porque
            //Se ve interesante jaja
        default:
            cout<<"Ingrese una opcion valida, enter para continuar..."<<endl;
            cin.ignore().get();
            system("clear");
            break;
        }
    }while(opcion!=3);

}