#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char cadenaChar[21]="hola mundo";

    string cadena="hola mundo";
    cout<<"cadenaChar: "<<sizeof(cadenaChar)<<endl;

    cout<<"cadena string: "<<sizeof(cadena)<<endl;
    cout <<"strlen cadenachar: "<<strlen(cadenaChar)<<endl;

    cout<< "cadena size: "<< cadena.size()<<endl;


}