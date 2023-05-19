
#include<iostream>

#include<cstdio>

#include<cstdlib>

#include <cstring>

#define TOPE 20


using namespace std;

void ingreso(char cad[], char &caracter, int &pos1, int &pos2 )
{
	cout<<"ingrese un texto: "<<endl;
    gets(cad);

    cout<<"ingrese caracter a buscar: ";
    cin>>caracter;

    cout<<"Ingrese primera posicion: ";
    cin>>pos1;

    cout<<"ingrese segunda posicion: ";
    cin>>pos2;
}

int buscar(char cad[], char bcaracter,int pos1,int pos2,int &cant,int &total)
{
	int i=pos1;
	if(pos1 < TOPE && pos2<TOPE)
	{
		while(cad[i]>pos1 &&cad[i]<pos2 || cad[i]!='\0' )
		{
			
			if(cad[i]==bcaracter)
	        {
	        	cout<<"El caracter se encuentra en la posicion: "<<i<<endl;
	            cant++;
	        } 
			i++; 
		}
		 return cant;
	}
	else
	{
		return -1;
	}
	system("PAUSE");
}

int main(){

    char cad[TOPE];
    char caracter;
    int pos1, pos2;
    int cant=0 , total=0;
    int i=0;
    
   // buscar(cad,caracter,pos1,pos2,cant,total);	
	ingreso(cad,caracter,pos1,pos2);

   if( buscar(cad,caracter,pos1,pos2,cant,total) != -1	){
   	cout<<"cantidad de veces que aparece el "<<caracter<<" es "<<cant<<endl;
   }
   else{
   	cout<<" Parametros fuera de rango.";
   }
}