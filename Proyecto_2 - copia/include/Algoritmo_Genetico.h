#ifndef ALGORITMO_GENETICO_H
#define ALGORITMO_GENETICO_H
#include <Lista.h>
#include "Gladiador.h"

class Algoritmo_Genetico

{
    public:
        Lista poblacion;//Lista con los gladiadores de la población
	    int size;//Tamaño de la lista
	    int GEN;
        Algoritmo_Genetico();
        virtual ~Algoritmo_Genetico();
        Gladiador Mejor_Fitness();
        void Cruce(Gladiador glad1,Gladiador glad2);
        void Mutar(Gladiador glad);
        void inversion(Gladiador glad);
        void reproduccion();

    protected:

    private:
};

#endif // ALGORITMO_GENETICO_H
