#include<stdio.h>
#include<stdlib.h>


typedef int item;
#define INDEFINIDO -999

struct nodo {
    item dato;
    struct nodo *siguiente;
} typedef nodo;

struct pila {
    struct nodo *cabecera;
    int altura;
} typedef Pila;

typedef struct pila *pila;

pila PilaVacia();
pila push(pila P, item dato);
pila pop(pila P);
item top(pila P);
int esPilaVacia(pila P);

pila PilaVacia() {
    pila P;
    P = (pila)malloc(sizeof(Pila));
    P->altura = 0;
    P->cabecera=NULL;
    return P;
}

pila push(pila P, item dato) {
    struct nodo* nuevo;
	nuevo = (struct nodo*) malloc(sizeof( struct nodo));
	nuevo->dato = dato;
	nuevo->siguiente = P->cabecera;
	P->cabecera = nuevo;
    P->altura += 1;
	return P;
}
int esPilaVacia(pila P){
   return P->cabecera==NULL;
    
}

pila pop(pila P) {
	struct nodo *aux;
	if(P->cabecera!=NULL){
		aux = P->cabecera;
		P->cabecera = P->cabecera->siguiente;
		free(aux);
	}
	return P;
}

item top(pila P) {
	if(P->cabecera==NULL){
		return INDEFINIDO;
	}
	else
		return P->cabecera->dato;
}




