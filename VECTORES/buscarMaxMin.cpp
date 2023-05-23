#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

#define TOPE 20

float CalcularProm(int vec[], float &prom,int &suma)
{
    for (int i=0; i<20;i++){
        suma+=vec[i];
    }
    prom=suma/20;
    return prom;
}

int buscarMax(int vec[],int &max, int &cpm){
    for( int i=0; i<20;i++){
        if(vec[i]>=max){
            max=vec[i];
            cpm=i;
        }
    }
    return max;
}

int buscarMin(int vec[], int &min,int &bpm){
    for(int i=0; i<20;i++)
    {
        if(vec[i]<min){ 
            min=vec[i];
            bpm=i;
        }
    }
    return min;
}

void imprimir(int vec[],int imax,int imin, int iprom, int ipmax, int ipmin){
    cout<<"El valor maximo es: "<<imax<<" posicion: "<<ipmax<<endl;
    cout<<"El valor minimo es: "<<imin<<" posicion: "<<ipmin<<endl;
    cout<<"El promedio es: "<<iprom<<endl;
}

int main(){

    int vec[20]={10,20,14,-3,23,28,12,15,22,3,6,5,4,8,-1,13,14,17,18,7};
    int qVec=0;
    int posMax, posMin;
    int max=0, min=1000, suma=0;
    float prom;

    CalcularProm(vec,prom,suma);
    buscarMax(vec,max,posMax);
    buscarMin(vec,min,posMin);
    imprimir(vec,max,min,prom,posMax,posMin);
    
}