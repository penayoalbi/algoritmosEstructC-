#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>

using namespace std;

int ingresarDatos(string &fecha, char &tFiesta, int &qPersonas, int &tMenu)
	{
		
		
		cout<<"Ingrese fecha de la fiesta - Formato dd/mm/aa  'fin' para finalizar : "<<endl;
		cin >> fecha;
		if(fecha != "fin")
		{
			do{
				cout<<"Ingrese Tipo de fiesta: C, S, O: "<<endl;
				cin>>tFiesta;
			}while(tFiesta !='c' && tFiesta != 's' && tFiesta != 'o');
			
			cout<<"Ingrese cantidad de Personas: "<<endl;
			cin>> qPersonas;
			do{
				cout<<"Ingrese Tipo de menu 1 o 2: "<<endl;
				cin>>tMenu;
			}while(tMenu != 1 && tMenu != 2);	
			
		}
		
	}

/*
float validaDatos(string fecha){
	if(fecha ==""){
		return false;
	}
	
	return true;
}
*/

void cantidadFiesta(char qfiestatipo, int &qftipoC, int &qftipoS, int &qftipoO)
{
	switch(qfiestatipo)
	{
		case 'c':qftipoC++;
			break;
		case 's': qftipoS++;
			break;
		case 'o': qftipoO++;
	}
}

void fechaMaximo(int fmaxpers, string fmfiesta, int &fmqpormenu, string &fmqfiestamenu)//fm == fecha max, q== cantidad
{
	if(fmaxpers > fmqpormenu)
	{
		fmqpormenu=fmaxpers;
		fmqfiestamenu= fmfiesta;
	}
}

void maxFechaPorMenu(int mfpmqPersona, int mfpmMenu, string mfpmFecha, int &mfpmqPersMenu, string &mfpmMenu1, string &mfpmMenu2)//mfpm == Maximo fecha por menu
{
	if(mfpmMenu==1){
		fechaMaximo(mfpmqPersona,mfpmFecha, mfpmqPersMenu, mfpmMenu1);
	}
	else{
		fechaMaximo(mfpmqPersona,mfpmFecha, mfpmqPersMenu, mfpmMenu2);
	}
}

void Promedios(float &pProm, int pqpersona, int pqc, int pqs, int pqo, int &ptotalpers, int &ptotalFiesta)// p == promedio, q== cantidad
{
	ptotalpers=ptotalpers+pqpersona;
	ptotalFiesta=pqc+pqs+pqo;
	pProm=ptotalpers/ptotalFiesta;
	
}

void ImprimirResultado( int imqC,int imqS, int imqO, string imfechaMaxMenu1, string imfechaMaxMenu2, float promedio, int qPersonaMax)//im == imprimir 
{
	cout<<"Para la fiesta tipo C hay: "<<imqC<<endl;
	cout<<"Para la fiesta tipo S hay:"<<imqS<<endl;
	cout<<"Para la fiesta tipo O hay:"<<imqO<<endl;
	cout<<"El Promedio total de Personas en todas las fiestas es: "<< promedio<<endl;
	cout<<"La fecha con mayor cantidad de personas para el Menu 1: "<<imfechaMaxMenu1<<endl;
	cout<<"La fecha con mayor cantidad de personas para el Menu 2: "<<imfechaMaxMenu2<<endl;
//	cout<<"q persomamax : "<<qPersonaMax<<endl;

}


int main(){
	
	string fecha, fmenu1, fmenu2;
	
	char tipoFiesta;
	int  nMenu;
	int qPersonas, qPersonaMax=0, qc=0, qs=0, qo=0; //contadores
	int totalPersona=0, totalFiestas=0, qPersonaPorFecha=0; //Acum
	float promedio=0;
	
	
	
	ingresarDatos(fecha,tipoFiesta,qPersonas,nMenu);
	
	while(fecha != "fin")
	{
		cantidadFiesta(tipoFiesta, qc, qs, qo);
	
		maxFechaPorMenu(qPersonas,nMenu, fecha, qPersonaMax, fmenu1, fmenu2 );
	
		Promedios(promedio, qPersonas, qc, qs,qo, totalPersona, totalFiestas);
		
		ingresarDatos(fecha,tipoFiesta,qPersonas,nMenu);
	}
	

	ImprimirResultado(qc, qs, qo, fmenu1, fmenu2, promedio,qPersonaMax);
	
	system("PAUSE");
	
}
