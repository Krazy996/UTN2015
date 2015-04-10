#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada,aux,comp;
	int i=0;
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
		tope(&comp)=tope(&dada);
		apilar(&aux,desapilar(&dada));
	}
	while(!pilavacia(&aux))
}