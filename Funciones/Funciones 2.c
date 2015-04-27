#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void ingresar_elementos(Pila *);
void pasar_en_orden(Pila *);
main()
{
	Pila origen,destino;
	inicpila(&origen);
	inicpila(&destino);
	ingresar_elementos(&origen);
	pasar_a_destino();
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
void pasar_a_destino(Pila *origen, Pila *destino)
{
	while(!pilavacia(origen))
	{
		apilar(destino, desapilar(origen));
	}
}
//
//
