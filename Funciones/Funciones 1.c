#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void ingresar_elementos(Pila *);
main()
{
	Pila elementos;
	inicpila(&elementos);
	ingresar_elementos(&elementos);
	mostrar(&elementos);
	system("pause");
	return(0);
}
//Declaracion de funciones...
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
