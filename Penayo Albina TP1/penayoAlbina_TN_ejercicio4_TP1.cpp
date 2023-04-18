#include <iostream>
#include <cstdlib>
#include <cstdio>

/*
Ejercicio 4: Ingresar una serie de números naturales que termina con -1 e
indicar cuántas veces se interrumpe el orden ascendente y cuántos números
hay en cada grupo ordenado.

*/

using namespace std;

int main(){
	
	int num, ant;
	int cantAsc=0, cantNum=0, cantCorte=0;
	
	cout<<"ingrese numeros; -1 para finalizar: "<<endl;
	cin>> num;
	
	while(num != -1){
		
		if(num>ant){
			ant=num;
			cantAsc++;
			cantNum++;
		
		}else{
			cantCorte++;
			cout<< "Cantidad de numero en el grupo: "<<cantNum<<endl;
			
		}
		
		
		cout<<"ingrese numeros; -1 para finalizar: "<<endl;
		cin>> num;	
	}
	cout<< "Cantidad de interrupciones: "<<cantCorte<<endl;
	cout<< "Cantidad Ascendente: "<<cantAsc<<endl;

	
	
}
