#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>


using namespace std;

#define TOPE 10

struct vecEst{
    string patente;
    string hora;
}est[10];

void Menu();
void ingreso();
void salida();
void listar();
void finalizar();

void Menu(){
  //  system("cls");
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
}

void ingreso(){
    
    int i=0;
    
    while (i<3 ){
        cout<<"Ingrese patente: ";
        cin>>est[i].patente;

        cout<<"Ingrese hora de entrada: ";
        cin>>est[i].hora;
        i++;
    }
    Menu();
}

void salida(){
    
    string patte;
    cout<<"Ingrese patente: ";
    cin>>patte;

    for(int i=0; i<3;i++){
        if(est[i].patente==patte){
            cout<<" el patente: "<<patte<<"ingreso a las :"<<est[i].hora<<"hora"<<endl;
            est[i].patente="";
        }
    }
    Menu();

}

void listar(){
    system("cls");
    for(int i=0;i<3;i++){
        cout<<" \n"<<est[i].patente<<" hora entrada:"<<est[i].hora;
    }

    Menu();
}

void finalizar(){
    system("cls");
    for(int i=0; i<3;i++){
        if(est[i].patente==""){
            cout<<"El estacionamineto esta vacio!!";
        }
    }
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

    Menu();
   // buscarLibre(estVec);
  // getchar();
   return 0;
    
}