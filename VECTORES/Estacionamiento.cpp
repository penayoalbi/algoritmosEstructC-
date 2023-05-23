#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string.h>

using namespace std;

#define TOPE 10

struct vecEst{
    string patente;
    string hora;
}est[10];


void ingreso(){

    int i=0;
    
    while (i<3 ){
        cout<<"Ingrese patente: ";
        cin>>est[i].patente;

        cout<<"Ingrese hora de entrada: ";
        cin>>est[i].hora;
        i++;
    }


}

void salida(){}

void listar(){
    for(int i=0;i<3;i++){
        cout<<" \n"<<est[i].patente<<" hora entrada:"<<est[i].hora;
    }
}

void finalizar(){
    system("cls");
    cout<<"Gracias por elegirnos!";
}

int buscarLibre(string estVec[]){
    int poslib=0;

    for(int i=0; i<3; i++){
        if(estVec[i]=="libre"){
            poslib=i;
        }
    }
    return poslib;
}

int main(){

    int opcion=0;
    
    cout<<"Elija una opcion"<<endl;
    cout<<"Opcion 1: ingreso de Vehiculo."<<endl;
    cout<<"Opcion 2: Salida de Vehiculo."<<endl;
    cout<<"Opcion 3: Listado de Vehiculo."<<endl;
    cout<<"Opcion 4: Finalizar."<<endl;
    
   do{
        cout<<"Ingrese una opcion: ";
        cin>> opcion;
    }while(opcion!=1 && opcion!=2 && opcion!=3 &&opcion!=4);

    switch ( opcion){
        case 1: ingreso();
            break;
        case 2: salida();
            break;
        case 3: listar();
            break;
        case 4: finalizar();
            break;    
    }
 
   // buscarLibre(estVec);
   
    
}