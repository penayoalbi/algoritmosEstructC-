#include <iostream>
#include <cstdlib>
#include <cstdio>
/*
Ejercicio 5: Ingresar N juegos de N1 valores enteros cada uno, 
donde N se informa al comienzo y N1 al cargar cada juego. 
Emitir el número del juego con promedio más alto y la suma total de todos los juegos.
*/
using namespace std;


int main(){
	int cantN, cantValores, valor, sumaValores=0;
	float  promVal=0, promMax, juegoPromMax;
	//cout<< "hola mundo";
	
	cout<< "Ingrese cantidad de juegos: ";
	cin>> cantN;
	for(int i=0; i<cantN; i++){
		cout<<"ingrese cantidad de valores: ";
		cin>>cantValores;
		for(int j=0; j<cantValores; j++){
			cout<<"Ingrese valores: ";
			cin>>valor;
			sumaValores+=valor;
			promVal=sumaValores/cantValores;
			
			if(promVal>promMax){
				promMax=promVal;	
			}
			
		}
		
		if(promMax>juegoPromMax){
			juegoPromMax=promMax;	
		}	
	}
	cout<<"prom max = "<<promMax<<endl;	
	cout<<"numero de juego con promedio mas alto: "<<endl;
	
}
