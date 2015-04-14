#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void ingresar_elementos(Pila *);
void pasar_a_otra(Pila *origen, Pila *otra);
int buscar_menor(Pila *origen, Pila *otra, int *men);
main()
{
	Pila origen,destino,otra;
	int men;
	men=0;
	inicpila(&origen);
	inicpila(&otra);
	ingresar_elementos(&origen);
	buscar_menor(&origen,&otra,&men);
	mostrar(&origen);
	printf("El menor valor de la pila %d \n",men);
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
int buscar_menor(Pila *origen, Pila *otra, int *men)
{
	Pila menor,comparar,aux;
	inicpila(&menor);
	inicpila(&aux);
	inicpila(&comparar);
	pasar_a_otra(origen,otra);
	while(!pilavacia(otra))
	{
		tope(&comparar)==tope(otra);
		pasar_a_otra(otra,origen);
		if (pilavacia(&comparar))
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
	pasar_a_otra(otra,origen);
	mostrar(&menor);
	//men==tope(&menor);
}
