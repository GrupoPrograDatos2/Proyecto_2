#ifndef ALGORITMO_GEN�TICO_H
#define ALGORITMO_GEN�TICO_H
#include "Gladiador.h"
#include "Lista.h"

class Algoritmo_Genetico
{
    public:
        Lista poblacion;//Lista con los gladiadores de la poblaci�n
	    int size;//Tama�o de la lista
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

#endif // ALGORITMO_GEN�TICO_H
