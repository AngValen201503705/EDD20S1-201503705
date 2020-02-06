#ifndef LISTA_H
#define LISTA_H
#include "Nodo.cpp"

class Lista
{
private:
	Nodo *root;
    Nodo *last;
public:
	Lista();
	Nodo *getRoot();
    Nodo *getLast();
	void setRoot(Nodo *n);
    void setLast(Nodo *n);
	int insert(Nodo *n);
    Nodo *search(int id);
    void eliminar(Nodo *d);
	
};

#endif