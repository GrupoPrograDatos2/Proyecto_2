#ifndef ALGORITMO_GENÈTICO_H
#define ALGORITMO_GENÈTICO_H
#include "Gladiador.h"
#include "Lista.h"

class Algoritmo_Genetico
{
    public:
        Lista poblacion;//Lista con los gladiadores de la poblaciÛn
	    int size;//TamaÒo de la lista
	    int GEN;
        Algoritmo_Genetico();
        Gladiador Mejor_Fitness();
        void Cruce(Gladiador glad1,Gladiador glad2);
        void Mutar(Gladiador glad);
        void inversion(Gladiador glad);
        void reproduccion();

        virtual ~Algoritmo_Genetico();

    protected:

    private:
};

#endif // ALGORITMO_GENÈTICO_H
