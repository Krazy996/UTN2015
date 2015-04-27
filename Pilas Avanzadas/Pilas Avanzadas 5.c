#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada , aux , valor ;
	int g=0 ;
	inicpila(&dada);
	apilar(&dada,1);
	apilar(&dada,2);
	apilar(&dada,4);
	apilar(&dada,5);	
	inicpila(&aux);
	inicpila(&valor);
	leer(&valor);
	while(!pilavacia(&dada) && tope(&dada)>tope(&valor))
	{
		apilar(&aux, desapilar (&dada));
	}
	apilar(&dada , desapilar (&valor));
	while(!pilavacia(&aux))
	{
		apilar(&dada, desapilar (&aux));
	}
	mostrar(&dada);
	system("pause");
	return(0);
}