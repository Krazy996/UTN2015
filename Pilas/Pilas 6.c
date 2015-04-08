#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada,top,aux;
	int g=0;
	inicpila(&dada);
	inicpila(&top);
	inicpila(&aux);
	while (g<5)
	{
		leer(&dada);
		g++;
	}
	apilar(&top, desapilar(&dada));
	while (!pilavacia(&dada))
	{
		apilar(&aux, desapilar(&dada));
	}
	apilar(&dada, desapilar(&top));
	while (!pilavacia(&aux))
	{
		apilar(&dada, desapilar(&aux));
	}
	mostrar(&dada);
	getch();
	return(0);
}