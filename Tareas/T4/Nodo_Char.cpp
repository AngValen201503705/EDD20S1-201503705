#include "Nodo_Char.h"

Nodo_Char::Nodo_Char(char nCaract)
{
    caracter = nCaract;
    next = NULL;
    prev=NULL;
}

Nodo_Char *Nodo_Char::getNext()
{
    return next;
}

void Nodo_Char::setNext(Nodo_Char *n)
{
    next = n;
}
Nodo_Char *Nodo_Char::getPrev()
{
    return prev;
}

void Nodo_Char::setPrev(Nodo_Char *n)
{
    prev = n;
}

char Nodo_Char::getChar()
{
    return caracter;
}