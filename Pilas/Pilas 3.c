#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada,distintos,igual;
	inicpila (&dada);
	inicpila (&distintos);
	inicpila (&igual);
	int g=0;
	while (g<5)
	{
		leer(&dada);
		g++;
	}
	while(!pilavacia(&dada))
	{
		if (tope(&dada)==8)
		{
			apilar(&igual, desapilar(&dada));
		}
		else
		{
			apilar(&distintos, desapilar(&dada));
		}
	}
	mostrar(&dada);
	mostrar(&distintos);
	mostrar(&igual);
	getch();
	return(0);
}