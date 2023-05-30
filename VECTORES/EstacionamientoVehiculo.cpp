#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>


using namespace std;

#define TOPE 10

struct vehiculo{
    string patente;
    int hora;
};

void Inicializa(vehiculo est[]);
void Menu(vehiculo est[],int posLibre);
void ingreso(vehiculo est[],int posLibre);
int buscarLibre(vehiculo est[],int &posLibre);
bool validarHora(int vhora);
void salida(vehiculo est[],int posLibre);
void listar(vehiculo est[],int posLibre);
void finalizar(vehiculo est[],int posLibre);

void Inicializa(vehiculo est[]){
    for(int i=0; i<3;i++){
        est[i].patente="libre";
    }
    
}

void Menu(vehiculo est[],int posLibre){
  //  system("cls");
    int opcion=0;
    cout<<" \n\n";
    cout<<"\t ***Elija una opcion***"<<endl;
    cout<<"\t Opcion 1: ingreso de Vehiculo."<<endl;
    cout<<"\t Opcion 2: Salida de Vehiculo."<<endl;
    cout<<"\t Opcion 3: Listado de Vehiculo."<<endl;
    cout<<"\t Opcion 4: Finalizar."<<endl;
    
   do{
        cout<<"\t Ingrese una opcion:  ";
        cin>> opcion;
    }while(opcion!=1 && opcion!=2 && opcion!=3 &&opcion!=4);

    switch ( opcion){
        case 1: ingreso(est,posLibre);
            break;
        case 2: salida(est,posLibre);
            break;
        case 3: listar(est,posLibre);
            break;
        case 4: finalizar(est,posLibre);
            break;    
    }
}

void ingreso(vehiculo est[], int posLibre){
    
    int i=0;
    //int posLibre = 0; 
   // char corte;
    posLibre= buscarLibre(est,posLibre);
    cout<<" pos libre: "<<posLibre;

    while (i<3 && posLibre!=-1 )
    { 
        cout<<posLibre<<endl;
        cout<<"Ingrese patente: ";
        cin>>est[i].patente;
        do{
            cout<<"Ingrese hora de entrada: ";
            cin>>est[i].hora;
        }while(validarHora(est[i].hora)!=true);
        //cout<<" Desea ingresar otro vehiculo: S o N ";
       // cin>>corte;
        i++;
    }
    Menu(est,posLibre);
}

void salida(vehiculo est[],int posLibre){
    int aux=0;
    string aSalir;
    cout<<"Ingrese patente: ";
    cin>>aSalir;

    for(int i=0; i<3;i++){
        if(est[i].patente==aSalir){
            cout<<" el patente: "<<aSalir<<" ingreso a las "<<est[i].hora<<" hora "<<endl;
            est[i].patente="libre";
            est[i].hora=0;
        }else{
            aux=-1;
        }
    }
    if(aux==-1){
        cout<<"El patente: "<<aSalir<<" no se encuentra!."<<endl;
    }else{
        cout<<"El patente ya salio!. "<<endl;
    }
    Menu(est,posLibre);

}

void listar(vehiculo est[],int posLibre){
    system("cls");
    for(int i=0;i<3;i++){
        if(est[i].patente!="libre"&& est[i].hora!=0){
            cout<<" \n"<<est[i].patente<<" hora entrada: "<<est[i].hora<<endl;
        }else{
            cout<<"El estacionamineto esta libre!.\n";
        }
    }

    Menu(est,posLibre);
}

void finalizar(vehiculo est[], int posLibre){
    int fin=0;
    system("cls");
    for(int i=0; i<3;i++){
        if(est[i].patente=="libre"){
            //cout<<"El estacionamineto esta vacio!!"<<endl;
            fin=0;
        }else{
            fin=1;
        }
        if(fin!=0){
            cout<<"NO SE PUEDE FINALIZAR!!. El estacionamiento tiene que estar vacio!"<<endl;
            Menu(est,posLibre);
        }
    }
    cout<<"Gracias por elegirnos!\n";
}

int buscarLibre(vehiculo est[], int &posLibre){
    //int poslib=0;

    for(int i=0; i<3; i++){
        if(est[i].patente=="libre"){
            posLibre=i;
            return posLibre;
        }
       else{
            return -1;
        }  
    } 
}
bool validarHora(int vhora){
    if(vhora<7 || vhora>21){
            return false;
    }else{
            return true;
        }

}

int main(){

    vehiculo est[TOPE];
    Inicializa(est);
    int posLibre=0;

    Menu(est,posLibre);
    buscarLibre(est,posLibre);
    system("PAUSE");
    return 0;
    
}