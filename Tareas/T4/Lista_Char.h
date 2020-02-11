#ifndef LISTA_CHAR_H
#define LISTA_CHAR_H
#include "Nodo_Char.cpp"

class Lista_Char
{
private:
    Nodo_Char *first;

public:
    Lista_Char();
    Nodo_Char *getFirst();
    void setFirst(Nodo_Char *n);
    int insertFirst(Nodo_Char *n);
    Nodo_Char *seek(std::string bstring);
};
#endif