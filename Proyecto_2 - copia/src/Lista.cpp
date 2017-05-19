#include "Lista.h"
#include <cstddef>
#include <iostream>
#include <stdexcept>
using namespace std;
Lista::Lista()
{
    ///Constructor
    first = new Nodo();
    last = first;
    curr = first;
    size = 0;
}

Lista::~Lista()
{
    ///Destructor
    clear();
}

int Lista::getSize()
{
    ///Retorna el tamaño de la lista
    return size;
}

int Lista::getPos()
{
    ///Retorna la posicion actual de la lista
    return pos;
}

void Lista::goToStart()
{
    ///Se mueve al inicio de la lista
    curr = first;
}

void Lista::goToEnd()
{
    ///Se mueve al final de la lista
    curr = last;
}

void Lista::next()
{
    ///Moverse a la siguiente posicion
    curr = curr->getNext();
    pos++;
}

void Lista::insert(Gladiador element)
{
    ///Inserta un elemento
    Nodo* newNode = new Nodo(element, NULL);
    newNode->setNext(curr->getNext());
    curr->setNext(newNode);

    if(curr==last)
    {
        last = last->getNext();
    }

    size++;
}

void Lista::append(Gladiador element)
{
    ///Inserta un elemento al final de la lista
    if(size==0)
    {
        goToEnd();
        insert(element);
    }
    else
    {
        move(size);
        insert(element);
    }
}

Gladiador Lista::remove()
{
    ///Elimina un elemento
    if(curr==last)
    {
        throw runtime_error("No hay elementos en la lista");
    }

    Nodo* change = curr;
    next();
    Gladiador value = curr->getValue();
    change->setNext(curr->getNext());
    size--;

    return value;
}

void Lista::print()
{
    ///Imprime la lista
    goToStart();

    for(int i=0; i<size; i++)
    {
        curr = curr->getNext();
        cout << curr->getValue().Nombre << " ";
    }

    cout << endl;
}

void Lista::clear()
{
    ///Limpia la lista
    goToStart();

    for(int i=0; i<size; i++)
    {
        Nodo* temp = curr;
        next();
        delete temp;
    }

    first = new Nodo();
    last = first;
    curr = first;
    size = 0;
    pos = 0;
}

void Lista::reverse()
{
    ///Voltea la lista
    goToStart();
    Gladiador listAux[100];

    for(int i=0; i<size; i++)
    {
        curr = curr->getNext();
        listAux[i] = curr->getValue();
    }

    int tam = size;
    clear();

    for(int i=tam-1; i>=0; i--)
    {
        append(listAux[i]);
    }

    delete[] listAux;
}

void Lista::move(int pos)
{
    ///Mueve curr a cualquier posicion
    goToStart();
    this->pos = pos;

    if(pos>size)
    {
        throw runtime_error("La posicion esta fuera de la lista");
    }

    for(int i=0; i!=pos; i++)
    {
        next();
    }
}

Gladiador Lista::getValue(int pos)
{
    ///Retorna el valor del elemento
    move(pos);
    return curr->getValue();
}
