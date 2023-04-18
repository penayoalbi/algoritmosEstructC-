#include<iostream>

#include <cstdlib>

using namespace std;

int main(){
	
	int num1, num2, num3;
	
	cout<<" ingrese el primer numero : "<<endl;
	cin>> num1;
	
	cout<<" ingrese el segundo numero : "<<endl;
	cin>> num2;
	
	cout<<" ingrese el tercer numero: "<<endl;
	cin>> num3;
	
	
	if(num1!= num2 and num1 != num3 and num2 !=num3){
		if(num1>num2 and num1>num3){
			cout<<" el mayor es num1: "<<num1<<endl;
			
		}else{
			if(num2>num1 and num2> num3){
				cout<<" el mayor es num2: "<<num2<<endl;
			}else{
				cout<<" el mayor es num3: "<<num3<<endl;
			}
		}
	}else{
		cout<<"No pueden ser iguales"<<endl;
	}

//	cout<< "hola mundo";

}
