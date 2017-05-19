#ifndef NODO_H
#define NODO_H
#include <cstddef> //Para que funcione el Null
#include "Gladiador.h"

using namespace std;

class Nodo
{
    public:
        Nodo(Gladiador value, Nodo* next=NULL);
        Nodo(Nodo* next=NULL);
        virtual ~Nodo();
        Gladiador getValue();
        Nodo* getNext();
        void setNext(Nodo* nodo);

    private:
        Gladiador value;
        Nodo* next; //Apunta a una instancia de la clase Nodo
};

#endif // NODo_H

