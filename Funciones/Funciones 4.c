#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void ingresar_elementos(Pila *);
void pasar_a_otra(Pila *origen, Pila *destino);
main()
{
	Pila origen,destino,aux;
	inicpila(&origen);
	inicpila(&aux);
	ingresar_elementos(&origen);
	mostrar(&);
	system("pause");
	return(0);
}
//Declaracion de funciones...
//
void ingresar_elementos(Pila *origen)
{
	int op;
	do
	{
		op=0;
		leer(origen);
		printf("¿Desea seguir ingresando elementos? (elija la opcion numerica):\n ");
		printf("1-SI \n 2-NO \n");
		scanf("%d",&op);
	}while(op==1);
}
//
//
void pasar_a_otra(Pila *origen,Pila *aux)
{
	while(!pilavacia(origen))
	{
		apilar(aux, desapilar(origen));
	}
}
void buscar_menor(Pila *origen, Pila *aux)
{
	Pila menor,comparar;
	inicpila(&menor);
	inicpila(&comparar)
	pasar_a_otra(origen,aux);
	while(!pilavacia(aux))
	{
		tope(&comparar)=tope(aux);
		pasar_a_otra(aux,origen);
		if (pilavacia(&comparar))
		{
			apilar(&menor,desapilar(comparar));
		}
	}
}