#include "Algoritmo_Genético.h"
#include <stdlib.h>

using namespace std;

Algoritmo_Genetico::Algoritmo_Genetico()
{
    GEN=0;
	poblacion= Lista();
	size=6;//tamaño de la población inicial
	for(int i=0; i<size;i++){
	//Se generan randoms para la población
	int gMano = (int) rand()%100 + 1;//El 100 representa hasta donde va y el uno donde comienza
	int gPies = (int) rand()%100 + 1;
	int gCuerpo = (int) rand()%100 + 1;
	int rMano = (int) rand()%100 + 1;
	int rPies = (int) rand()%100 + 1;
	int rCuerpo = (int) rand()%100 + 1;
	string nombre="Glad"+i;
	Gladiador temp=Gladiador(nombre,gMano,gPies,gCuerpo,rMano,rPies,rCuerpo);
	poblacion.append(temp);//Se agrega el gladiador a la lista con la población
   	}
}

Gladiador Algoritmo_Genetico::Mejor_Fitness(){//Determina cual es el gladiador con mejor fitness
	 int temp=0;//Esta temporal lleva el numero de índice en el que se encuentra el gladiador con mejor fitness
	 for(int i=0; i<size; i++){//Acá se recorre toda la población
        if(poblacion.getValue(i).Resist_Total+poblacion.getValue(i).Fuerza_Total>poblacion.getValue(temp).Resist_Total+poblacion.getValue(temp).Fuerza_Total){//Acá se compara el fitness
	     temp=i;//si es mayor, entonces es el nuevo gladiador con mejor fitness
	    }
	 }
	 return poblacion.getValue(temp);//Se retorna el gladiador con mejor fitness
}

void Algoritmo_Genetico::Cruce(Gladiador glad1,Gladiador glad2){
	 int GolpeMano=glad1.MGenetico[0];
	 int GolpePies=glad1.MGenetico[1];
	 int GolpeCuerpo=glad1.MGenetico[2];
	 int ResistMano=glad2.MGenetico[3];
	 int ResistPies=glad2.MGenetico[4];
	 int ResistCuerpo=glad2.MGenetico[5];
	 Gladiador hijo=Gladiador("HIJO",GolpeMano,GolpePies,GolpeCuerpo,ResistMano,ResistPies,ResistCuerpo);
	 //Hay que mutar
	 Mutar(hijo);
     cout<<"CRUCE" <<"\n";
     poblacion.append(hijo);
     }

void Algoritmo_Genetico::Mutar(Gladiador glad){
	    	if(glad.indice_de_mutacion==2)//estipula si el gladiador será mutado o no
	    	{
		    	int temp=(int) rand()%100 + 20;
		    	int indice=(int) rand()%5;//número de 0 al 5 para mutar el gen que salga a partir del random

		    	if(indice==0){//Golpe de mano
		    		glad.MGenetico[0]=temp;
		    		glad.Magnitud_Golpe_Mano=temp;
		    	}

		    	if(indice==1){//Golpe de Pies
		    		glad.MGenetico[1]=temp;
		    		glad.Magnitud_Golpe_Pies=temp;
		    	}

		    	if(indice==2){//Golpe de cuerpo
		    		glad.MGenetico[2]=temp;
		    		glad.Magn_Golp_CuerpoACuerpo=temp;
		    	}

		    	if(indice==3){//Resistencia de Mano
		    		glad.MGenetico[3]=temp;
		    		glad.Resist_Mano=temp;
		    	}

		    	if(indice==4){//Resistencia de Pies
		    		glad.MGenetico[4]=temp;
		    		glad.Resist_Pies=temp;
		    	}

		    	if(indice==5){//Resistencia de cuerpo
		    		glad.MGenetico[5]=temp;
		    		glad.Resist_CuerpoACuerpo=temp;
		    	}
		    	glad.CalcularResitencia();
		    	glad.CalcularFuerza();
		    	}
	    }

void Algoritmo_Genetico::inversion(Gladiador glad){
	    	if(glad.indice_inversion==3)
	    	{
	    		cout<< "INVERSION"<<"\n";
	    		poblacion.append(glad);//Si el índice de inversion del gladiador es correcto, se agrega de nuevo a la población
	    	}
	    }

void Algoritmo_Genetico::reproduccion(){
	    	cout<< "GEN: "<<GEN<<"\n";
	    	for(int i=0; i<poblacion.getSize();i++){
	        	cout<<poblacion.getValue(i).Nombre<<"\n";
	        }
	    	int temp=poblacion.getSize();
	    	cout<<"TAMAÑOPOBL: "<<poblacion.getSize()<<"\n";
	    	for(int i=0; i<temp;i=i+2){
	    		if(i!=temp-1){
	    			cout<<i;
	    			inversion(poblacion.getValue(i));
	    			inversion(poblacion.getValue(i+1));
	    			Cruce(poblacion.getValue(i),poblacion.getValue(i+1));//se cruza la población de dos en dos
	    		}
	    	}
	    	GEN++;
	    }

Algoritmo_Genetico::~Algoritmo_Genetico()
{
    //dtor
}
