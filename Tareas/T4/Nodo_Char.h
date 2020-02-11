#ifndef NODO_CHAR_H
#define NODO_CHAR_H
#include <iostream>
using namespace std;

class Nodo_Char
{

private:
    //atributes
    char caracter;
    Nodo_Char *next;
    Nodo_Char *prev;

public:
    //methods
    Nodo_Char(char nCaract);
    Nodo_Char *getNext();
    void setNext(Nodo_Char *n);
    Nodo_Char *getPrev();
    void setPrev(Nodo_Char *n);
    char getChar();
};
#endif