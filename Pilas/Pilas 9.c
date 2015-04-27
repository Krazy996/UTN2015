#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	
	Pila a,b,aux1,aux2;
	int cont=0;
	inicpila (&a);
	inicpila(&b);
	inicpila (&aux1);
	inicpila(&aux2);
	printf("Los valores ingresados a continuacion son para la pila A\n");
	while(cont<3)
	{
		leer(&a);
		cont++;
	}
	cont=0;
	printf("Los valores ingresados a continuacion son para la pila B\n");
	while(cont<5)
	{
		leer(&b);
		cont++;
	}
	while(!pilavacia(&a))
	{
		apilar(&aux1, desapilar(&a));
	}
	while (!pilavacia(&b))
	{
		apilar(&aux2, desapilar(&b));
	}
	if (!pilavacia(&a))
	{
		printf("La pila A tiene mas valores que la pila B\n");
	}
	else
	{
		printf("La pila B tiene mas valores que la pila A\n");
	}
	mostrar(&a);
	mostrar(&b);
	getch();
	return 0;
}