#include <iostream>
#include <cstdlib>
#include <cstdio>

/*
Ejercicio 1: A partir de un valor ingresado por el usuario (el cual deberá estar
comprendido entre 2 y 9, inclusive), generar y mostrar todos los múltiplos del
mismo menores a 100, primero en forma ascendente y luego en sentido inverso
dentro del mismo programa.
*/

using namespace std;

int main(){
	
	int num=0;
	int resu=0;
	
	cout<<"ingrese un numero entre 2 y 9: ";
	cin>>num;
	if(num >=2 and num <=9){
	
	/*	for (int i=0; i<=100; i++){
			resu=num*i;
			cout<<resu<<endl;
		}*/
		for (int i=100; i>=0; i--){
			if(num%i==0){
				resu=i;
				cout<<resu<<endl;
			}	
		}
		
	}else{
		cout<<"Ingrese un numero valido.";
	}		

}
