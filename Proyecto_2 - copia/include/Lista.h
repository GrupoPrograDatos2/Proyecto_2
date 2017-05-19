#ifndef ENLAZADA_H
#define ENLAZADA_H
#include "Nodo.h"
#include "Gladiador.h"
#include <cstddef>

using namespace std;

class Lista
{
    public:
        Lista();
        virtual ~Lista();
        int getSize();
        int getPos();
        void goToStart();
        void goToEnd();
        void next();
        void insert(Gladiador element); //inserta un elemento en la posición curr
        void append(Gladiador element);
        Gladiador remove();
        void print();
        void clear();
        void reverse();
        void move(int pos);
        Gladiador getValue(int pos);

    protected:
        Nodo* first; //Head
        Nodo* last; //Tail
        Nodo* curr; //Actual
        int size;
        int pos;
};

#endif // ENLAZADA_H
