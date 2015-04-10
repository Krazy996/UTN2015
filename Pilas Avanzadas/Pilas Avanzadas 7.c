#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada,aux,busq;
	int i=0;
	inicpila(&dada);
	inicpila(&aux);
	inicpila(&busq);
	while (i<5)
	{
		leer(&dada);
		i++;
	}
	i=0;
	printf("Cual es el valor que desea buscar en la pila: \n");
	leer(&busq);
	while (!pilavacia(&dada))
	{
		if (tope(&dada)==tope(&busq))
		{
			i=1;
		}
		else
		{
			apilar(&aux, desapilar(&dada));
		}
	}
	if (i=1)
	{
		printf("El valor que busco se encuentra el la pila \n");
	}
	else
	{
		printf("El valor que busco no se encuentra en la pila\n");
	}
	system("pause");
	return(0);
}