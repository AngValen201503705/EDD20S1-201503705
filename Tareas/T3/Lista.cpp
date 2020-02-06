#include "Lista.h"
#include <iostream>
using namespace std; 

Lista::Lista(){

	root=NULL;

}

Nodo *Lista::getRoot(){
    return root;
}

void Lista::setRoot(Nodo *n){

	root=n;
}
Nodo *Lista::getLast(){
    return last;
}

void Lista::setLast(Nodo *n){

	last=n;
}


int Lista::insert(Nodo *n){

	if(root==NULL){
		root=n;
        last=n;
		return 1;
	}else{
		Nodo *aux = last;
        aux->setNext(n);
        last= n;
		return 2;

		}
	return 0;
}

Nodo *Lista::search(int bInt){
    if(root!=NULL){
        Nodo *aux = root;
        while(aux!=last){
            if(aux->getId()==bInt){
                return aux;
            }
            aux= aux->getNext();
        }
        if (aux==last){
             if(aux->getId()==bInt){
                return aux;
            }

        }
    }
    
    return NULL;

}

void Lista::eliminar(Nodo *d){
     if(root!=NULL){
        Nodo *aux = root;
        while(aux->getNext()!=d){
            aux= aux->getNext();
        }
        if (aux->getNext()==d){
            aux->setNext(d->getNext());
        }
    }

}

int main(){
   cout <<"Prueba"; 
   return 0;
}
