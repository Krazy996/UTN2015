#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void ingresar_elementos(Pila *);
void ordenadar(Pila *origen);
main()
{
	Pila origen;
	inicpila(&origen);
	ingresar_elementos(&origen);
	ordenadar(&origen);
	system("pause");
	return(0);
}
//
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
void ordenadar(Pila *origen)
{
	Pila desordenada,ordenada,aux,aux2;
	inicpila(&aux2);
	inicpila(&aux);
	inicpila(&ordenada);
	inicpila(&desordenada);
	while (!pilavacia(origen))
	{
		apilar(&desordenada, tope(origen));
		apilar(&aux, desapilar(origen));
	}
	while(!pilavacia(&aux))
	{
		apilar(origen,desapilar(&aux));
	}
	//LLEGA!!
	while(!pilavacia(&desordenada))
	{
		//mostrar(&desordenada);
		if (pilavacia(&ordenada))
		{
			apilar(&ordenada,desapilar(&desordenada));
		}
		while(!pilavacia(&desordenada))
		{
			if (tope(&ordenada)>tope(&desordenada))
			{
				apilar(&aux, desapilar(&ordenada));
				apilar(&ordenada, desapilar(&desordenada));
			}
			else
			{
				apilar(&aux, desapilar(&desordenada));
			}
		}
		while(!pilavacia(&aux))
		{
			apilar(de)
		}
	}	
	printf("ordenada\n");
	mostrar(&ordenada);
	printf("desordenada\n");
	mostrar(&desordenada);
	printf("aux\n");
	mostrar(&aux);	
}