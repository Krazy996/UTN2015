#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
	Pila dada,aux1,aux2;
	inicpila(&dada);
	inicpila(&aux1);
	inicpila(&aux2);
	apilar(&dada, 1);
	apilar(&dada, 2);
	apilar(&dada, 3);
	apilar(&dada, 4);	
	apilar(&dada, 5);
	apilar(&aux1, desapilar(&dada));
	apilar(&aux1, desapilar(&dada));
	apilar(&aux1, desapilar(&dada));
	apilar(&aux2, desapilar(&dada));
	apilar(&aux2, desapilar(&dada));
	mostrar(&dada);
	mostrar(&aux1);
	mostrar(&aux2);
	getch();
	return(0);
}