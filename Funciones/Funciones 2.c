#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void ingresar_elementos(Pila *);
void pasar_en_orden(Pila *);
main()
{
	Pila elementos,elementos2;
	inicpila(&elementos2);
	inicpila(&elementos);
	ingresar_elementos(&elementos);
	pasar_en_orden();
	system("pause");
	return(0);
}
//Declaracion de funciones...
//
void ingresar_elementos(Pila *elementos)
{
	int op;
	do
	{
		op=0;
		leer(elementos);
		printf("¿Desea seguir ingresando elementos? (elija la opcion numerica):\n ");
		printf("1-SI \n 2-NO \n");
		scanf("%d",&op);
	}while(op==1);
}
//
//
void pasar_en_orden(Pila *elementos *elementos2)
{
	Pila aux;
	inicpila (&aux);
	while(!pilavacia(elementos))
	{
		apilar(&aux, desapilar(elementos));
		apilar(elementos2, desapilar(elementos));
	}
}
