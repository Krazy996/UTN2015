#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada,aux1,aux2;
	int g=0;
	inicpila(&dada);
	inicpila(&aux1);
	inicpila(&aux2);
	while (g<5)
	{
		leer(&dada);
		g++;
	}
	mostrar(&dada);
	while (!pilavacia(&dada))
	{
		apilar(&aux1, desapilar(&dada));
	}
	mostrar(&aux1);
	while (!pilavacia(&aux1))
	{
		apilar(&aux2, desapilar(&aux1));
	}
	mostrar(&aux2);
	while (!pilavacia(&aux2))
	{
		apilar(&dada, desapilar(&aux2));
	}
	mostrar(&dada);
	getch();
	return(0);
}