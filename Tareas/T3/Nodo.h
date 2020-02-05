#ifndef NODO_H
#define NODO_H
#include <string>
#include <iostream>

class Nodo{

    private:
        //atributes
        int id;
        std::string nombre;
        Nodo *next;
    public:
        //methods
        Nodo(int nId, std::string nNombre);
        Nodo *getNext();
        void setNext(Nodo *n);
        int getId();
        std::string getNombre();
        



};

#endif