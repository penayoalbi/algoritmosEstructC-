#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <fstream>


using namespace std;

void crearArchivo(ofstream &arch);
void escribirArchivo(ofstream &arch);
void cerrarArchivo(ofstream &arch);

void crearArchivo(ofstream &arch){
    arch.open(" prueba.txt",ios::out);//abriendo el archivo
    if(arch.fail()){
        cout<<" error al crear archivo";
        exit(1);
    }
    escribirArchivo(arch);
}

void escribirArchivo(ofstream &arch){
    arch<<" Hola mundo; esto se escribe en el ficheroooo.";
  //  arch.close();
  cerrarArchivo(arch);
    
}
void cerrarArchivo(ofstream &arch){
    arch.close();
}


int main(){
    ofstream archivo;
    crearArchivo(archivo);

    system("PAUSE");
    return 0;

}
