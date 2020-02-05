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

int Lista::search(std::string bNombre){
    if(root!=NULL){
        Nodo *aux = root;
        while(aux!=last){
            if(aux->getNombre()==bNombre){
                return aux->getId();
            }
            aux= aux->getNext();
        }
        if (aux==last){
             if(aux->getNombre()==bNombre){
                return aux->getId();
            }

        }
    }
    
    return 0;

}

int main(){
   cout<<"Ulysses gay"; 
   return 0;
}
