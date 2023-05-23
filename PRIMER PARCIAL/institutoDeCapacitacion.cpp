
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <cstring>
#include <string.h>

using namespace std;

int  ingresarDatos(string nombreApellido,string &nMayorEdad, char curso, int &idedad)
{
	cout<<"ingrese Nombre y Apellido: 'fin' para finalizar"<<endl;
   	getline(cin,nombreApellido); 
     cout<<"nombre  "<<nombreApellido;
   while(nombreApellido != "fin")
    {	
        do{
            cout<<"ingrese tipo de curso: "<<endl;
            cin>>curso;
        }while(curso!= 's'&& curso!= 'r' && curso!='p');
      
       do{
            cout<<"ingrese edad: "<<endl;
            cin>>idedad;
     	}while(idedad < 20 || idedad >60);

 	fflush(stdin);
 	cout<<"ingrese Nombre y Apellido: 'fin' para finalizar"<<endl;
   	getline(cin,nombreApellido); 
    }
}

void totalCurso(char tcCurso, int &tcS, int &tcR, int &tcP)
{
    switch (tcCurso)
    {
    case 's': tcS++;
        break;
    case 'r': tcR++;
        break;
    case 'p': tcP++;
    }
}

void mayorEdad(string  nombreApellido, string &nMayorEdad, char meSyJ, int &meEdad)
{
    int aux=0;
    if(meEdad>aux){
        aux=meEdad;
        meEdad=aux;
        nMayorEdad= nombreApellido;
    }
    
}

void promedioEdadRedes(float &perProm,int &pertotalR,int perR)
{
     perProm=perProm/perR;
}

void bonificacion()
{

}

void imprimir(string nMayorEdad, int mayorEdadS, int itotalS, int itotalR, int itotalP, float promRedes, int valorCurso )
{
    cout<<"Nombre y apellido edad Mayor en sueldos y jornales:  "<<nMayorEdad<<endl;
    cout<<"total curso S: "<<itotalS*valorCurso<<endl;
    cout<<"total curso R: "<<itotalR*valorCurso<<endl;
    cout<<"total curso P: "<<itotalP*valorCurso<<endl;
    cout<<" Promedio edad en Redes: "<<promRedes<<endl;
    
}

int main(){
    string nombreApellido, nMayorEdad;
    char curso;
    float valorCurso = 1500;
    int edad;
	int  edadMayorS=0;
    int totalS=0,totalR=0, totalP=0,totalPR=0;
    float promRedes;
	
	ingresarDatos(nombreApellido,nMayorEdad, curso, edad);

    while(nombreApellido != "fin")
    {
        totalCurso(curso,totalS,totalR,totalP);
        mayorEdad(nombreApellido,nMayorEdad, curso,edad);
        promedioEdadRedes(promRedes,totalR,totalPR);
    }
	
 imprimir(nMayorEdad,edadMayorS, totalP,totalR,totalS,totalPR, valorCurso );
 system("PAUSE");
}