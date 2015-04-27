#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila ordenada,dada,menor,aux;
	int g=0;
	inicpila(&dada);
	inicpila(&menor);
	inicpila(&aux);
	inicpila(&ordenada);
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
		while (!pilavacia(&dada))
		{
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
    		apilar(&dada, desapilar (&aux));
    	}
    	apilar (&ordenada, desapilar(&menor));
    }	
    mostrar(&ordenada);
    system("pause");
	return(0);
}