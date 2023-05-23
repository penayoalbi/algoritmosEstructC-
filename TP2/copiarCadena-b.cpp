#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char cad1[41];
    char cad2[41];
    int q=0;

    cout<<"Ingrese una cadena de texto: "<<endl;
    cin.getline(cad2,41);

	
    for(int i=0;cad2[i]!='\0';i++){
        cad1[i]=cad2[i];
    }

    cout<<"cad 1: "<<cad1<<endl;
    cout<<"Longitud cad1: "<<strlen(cad1)<<endl;
    cout<<"Longitud cad2: "<<strlen(cad2)<<endl;  
    return 0;

}
