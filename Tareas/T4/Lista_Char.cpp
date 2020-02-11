#include "Lista_Char.h"
#include <iostream>
#include <cstring>
using namespace std;

Lista_Char::Lista_Char()
{

    first = NULL;
}

Nodo_Char *Lista_Char::getFirst()
{
    return first;
}

void Lista_Char::setFirst(Nodo_Char *n)
{
    first = n;
}


int Lista_Char::insertFirst(Nodo_Char *n)
{

    if (first == NULL)
    {
        first = n;
        return 1;
    }
    else
    {   
        first->setPrev(n);
        n->setNext(first);
        first=n;
        return 2;
    }
    return 0;
}

Nodo_Char *Lista_Char::seek(string bstring){

    int size = bstring.length(); //verificando el tamaño del string
    char bchara[size+1]; //declarando el arreglo de char del tamaño de la string
     strcpy(bchara, bstring.c_str());//copiando el string caracter por caracter al arreglo
    char bchar=bchara[0] ;//buscando dentro de la lista el primer caracter del string
    if(first!=NULL){
        Nodo_Char *aux= first;
        while(aux->getNext()!=NULL){
            if(aux->getChar()==bchar){
                return aux;
            }
            aux=aux->getNext();
        }
        if(aux->getNext()==NULL){
            if(aux->getChar()==bchar){
                return aux;
            }
        }

    }
    return NULL;
}

int main(){

    Lista_Char *nList= new Lista_Char();
    Nodo_Char *n1= new Nodo_Char('h');
    Nodo_Char *n2= new Nodo_Char('o');
    Nodo_Char *n3= new Nodo_Char('l');
    Nodo_Char *n4= new Nodo_Char('a');

    nList->insertFirst(n1);
    nList->insertFirst(n2);
    nList->insertFirst(n3);
    nList->insertFirst(n4);
 
    Nodo_Char *respuesta = nList->seek("ola");

    if(respuesta==NULL){
        cout<<"No se ha encontrado";
    }   else{
        cout<< respuesta->getChar();
    }

   return 0;
}