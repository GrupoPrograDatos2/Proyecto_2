#include "main.h"
#include "Gladiador.h"
#include "Lista.h"
#include "Algoritmo_Genético.h"
#include <stdlib.h>

int main(){
    Gladiador c= Gladiador("Pepe",4,3,5,1,2,4);
    cout << c.Nombre << "\n";
    cout << "Fuerza Mano: " << c.Magnitud_Golpe_Mano<< "\n";
    cout << "Resis Mano: " << c.Resist_Mano<< "\n";
    for(int i=0; i<6;i++){
        	cout << c.MGenetico[i]<<"\n";
        }

    Lista lis= Lista();
    lis.append(c);
    lis.append(c);
    cout << "TamanoLista: " << lis.getSize()<<"\n";
    Algoritmo_Genetico AG= Algoritmo_Genetico();
    cout << "Mejor_Fuerza: " << AG.Mejor_Fitness().Fuerza_Total<<"\n";
    cout << "TamanoPoblacion> " << AG.poblacion.getSize()<<"\n";
    AG.reproduccion();
    cout << "TamanoPoblacion_2> " << AG.poblacion.getSize()<<"\n";
    AG.reproduccion();
    cout << "TamanoPoblacion_3> " << AG.poblacion.getSize()<<"\n";

}
