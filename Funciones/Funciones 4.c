#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void ingresar_elementos(Pila *);
void pasar_a_otra(Pila *origen, Pila *otra);
void buscar_menor(Pila *origen, Pila *otra);
main()
{
	Pila origen,destino,otra;
	inicpila(&origen);
	inicpila(&otra);
	ingresar_elementos(&origen);
	buscar_menor(&origen,&otra);
	system("pause");
	return 0;
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
void pasar_a_otra(Pila *origen,Pila *otra)
{
	while(!pilavacia(origen))
	{
		apilar(otra, desapilar(origen));
	}
}
void buscar_menor(Pila *origen, Pila *otra)
{
	Pila menor,comparar,aux;
	int men=0;
	inicpila(&menor);
	inicpila(&aux);
	inicpila(&comparar);
	pasar_a_otra(origen,otra);
	//
	while(!pilavacia(otra)){
	apilar(&comparar, tope(otra));
	apilar(origen,desapilar(otra));
	}
	while(!pilavacia(&comparar))
	{
	    if (pilavacia(&menor))
		{
			apilar(&menor,desapilar(&comparar));
		}
		if (tope(&comparar)<tope(&menor))
		{
			apilar(&aux, desapilar(&menor));
			apilar(&menor, desapilar(&comparar));
		}
		else
		{
			apilar(&aux, desapilar(&comparar));
		}
	}
	men=tope(&menor);
	printf("El menor valor de la pila %d \n",men);
}