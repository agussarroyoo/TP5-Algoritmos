#include<stdio.h>
#include<stdlib.h>
#include "pila.h"


int main(){
    printf("\nINICIO DEL PROGRAMA DE PRUEBA\n");

	printf("\n1.Creo una pila vacia.\n");
    pila P = PilaVacia();

	printf("\n2.Pruebo la funcion esPilaVacia. Mensaje esperado 'Pila Vacia': ");
    if(esPilaVacia(P)) {
        printf("Pila Vacia\n");
    }else {
        printf("Pila NO Vacia\n");
    }
	    
	    
    // printf("\n3.Muestro la lista vacia por pantalla: ");
    // mostrar(L);

    // printf("\n4.Escribo la cantidad de elementos de una lista vacia: %d \n", longitud(L));

    // printf("\n5.Escribo el valor del primer elemento de una lista vacia: %d \n", primerElemento(L));

    printf("\n3.Inserto un elemento en la pila\n");
	P=push(P,1);

    printf("\n4.Pruebo la funcion esPilaVacia. Mensaje esperado 'Pila NO Vacia': ");
    if(esPilaVacia(P)) {
        printf("Pila Vacia\n");
    }else {
        printf("Pila NO Vacia\n");
    }

    printf("\n5.Escribo el valor del primer elemento de la pila: %d \n", top(P));


    printf("6.Elimino el tope de la pila.");
    P = pop(P);
    
    printf("\n7.Pruebo la funcion esPilaVacia. Mensaje esperado 'Pila Vacia': ");
    if(esPilaVacia(P)) {
        printf("Pila Vacia\n");
    }else {
        printf("Pila NO Vacia\n");
    }

    printf("\n8.Escribo el valor del primer elemento de una lista vacia: %d \n", top(P));



}