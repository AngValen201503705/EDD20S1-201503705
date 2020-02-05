#include "Nodo.h"

Nodo::Nodo(int nId, std::string nNombre){
    id= nId;
    nombre= nNombre;
    next= NULL;
}

Nodo *Nodo::getNext(){
return next;
}

void Nodo::setNext(Nodo *n){
next=n;
}


int Nodo::getId(){
    return id;
}

std::string Nodo::getNombre(){
    return nombre;
}