#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void ingresar_elementos();
main()
{
	ingresar_elementos();
	system("pause");
	return(0);
}

void ingresar_elementos()
{
	int op;
	Pila elementos;
	inicpila(&elementos);
	do
	{
		op=0;
		leer(&elementos);
		printf("¿Desea seguir ingresando elementos? (elija la opcion numerica):\n ");
		printf("1-SI \n 2-NO \n");
		scanf("%d",&op);
	}
	while(op==1);
	mostrar(&elementos);
	return(0);
}