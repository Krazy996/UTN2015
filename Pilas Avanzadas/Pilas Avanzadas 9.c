#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada,aux,aux2,comp;
	int i=0;
	inicpila(&aux2);
	inicpila(&dada);
	inicpila(&aux);
	inicpila(&comp);
	while (i<5)
	{
		leer(&dada);
		i++;
	}
	while(!pilavacia(&dada))
	{
		apilar(&comp,tope(&dada));
		apilar(&aux,desapilar(&dada));
	}
	while (!pilavacia(&aux))
	{
		apilar(&dada,desapilar(&aux));
	}
	//mostrar(&dada);
	//mostrar(&comp);
	while((!pilavacia(&dada)) && (tope(&dada)==tope(&comp)))
	{
		apilar(&aux, desapilar (&dada));
		apilar(&aux2, desapilar (&comp));
	}
	if (pilavacia(&dada))
	{
		printf("La pila es capicua\n");
	}
	else
	{
		printf("La pila no es capicua\n");
	}
	system("pause");
	return(0);
}
