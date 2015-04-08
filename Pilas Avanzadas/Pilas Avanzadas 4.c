#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada,menor,aux;
	int g=0;
	inicpila(&dada);
	inicpila(&menor);
	inicpila(&aux);
	while (g<5)
	{
		leer(&dada);
		g++;
	}
	while(!pilavacia(&dada))
	{
		if (pilavacia(&menor))
		{
			apilar(&menor,desapilar(&dada));
		}
		if (tope(&dada)<tope(&menor))
		{
			apilar(&aux, desapilar(&menor));
			apilar(&menor, desapilar(&dada));
		}
		else
		{
			apilar(&aux, desapilar(&dada));
		}
    }
	while (!pilavacia(&aux))
	{
		apilar(&dada,desapilar(&aux));
	}
	mostrar(&dada);
	mostrar(&menor);
	getch();
	return(0);
}